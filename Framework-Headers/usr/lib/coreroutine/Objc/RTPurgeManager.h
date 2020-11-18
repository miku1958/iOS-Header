//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <coreroutine/RTService.h>

@class NSArray, NSObject, RTDarwinNotificationHelper, RTXPCActivityManager;
@protocol OS_dispatch_source;

@interface RTPurgeManager : RTService
{
    NSObject<OS_dispatch_source> *_memoryWarningDispatchSource;
    long long _pressureState;
    RTDarwinNotificationHelper *_notificationHelper;
    NSArray *_purgers;
    RTXPCActivityManager *_xpcActivityManager;
}

@property (strong, nonatomic) NSObject<OS_dispatch_source> *memoryWarningDispatchSource; // @synthesize memoryWarningDispatchSource=_memoryWarningDispatchSource;
@property (strong, nonatomic) RTDarwinNotificationHelper *notificationHelper; // @synthesize notificationHelper=_notificationHelper;
@property (nonatomic) long long pressureState; // @synthesize pressureState=_pressureState;
@property (strong, nonatomic) NSArray *purgers; // @synthesize purgers=_purgers;
@property (readonly, nonatomic) RTXPCActivityManager *xpcActivityManager; // @synthesize xpcActivityManager=_xpcActivityManager;

+ (id)earliestAllowedRawLocationDateWithReferenceDate:(id)arg1;
+ (id)purgeTypeToString:(long long)arg1;
- (void).cxx_destruct;
- (void)_handleLanguageChangeNotification;
- (void)_purge:(CDUnknownBlockType)arg1;
- (void)_purgeWithType:(long long)arg1 referenceDate:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)_registerForMemoryPressureWarnings;
- (void)_shutdown;
- (void)_unregisterForMemoryPressureWarnings;
- (void)clearRoutineWithHandler:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (void)handleLanguageChangeNotification;
- (id)init;
- (id)initWithDefaultsManager:(id)arg1 platform:(id)arg2 purgers:(id)arg3 xpcActivityManager:(id)arg4;
- (void)internalAddObserver:(id)arg1 name:(id)arg2;
- (void)internalRemoveObserver:(id)arg1 name:(id)arg2;
- (void)onCoreLocationPrivacyReset;
- (void)purge:(CDUnknownBlockType)arg1;

@end
