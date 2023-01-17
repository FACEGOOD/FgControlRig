# FgControlRigLib
this is a implement of  UE plugin work for  livelink data process and set the data to metahuman controlrig board


## Compatibility
---
Currently,the plugins has binaries that have been build for UE5.0.3,UE5.1.0.

Source code for the plguin is available on this repository for UE5.1,UE5.0.3

## Build
---
### Dependences
- Visual studio 2019 or later
- UnrealEngine

### Steps
---
- Download this repository
- Use the UnrealEngine create c++ project
- Create "Plugins" folder in your project dirctory
- Put this repository files in your Plugins dirctory
- Click the project file named "*.uproject" with right button and choose "Switch UnrealEngine version" to switch the unreal engine version you want to use
- Click the project file named "*.uproject" with right button and choose "Generate visual studio project files"
- Double click "projectname.sln" to open the solution
- Build visual studio project 

## Install
---
- Copy the Plugins folder to the root dirctory which project you want to use
- Restart your project to active the plugin
- Create a new animation blueprint from the static mesh asset 
- Open the animation blueprint
- Please use the  "ctrl+C" and "ctrl+V" to operate the next two steps
- Copy the content of EventGraph3.txt in to the EventGraph in animation bluerpint
- Copy the content of AnimGraph3.txt in to the AnimGraph in animation bluerpint
- In EventGraph,connect "Event Blueprint begin play" to "Evaluate LiveLink Frame" node upper ,and connect "Event Blueprint udpate animtion" to "Evaluate LiveLink Frame" node down
- Then change "subject" in "evaluate livelink frame" node to which signal source you use 

### EvenGraph
---
![EvenGraph](Resources/Screenshot%202023-01-17%20171114.png)
### AnimGraph
---
![AnimGraph](Resources/Screenshot%202023-01-17%20171244.png)


## License
Appach 2.0
