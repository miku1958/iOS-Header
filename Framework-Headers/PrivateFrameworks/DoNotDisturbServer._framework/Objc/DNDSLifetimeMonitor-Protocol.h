//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DoNotDisturbServer/NSObject-Protocol.h>

@class NSArray, NSDate;
@protocol DNDSLifetimeMonitorDataSource, DNDSLifetimeMonitorDelegate;

@protocol DNDSLifetimeMonitor <NSObject>

@property (readonly, copy, nonatomic) NSArray *activeLifetimeAssertionUUIDs;
@property (weak, nonatomic) id<DNDSLifetimeMonitorDataSource> dataSource;
@property (weak, nonatomic) id<DNDSLifetimeMonitorDelegate> delegate;

- (void)refreshMonitorForDate:(NSDate *)arg1;
@end

