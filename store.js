mport Vue from 'vue'
import Vuex from 'vuex'
import createPersistedState from 'vuex-persistedstate'
import gql from 'graphql-tag'
import { getField, updateField } from 'vuex-map-fields'
import _  from 'lodash'
//Used files 
import client from '../apolloServer'
//State models
import menuModel from './models/menuModel'
import projectModel from './models/projectModel'
//Graphql query schemas 
import getProjects from '../schemas/getProjects'
import getColleges from '../schemas/getColleges'
import userVerification from '../schemas/userVerification'
import userLogin from '../schemas/userLogin'
import editProject from '../schemas/editProject'
import addProject from '../schemas/addProject'

Vue.use(Vuex)

const store = new Vuex.Store({
    state: {
        count:0,
        mainMenu: true,
        menu:menuModel,
        selectProject:projectModel,
        projects:[],
        selectUser:{},
        alert:false,
        person: {
          firstName: 'michael',
          lastName: 'jordan',
          age: 50,
          stats: {
            height: 78,
            weight: 180,
            vertical: 90
          }
        } 
    },
    getters: {
        // Add the `getField` getter to the
        // `getters` of your Vuex store instance.
        getField,
    },
    mutations: {
        updateField,
        projectsMutation (state,newValue){
            state.projects = newValue
        },
        addProjectsMutation (state,newValue){
            state.projects.push(newValue)
        },
        userMutation (state,newValue){
            state.selectUser = newValue
        },
        alertMutation (state, newValue){
            state.alert = newValue
        },
        mainMenuMutation (state, newValue){
            state.mainMenu = newValue
        },
        selectProjectMutation (state, newValue){
            _.merge(state.selectProject, newValue)
        },
        menuMutation (state, newValue){
            state.menu = newValue
        }
    },
    actions :{
        getProjects: context => {
            client.query(
               {query: getProjects}
            )
            .then(data => {
                context.commit('projectsMutation',data.data.projectMany)
            })
            .catch(error => console.error(error))
        },
        validate (context, user){
            client.query({query: userLogin(user)})
                 .then(data => {
                     context.commit('userMutation',data.data.userOne)
                 })
                 .catch(error => console.error(error)) 
        },
        alertAction (context){
            context.commit('alertMutation',true)
        },
        selectProjectAction (context,value){
            context.commit('selectProjectMutation',value)
        },
        editProjectAction (context,value){
            client.mutate({mutation:editProject(value)})
                .then(data =>{
                    context.commit('selectProjectMutation',data.data)
                })
                .catch(error => console.log(error))
        },
        addProjectAction (context,value){
            client.mutate({mutation:addProject(value)})
                .then(data =>{
                    context.commit('addProjectsMutation',data.data)
                })
                .catch(error => console.log(error))
        }
    },
    //strict: true
    //plugins: [createPersistedState()]
  })

const validate = function(){
    client.query(
        {query: userVerification()}
    )
    .then(data =>{
        console.log(data)
        return true
    })
    .catch(error => 
       {
        console.log(error)
        return false
    })
}
export default store
