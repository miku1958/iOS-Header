//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class RMRelativeMotionManager;

@interface RMMediaSession : NSObject
{
    BOOL _sessionStartedWithTracking;
    RMRelativeMotionManager *_manager;
}

@property (strong, nonatomic) RMRelativeMotionManager *manager; // @synthesize manager=_manager;
@property BOOL sessionStartedWithTracking; // @synthesize sessionStartedWithTracking=_sessionStartedWithTracking;

+ (BOOL)isAvailable;
- (void).cxx_destruct;
- (long long)_currentAudioListenerPose:(id *)arg1;
- (long long)_currentAudioListenerPose:(CDStruct_91d2e2b9 *)arg1 timestamp:(double *)arg2;
- (id)_initWithOptions:(id)arg1;
- (void)_resetTrackingForAllClients;
- (BOOL)_start;
- (void)_stop;
- (void)dealloc;
- (id)init;

@end
