//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSTimer, SBFDeviceLockController;

@interface SBFDeviceBlockTimer : NSObject
{
    BOOL _enabled;
    CDUnknownBlockType _handler;
    NSString *_titleText;
    NSString *_subtitleText;
    SBFDeviceLockController *_deviceLockController;
    NSTimer *_timer;
    NSString *_cachedLocalizedPlatformName;
}

@property (copy, nonatomic) NSString *cachedLocalizedPlatformName; // @synthesize cachedLocalizedPlatformName=_cachedLocalizedPlatformName;
@property (strong, nonatomic) SBFDeviceLockController *deviceLockController; // @synthesize deviceLockController=_deviceLockController;
@property (nonatomic) BOOL enabled; // @synthesize enabled=_enabled;
@property (copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property (copy, nonatomic) NSString *subtitleText; // @synthesize subtitleText=_subtitleText;
@property (strong, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property (copy, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;

- (void).cxx_destruct;
- (void)_clearTimer;
- (id)_localizedPlatformName;
- (void)_scheduleTimerIfNecessaryAndUpdateState;
- (void)dealloc;
- (id)initWithDeviceLockController:(id)arg1;
- (void)invalidate;
- (void)start;

@end

