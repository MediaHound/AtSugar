//
//  ASSingleton.h
//  AtSugar
//
//  Created by Dustin Bachrach on 9/28/14.
//  Copyright (c) 2014 Media Hound. All rights reserved.
//

#define singleton(name) class __singleton__NOT_A_CLASS__; + (instancetype)name {\
    {\
        static id sharedInstance = nil;\
        static dispatch_once_t onceToken;\
        dispatch_once(&onceToken, ^{\
            sharedInstance = [[self alloc] init];\
        });\
        return sharedInstance;\
    }\
}
