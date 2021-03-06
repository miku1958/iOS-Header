//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DoNotDisturbServer/NSObject-Protocol.h>

@class DNDSModeAssertionUpdateResult, DNDStateUpdate;
@protocol DNDSAssertionSyncManagerDataSource, DNDSAssertionSyncManagerDelegate;

@protocol DNDSAssertionSyncManager <NSObject>

@property (weak, nonatomic) id<DNDSAssertionSyncManagerDataSource> dataSource;
@property (weak, nonatomic) id<DNDSAssertionSyncManagerDelegate> delegate;

- (void)resume;

@optional
- (void)updateForModeAssertionUpdateResult:(DNDSModeAssertionUpdateResult *)arg1;
- (void)updateForStateUpdate:(DNDStateUpdate *)arg1;
@end

