//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BulletinDistributorCompanion/NSObject-Protocol.h>

@class NSUUID, PSYInitialSyncStateObserver;

@protocol PSYInitialSyncStateObserverDelegate <NSObject>

@optional
- (void)initialSyncStateObserver:(PSYInitialSyncStateObserver *)arg1 initialSyncDidCompleteForPairingIdentifier:(NSUUID *)arg2;
- (void)initialSyncStateObserver:(PSYInitialSyncStateObserver *)arg1 syncDidCompleteForPairingIdentifier:(NSUUID *)arg2;
- (void)initialSyncStateObserver:(PSYInitialSyncStateObserver *)arg1 syncDidResetForPairingIdentifier:(NSUUID *)arg2;
- (void)initialSyncStateObserverClientCanRetryFailedRequests:(PSYInitialSyncStateObserver *)arg1;
@end
