//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class HMISystemResourceUsage;
@protocol HMISystemResourceUsageMonitorDelegate;

@protocol HMISystemResourceUsageMonitorProtocol

@property (weak) id<HMISystemResourceUsageMonitorDelegate> delegate;

- (HMISystemResourceUsage *)getCurrentSystemResourceUsage;
- (void)start;
@end
