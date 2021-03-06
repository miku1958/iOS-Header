//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SBSHardwareButtonService;
@protocol CKCamPhysicalCaptureNotifierDelegate;

@interface CKCamPhysicalCaptureNotifier : NSObject
{
    BOOL _enabled;
    id<CKCamPhysicalCaptureNotifierDelegate> _delegate;
    long long _state;
    long long __volumeUpButtonState;
    long long __volumeDownButtonState;
    SBSHardwareButtonService *__cameraButtonRequest;
}

@property (strong, nonatomic) SBSHardwareButtonService *_cameraButtonRequest; // @synthesize _cameraButtonRequest=__cameraButtonRequest;
@property (nonatomic, setter=_setVolumeDownButtonState:) long long _volumeDownButtonState; // @synthesize _volumeDownButtonState=__volumeDownButtonState;
@property (nonatomic, setter=_setVolumeUpButtonState:) long long _volumeUpButtonState; // @synthesize _volumeUpButtonState=__volumeUpButtonState;
@property (weak, nonatomic) id<CKCamPhysicalCaptureNotifierDelegate> delegate; // @synthesize delegate=_delegate;
@property (nonatomic, getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
@property (nonatomic, setter=_setState:) long long state; // @synthesize state=_state;

- (void).cxx_destruct;
- (void)_handleVolumeDownButtonDownNotification:(id)arg1;
- (void)_handleVolumeDownButtonUpNotification:(id)arg1;
- (void)_handleVolumeUpButtonDownNotification:(id)arg1;
- (void)_handleVolumeUpButtonUpNotification:(id)arg1;
- (void)_updateCaptureButtonNotifications;
- (void)_updateStateAndNotifyDelegateIfNeeded;
- (void)dealloc;
- (id)init;

@end

