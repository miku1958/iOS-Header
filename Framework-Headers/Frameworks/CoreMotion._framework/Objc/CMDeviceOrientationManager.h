//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CMDeviceOrientationManager : NSObject
{
    id _internal;
}

+ (void)dummySelector:(id)arg1;
+ (void)initialize;
- (void)dealloc;
- (void)deallocPrivate;
- (id)deviceOrientationBlocking;
- (id)init;
- (id)initPrivate;
- (BOOL)isDeviceOrientationActive;
- (BOOL)isDeviceOrientationAvailable;
- (void)onDeviceOrientation:(const struct Sample *)arg1;
- (void)onMotionPreferencesUpdated;
- (void)onNotification:(id)arg1;
- (BOOL)orientationNotificationsDisabled;
- (void)setDeviceOrientationCallbackModePrivate:(int)arg1;
- (void)signalAndReleaseSemaphoreIfNecessaryPrivate;
- (void)startDeviceOrientationUpdatesPrivateToQueue:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)startDeviceOrientationUpdatesToQueue:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)stopDeviceOrientationUpdates;
- (void)stopDeviceOrientationUpdatesPrivate;
- (id)stringForOrientation:(int)arg1;
- (void)updateAggregateDictionaryPrivate;

@end

