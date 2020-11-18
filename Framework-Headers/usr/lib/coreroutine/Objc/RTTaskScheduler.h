//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSUUID, RTBatteryManager, RTDataProtectionManager, RTDeviceRegistry, RTReachabilityManager;
@protocol OS_dispatch_queue;

@interface RTTaskScheduler : NSObject
{
    BOOL _connected;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_tasks;
    RTDataProtectionManager *_dataProtectionManager;
    long long _encryptedDataAvailability;
    RTReachabilityManager *_reachabilityManager;
    long long _reachability;
    RTDeviceRegistry *_deviceRegistry;
    NSUUID *_pairedDeviceIdentifier;
    RTBatteryManager *_batteryManager;
}

@property (strong, nonatomic) RTBatteryManager *batteryManager; // @synthesize batteryManager=_batteryManager;
@property (nonatomic) BOOL connected; // @synthesize connected=_connected;
@property (strong, nonatomic) RTDataProtectionManager *dataProtectionManager; // @synthesize dataProtectionManager=_dataProtectionManager;
@property (strong, nonatomic) RTDeviceRegistry *deviceRegistry; // @synthesize deviceRegistry=_deviceRegistry;
@property (nonatomic) long long encryptedDataAvailability; // @synthesize encryptedDataAvailability=_encryptedDataAvailability;
@property (strong, nonatomic) NSUUID *pairedDeviceIdentifier; // @synthesize pairedDeviceIdentifier=_pairedDeviceIdentifier;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property (nonatomic) long long reachability; // @synthesize reachability=_reachability;
@property (strong, nonatomic) RTReachabilityManager *reachabilityManager; // @synthesize reachabilityManager=_reachabilityManager;
@property (strong, nonatomic) NSMutableArray *tasks; // @synthesize tasks=_tasks;

- (void).cxx_destruct;
- (void)_addTask:(id)arg1;
- (void)_evaluateTaskDependencies:(long long)arg1;
- (void)_evaluateTasks:(id)arg1 forDependencyType:(long long)arg2;
- (void)_onTaskDependencyUpdate:(id)arg1;
- (void)_scheduleTask:(id)arg1 delay:(double)arg2;
- (id)allTasks;
- (void)createDispatchTimerForTask:(id)arg1;
- (void)dealloc;
- (id)dependencyState;
- (void)evaluateTaskDependencies:(long long)arg1;
- (id)init;
- (id)initWithDataProtectionManager:(id)arg1 reachabilityManager:(id)arg2 deviceRegistry:(id)arg3 batteryManager:(id)arg4;
- (void)onTaskDependencyUpdate:(id)arg1;
- (id)scheduleTask:(id)arg1;
- (id)scheduleTasks:(id)arg1;
- (id)taskForIdentifier:(id)arg1;
- (BOOL)taskScheduled:(id)arg1;
- (id)unscheduleTask:(id)arg1;
- (id)unscheduleTasks:(id)arg1;

@end

