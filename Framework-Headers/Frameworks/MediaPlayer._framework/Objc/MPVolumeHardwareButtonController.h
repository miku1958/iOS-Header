//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol MPVolumeControllerDataSource;

@interface MPVolumeHardwareButtonController : NSObject
{
    double _pendingVolumeChange;
    BOOL _debounceVolumeRepeat;
    BOOL _didRegisterForButtonNotifications;
    id<MPVolumeControllerDataSource> _activeDataSource;
}

@property (strong, nonatomic) id<MPVolumeControllerDataSource> activeDataSource; // @synthesize activeDataSource=_activeDataSource;

+ (id)sharedController;
- (void).cxx_destruct;
- (void)_applicationDidBecomeActiveNotification;
- (void)_applicationWillResignActiveNotification;
- (double)_calculateButtonRepeatDelay;
- (void)_changeVolumeBy:(double)arg1;
- (void)_commitVolumeChange;
- (id)_init;
- (void)_registerForButtonNotificationsIfNeeded;
- (void)_unregisterForButtonNotificationsIfNeeded;
- (void)_volumeDownButtonTouchDown:(id)arg1;
- (void)_volumeDownButtonTouchUp:(id)arg1;
- (void)_volumeUpButtonTouchDown:(id)arg1;
- (void)_volumeUpButtonTouchUp:(id)arg1;
- (void)cancelVolumeEvent;
- (void)decreaseVolume;
- (void)handleVolumeButtonWithType:(long long)arg1 down:(BOOL)arg2;
- (void)increaseVolume;

@end

