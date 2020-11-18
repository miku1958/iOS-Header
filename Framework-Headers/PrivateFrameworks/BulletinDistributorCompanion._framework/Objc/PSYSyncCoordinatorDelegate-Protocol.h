//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BulletinDistributorCompanion/NSObject-Protocol.h>

@class PSYServiceSyncSession, PSYSyncCoordinator;

@protocol PSYSyncCoordinatorDelegate <NSObject>

@optional
- (void)syncCoordinator:(PSYSyncCoordinator *)arg1 beginSyncSession:(PSYServiceSyncSession *)arg2;
- (void)syncCoordinator:(PSYSyncCoordinator *)arg1 didInvalidateSyncSession:(PSYServiceSyncSession *)arg2;
- (void)syncCoordinatorDidChangeSyncRestriction:(PSYSyncCoordinator *)arg1;
- (void)syncCoordinatorDidReceiveStartSyncCommand:(PSYSyncCoordinator *)arg1;
@end
