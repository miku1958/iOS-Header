//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/NSObject-Protocol.h>

@class NSProgress, NSUUID;

@protocol HKCloudSyncObserverServerInterface <NSObject>
- (void)remote_startObservingSyncStatusWithCompletion:(void (^)(void))arg1;
- (NSProgress *)remote_startSyncIfRestoreNotCompletedWithUUID:(NSUUID *)arg1 completion:(void (^)(long long, NSError *))arg2;
@end

