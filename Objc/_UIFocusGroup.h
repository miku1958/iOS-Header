//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class _UIFocusGroupDescriptor;

__attribute__((visibility("hidden")))
@interface _UIFocusGroup : NSObject
{
    _UIFocusGroupDescriptor *_descriptor;
    _UIFocusGroup *_parentGroup;
}

@property (readonly, nonatomic, getter=_descriptor) _UIFocusGroupDescriptor *descriptor; // @synthesize descriptor=_descriptor;
@property (readonly, nonatomic) _UIFocusGroup *parentGroup;

- (void).cxx_destruct;
- (id)_commonAncestorWithGroup:(id)arg1;
- (id)childGroupWithDescriptor:(id)arg1;
- (id)debugDescription;
- (id)description;
- (unsigned long long)hash;
- (id)initWithDescriptor:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToFocusGroup:(id)arg1;

@end

