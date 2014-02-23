This file explains how I runed this example:
http://www.vtk.org/Wiki/ITK/HelloInsight

First install ITK.
follow the instructions [here](INSTALLING ITK and VTK)

Then clone this git into openFrameworks/apps/myApps and do the following:

Run Cmake software
Source path: openFrameworks/apps/myApps/HelloITK
build path: openFrameworks/apps/myApps/HelloITK/build
Click Configure.
	it will ask you to create build dir. ok
	select Xcode, ok
when it finishes, Click generate.
Close Cmake

Go to the path (in terminal)
~ $ cd openFrameworks/apps/myApps/HelloITK/build
Open the Xcode project file
Build it and run it.

You can also run it with this from your HelloITK/build/Debug directory:
$ ./HelloInsight 

Output:
Hello ITK World !
