//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeAI/HMISystemResourceUsageMonitorProtocol-Protocol.h>

@class HMISystemResourceUsageMonitorImpl, NSObject;
@protocol HMISystemResourceUsageMonitorDelegate, OS_dispatch_queue;

@interface HMISystemResourceUsageMonitor : HMFObject <HMISystemResourceUsageMonitorProtocol>
{
    HMISystemResourceUsageMonitorImpl *_systemResourceUsageMonitorImpl;
    NSObject<OS_dispatch_queue> *_workQueue;
}

@property (weak) id<HMISystemResourceUsageMonitorDelegate> delegate;
@property (readonly) HMISystemResourceUsageMonitorImpl *systemResourceUsageMonitorImpl; // @synthesize systemResourceUsageMonitorImpl=_systemResourceUsageMonitorImpl;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;

- (void).cxx_destruct;
- (id)getCurrentSystemResourceUsage;
- (id)init;
- (void)start;

@end

