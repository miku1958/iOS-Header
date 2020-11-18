//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AXAccessQueueTimer, AXNotificationHandler, NSArray, NSDictionary, NSMutableArray;

@interface AXVisualAlertManager : NSObject
{
    unsigned long long _alertTypes;
    AXAccessQueueTimer *_timer;
    AXAccessQueueTimer *_torchForceShutdownTimer;
    NSDictionary *_patterns;
    NSDictionary *_activePattern;
    unsigned long long _activePatternCursor;
    BOOL _shouldRepeatPattern;
    NSDictionary *_patternToUseForVisualAlertAfterCaptureSessionStopsRunning;
    NSArray *_notificationHandlers;
    AXNotificationHandler *_deviceLockStateChangedNotificationHandler;
    AXNotificationHandler *_torchInControlCenterWasEnabledNotificationHandler;
    BOOL _torchDeviceOpen;
    BOOL _torchDeviceOn;
    BOOL _isDeviceLocked;
    BOOL _isQuietModeEnabled;
    BOOL _isTorchEnabledInControlCenter;
    BOOL _captureSessionRunning;
    BOOL _videoConferenceCallRinging;
    BOOL _skipAutomaticStopOnUserInteraction;
    NSMutableArray *_bulletins;
}

+ (id)sharedVisualAlertManager;
- (void)startForAlertTypes:(unsigned long long)arg1 cameraTorchManager:(id)arg2;
- (void)stop;

@end

