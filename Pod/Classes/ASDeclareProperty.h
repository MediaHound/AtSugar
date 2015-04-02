//
//  ASDeclareProperty.h
//  AtSugar
//
//  Created by Dustin Bachrach on 9/28/14.
//  Copyright (c) 2014 Media Hound. All rights reserved.
//

#define declare_class_property(name, value) class __declare__ASNOT_A_CLASS_CLASS__; \
+ (typeof(value))name { return (value); }
