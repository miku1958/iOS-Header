//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CADisplayLink, CMMotionManager, MISSING_TYPE, NSMutableArray;

@interface PKMotionManager : NSObject
{
    CMMotionManager *_motion;
    NSMutableArray *_clients;
    MISSING_TYPE *_currentRollPitch;
    union _GLKQuaternion _restingQuaternion;
    CADisplayLink *_displayLink;
    CDUnknownBlockType _rollPitchForDeviceMotionHandler;
}

@property (copy, nonatomic) CDUnknownBlockType rollPitchForDeviceMotionHandler; // @synthesize rollPitchForDeviceMotionHandler=_rollPitchForDeviceMotionHandler;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (BOOL)isClientRegistered:(id)arg1;
- (void)registerClient:(id)arg1;
- (void)unregisterClient:(id)arg1;
- (void)updateWithMotion:(id)arg1;

@end

