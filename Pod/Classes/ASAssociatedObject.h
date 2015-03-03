//
//  ASAssociatedObject.h
//  AtSugar
//
//  Created by Dustin Bachrach on 11/7/14.
//
//

#define associated_object(getter, setter) associated_object_with_association(getter, setter, OBJC_ASSOCIATION_RETAIN_NONATOMIC)

#define associated_object_assign(getter, setter) associated_object_with_association(getter, setter, OBJC_ASSOCIATION_ASSIGN)

#define associated_object_copy(getter, setter) associated_object_with_association(getter, setter, OBJC_ASSOCIATION_COPY_NONATOMIC)

#define associated_object_with_association(getter, setter, association) dynamic getter; \
- (void)setter:(id)value \
{ \
    objc_setAssociatedObject(self, @selector(getter), value, association); \
} \
- (id)getter \
{ \
    return objc_getAssociatedObject(self, @selector(getter)); \
}
