###This file explains how I runed this example:
http://www.vtk.org/Wiki/ITK/HelloInsight

####First install ITK.
Follow the instructions [here](INSTALLING ITK and VTK)

Then clone this git into openFrameworks/apps/myApps and do the following:

⋅⋅⋅Run Cmake software⋅⋅
⋅⋅⋅Source path: openFrameworks/apps/myApps/HelloITK⋅⋅
⋅⋅⋅Build path: openFrameworks/apps/myApps/HelloITK/build⋅⋅
⋅⋅⋅Click Configure⋅⋅
⋅⋅⋅	It will ask you to create build dir. ok⋅⋅
⋅⋅⋅	Select Xcode, ok⋅⋅
⋅⋅⋅When it finishes, Click generate.⋅⋅
⋅⋅⋅Close Cmake⋅⋅

⋅⋅⋅Go to the path (in terminal)⋅⋅
⋅⋅⋅~ $ cd openFrameworks/apps/myApps/HelloITK/build⋅⋅

⋅⋅⋅Open the Xcode project file⋅⋅
⋅⋅⋅Build it and run it.⋅⋅

⋅⋅⋅You can also run it with this from your HelloITK/build/Debug directory:⋅⋅
⋅⋅⋅$ ./HelloInsight ⋅⋅

⋅⋅⋅Output:⋅⋅
⋅⋅⋅Hello ITK World !⋅⋅
