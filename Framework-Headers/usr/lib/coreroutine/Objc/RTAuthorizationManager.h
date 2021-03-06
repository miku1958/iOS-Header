//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <coreroutine/RTService.h>

@class RTInvocationDispatcher, RTPlatform, RTUserSessionMonitor;

@interface RTAuthorizationManager : RTService
{
    BOOL _supported;
    BOOL _enabled;
    BOOL _ready;
    RTInvocationDispatcher *_dispatcher;
    RTPlatform *_platform;
    RTUserSessionMonitor *_userSessionMonitor;
}

@property (strong, nonatomic) RTInvocationDispatcher *dispatcher; // @synthesize dispatcher=_dispatcher;
@property (nonatomic, getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
@property (strong, nonatomic) RTPlatform *platform; // @synthesize platform=_platform;
@property (nonatomic, getter=isReady) BOOL ready; // @synthesize ready=_ready;
@property (nonatomic, getter=isSupported) BOOL supported; // @synthesize supported=_supported;
@property (strong) RTUserSessionMonitor *userSessionMonitor; // @synthesize userSessionMonitor=_userSessionMonitor;

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (BOOL)supportsNotificationName:(id)arg1;
- (void).cxx_destruct;
- (void)_setup;
- (void)_shutdown;
- (void)dealloc;
- (void)fetchRoutineEnabledWithHandler:(CDUnknownBlockType)arg1;
- (void)fetchRoutineSupportedWithHandler:(CDUnknownBlockType)arg1;
- (void)handleAppResetChangeNotification;
- (id)init;
- (id)initWithPlatform:(id)arg1 userSessionMonitor:(id)arg2;
- (void)internalAddObserver:(id)arg1 name:(id)arg2;
- (void)internalRemoveObserver:(id)arg1 name:(id)arg2;
- (BOOL)isCoreRoutineLocationClientEnabled;
- (BOOL)isLocationServicesEnabled;
- (void)onUserSessionChangeNotification:(id)arg1;
- (void)setRoutineEnabled:(BOOL)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)setup;
- (BOOL)shouldPersistLocations;
- (void)updateRoutineEnabled:(BOOL)arg1;

@end

