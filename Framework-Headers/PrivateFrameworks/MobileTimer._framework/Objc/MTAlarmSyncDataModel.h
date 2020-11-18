//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MobileTimer/MTAgentDiagnosticDelegate-Protocol.h>
#import <MobileTimer/MTAlarmObserver-Protocol.h>
#import <MobileTimer/MTSource-Protocol.h>
#import <MobileTimer/MTSyncDataModel-Protocol.h>

@class MTAlarmStorage, MTMetrics, MTSyncServiceManager, NSString;
@protocol NAScheduler, OS_dispatch_queue;

@interface MTAlarmSyncDataModel : NSObject <MTSource, MTAlarmObserver, MTSyncDataModel, MTAgentDiagnosticDelegate>
{
    MTSyncServiceManager *_syncServiceManager;
    MTAlarmStorage *_alarmStorage;
    NSObject<OS_dispatch_queue> *_serialQueue;
    id<NAScheduler> _serializer;
    MTMetrics *_syncMetrics;
}

@property (strong, nonatomic) MTAlarmStorage *alarmStorage; // @synthesize alarmStorage=_alarmStorage;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property (strong, nonatomic) id<NAScheduler> serializer; // @synthesize serializer=_serializer;
@property (readonly) Class superclass;
@property (strong, nonatomic) MTMetrics *syncMetrics; // @synthesize syncMetrics=_syncMetrics;
@property (strong, nonatomic) MTSyncServiceManager *syncServiceManager; // @synthesize syncServiceManager=_syncServiceManager;

+ (CDUnknownBlockType)defaultBlock;
- (void).cxx_destruct;
- (void)_performAction:(id)arg1;
- (void)_performDismiss:(id)arg1;
- (void)_performSnooze:(id)arg1;
- (void)_setupSyncManagerWithBlock:(CDUnknownBlockType)arg1;
- (void)applyChange:(id)arg1;
- (id)dataFileName;
- (id)gatherDiagnostics;
- (id)initWithAlarmStorage:(id)arg1 syncMetrics:(id)arg2;
- (id)initWithAlarmStorage:(id)arg1 syncMetrics:(id)arg2 syncServiceManagerBlock:(CDUnknownBlockType)arg3 serializer:(id)arg4 serialQueue:(id)arg5;
- (BOOL)isFromOtherDevice;
- (void)printDiagnostics;
- (void)resetDataStore;
- (void)source:(id)arg1 didAddAlarms:(id)arg2;
- (void)source:(id)arg1 didChangeNextAlarm:(id)arg2;
- (void)source:(id)arg1 didDismissAlarm:(id)arg2 dismissAction:(unsigned long long)arg3;
- (void)source:(id)arg1 didFireAlarm:(id)arg2 triggerType:(unsigned long long)arg3;
- (void)source:(id)arg1 didRemoveAlarms:(id)arg2;
- (void)source:(id)arg1 didSnoozeAlarm:(id)arg2 snoozeAction:(unsigned long long)arg3;
- (void)source:(id)arg1 didUpdateAlarms:(id)arg2;
- (id)sourceIdentifier;
- (void)startSyncServices;
- (void)stopSyncServices;

@end
