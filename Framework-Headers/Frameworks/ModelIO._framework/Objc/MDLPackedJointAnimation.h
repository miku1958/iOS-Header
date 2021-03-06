//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ModelIO/MDLObject.h>

#import <ModelIO/MDLJointAnimation-Protocol.h>
#import <ModelIO/NSCopying-Protocol.h>

@class MDLAnimatedQuaternionArray, MDLAnimatedVector3Array, NSArray;

@interface MDLPackedJointAnimation : MDLObject <NSCopying, MDLJointAnimation>
{
    NSArray *_jointPaths;
    MDLAnimatedVector3Array *_translations;
    MDLAnimatedQuaternionArray *_rotations;
    MDLAnimatedVector3Array *_scales;
}

@property (readonly, nonatomic) NSArray *jointPaths; // @synthesize jointPaths=_jointPaths;
@property (readonly, nonatomic) MDLAnimatedQuaternionArray *rotations; // @synthesize rotations=_rotations;
@property (readonly, nonatomic) MDLAnimatedVector3Array *scales; // @synthesize scales=_scales;
@property (readonly, nonatomic) MDLAnimatedVector3Array *translations; // @synthesize translations=_translations;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithName:(id)arg1 jointPaths:(id)arg2;

@end

