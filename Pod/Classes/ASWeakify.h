//
//  ASWeakify.h
//  AtSugar
//
//  Created by Dustin Bachrach on 11/7/14.
//
//

#define weakify(obj) weakify_as((obj), weak_##obj)

#define weakSelf() weakify_as(self, weakSelf)

#define weakify_as(obj, name) try {} @catch (id __weakify__error__) {} \
    __weak typeof((obj)) name = (obj);
