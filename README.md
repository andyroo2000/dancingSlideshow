# What is this?

This is a product that is sometimes referred to as a *slideshow* and sometimes as a  *social wall*.

## How is this different than our old social wall/slideshow?

While the previous version was created using **Processing**, this version was created using **openFrameworks**.

## Why is this being re-written?

We were starting to hit framerate limitations with Processing. Because openFrameworks uses C++ rather than Java, it should be much easier to create a more high-performance application.

While we're at it, we are moving away from the practice of syncing to a Dropbox folder full of images from an event and instead, loading images using The Bosco's API. This will allow slideshow moderation from our Admin site, instead of the clumsy process of physically moving files around in a Dropbox folder to remove them from the slideshow. Photos from Instagram booths will be accessed and moderated in the same way.

This should also have the side-effect of making the software platform-independent, as it will no longer need to access the file-system directly.


# How do I start working with this code on my local machine?


1 - Download openFrameworks from here [http://openframeworks.cc/download](http://openframeworks.cc/download/) and move it wherever you would like for it to live.

2 - Navigate to the following folder: `YOUR_OPENFRAMEWORKSFOLDER/apps/myApps/`.

3 - Once you are in that folder, clone the repository to your machine by typing:

`git clone https://github.com/thebosco/socialWall.git socialWall`

Also, this project currently uses the [ofxJSON](https://github.com/jefftimesten/ofxJSON) add on, so if it's not already part of your openFrameworks **addons** folder, you will need to download it to your **addons** folder.

If all goes well, you should be able to double-click on the project name (booth-player.xcodeproj) and edit the code and then build by pressing the **play** button in Xcode.


## What's going on with this code?

Everything you will interact with will be inside the **src** folder.

In fact, almost all of the code you will look at is in the following file: **ofApp.cp**.

That said, there is a *small* amount of configuration that has already been
written in the other two files, **main.cpp** and **ofApp.h**.


## Wait, I want to learn more!

I know, I know... Consider checking out the
[Tutorials](http://openframeworks.cc/tutorials) on the openFrameworks site to
get started.

Also, I highly recommend checking out all of the projects in the **examples**
folder that you downloaded with openFrameworks... They are generally pretty
amazing and can give you ideas about how to make things happen.df
