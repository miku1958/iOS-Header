//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TrialServer/TRIXPCActivityManagementProtocol-Protocol.h>

@class TRIServerContext, TRITaskQueue;
@protocol OS_dispatch_queue;

@interface TRIXPCActivityManager : NSObject <TRIXPCActivityManagementProtocol>
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    TRIServerContext *_context;
    TRITaskQueue *_taskQueue;
}

@property (strong, nonatomic) TRIServerContext *context; // @synthesize context=_context;
@property (strong, nonatomic) TRITaskQueue *taskQueue; // @synthesize taskQueue=_taskQueue;

- (void).cxx_destruct;
- (void)_registerCellularActivityWithDelay:(double)arg1;
- (void)_registerClientTriggeredActivities;
- (void)_registerFetchExperimentsActivity;
- (void)_registerPlaceholderTaskQueueActivity;
- (void)_registerPostUpgradeActivity;
- (void)_registerRetryFailuresActivity;
- (void)_scheduleMaintenanceAndFetchTasksWithActivityDescriptor:(id)arg1 label:(id)arg2;
- (void)_setDelay:(double)arg1 forXPCActivity:(id)arg2 withLabel:(id)arg3;
- (void)_setJitterForXPCActivity:(id)arg1 withLabel:(id)arg2;
- (id)initWithDispatchQueue:(id)arg1;
- (void)postponeCellularActivity;
- (void)registerActivities;

@end
