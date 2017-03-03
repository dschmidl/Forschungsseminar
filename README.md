Tobii EyeX Plugin for Unreal Engine 4
=====================================

Overview
--------
The [Tobii EyeX](http://www.tobii.com/eyex) Plugin for [Unreal Engine 4](https://www.unrealengine.com) 
makes it possible to create games that the player can interact with using her 
eyes. It does that by integrating the Tobii EyeX Engine API into the Unreal 
Engine development environment.

The plugin can be inserted into any game built with the Unreal Engine 4 and
used from both Blueprints and C++ code.

Prerequisites
-------------
* A [Tobii EyeX Dev Kit](http://www.tobii.com/buy-eyex/) or other compatible Tobii eye tracker, such as the Tobii REX or Tobii X2-30.
* [Unreal Engine](https://www.unrealengine.com) 4.6-4.12.
* For UE 4.6-4.9: Visual Studio 2013. Tested with Professional edition; we think it also should work fine with the free  [Visual Studio Express Windows Desktop edition](http://www.visualstudio.com/downloads/download-visual-studio-vs#d-express-windows-desktop).
* For UE 4.10-4.12: Visual Studio 2015. Tested with Community edition. (For UE 4.10  and higher, the launcher distribution of the engine requires Visual Studio 2015 with C++ support enabled.)

Getting started
---------------
1. Take a look at the developer's guide in this package. Just read through the
   introduction: there's plenty of useful information in there and we don't
   want to repeat it here.

2. Download the necessary EyeX plugin files:
   - (Switch to the "v/4.X" that match the UE4 version you are using, and clone
     or download this repository from GitHub.)
   - Download the EyeX SDK for C/C++ from [developer.tobii.com](http://developer.tobii.com/downloads). 
   - Extract the EyeX SDK files and copy the lib and include directories to the
     `Plugins/TobiiEyeX/ThirdParty/EyeX` folder of the EyeX plugin. (Note that 
	 the SDK license differs from the one used for this plugin.)

3. Locate the `EyeXSamples.uproject` file in the EyeX Plugin package. Right-
   click and select "Switch Unreal Engine version..." and "4.X" in the dropdown
   menu. Open the Visual Studio solution file that appears. Build and run the 
   sample project (EyeXSamples). The EyeXSamples editor should launch. Click 
   play to start the samples.

4. To import the plugin into your own game project:
   - Create a new directory in your Unreal project directory called "Plugins".
   - Copy the contents of the Plugins directory in this repository into that
     directory.
   - Start the editor and open the plugin viewer (can be found in the
     Windows->Plugins menu).
   - Add a reference to the module in your build script (MYPROJECT.Build.cs).
     The relevant row might look something like:
     `PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject",
     "Engine", "InputCore", "TobiiEyeX" });`

5. Use the plugin through the EyeX function library (Blueprints) and/or the
   IEyeXPlugin interface (C++).

**HAVE FUN!!!**

Contact
-------
If you have problems, questions, ideas, or suggestions, please use the forums
on the [Tobii Developer Zone](http://developer.tobii.com/).

Branches
--------
Use the branches with the naming format "v/4.X". They have been tested and 
should work with Unreal Engine version 4.X.
The state and compatibility of the master branch is undefined. 
Branches are added from time to time to work with newer UE4 versions.

Contributing
------------
You're always welcome to submit a Pull Request on GitHub.

By contributing code to this project, you agree to license your contributed code
under the same terms as the rest of the source code in the repository.

Revision history
----------------
* 4 Dec 2014: First public release.
* 19 Sep 2015: Support for UE4.6 and 4.7
* 20 Sep 2015: Support for UE4.8 and 4.9
* 21 Jan 2016: Added version branch for UE4.10 (only Engine Association changed)
* 21 Jun 2016: Added version branch for UE4.11 & UE4.12

Contributors
------------
* Tim Lindeberg  
* The Tobii developer communications team  
* Fredrik Lindh ([@Temaran](https://github.com/Temaran)), who set the ball rolling  
* Special thanks to [@getnamo](https://github.com/getnamo) whose unofficial Hydra plugin has been very useful
as a working example of plugin code.
