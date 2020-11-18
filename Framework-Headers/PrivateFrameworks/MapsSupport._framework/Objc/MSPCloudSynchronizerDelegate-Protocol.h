//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapsSupport/NSObject-Protocol.h>

@class MSPCloudRepeatableTask, MSPCloudSynchronizer, NSDate, NSError, NSString, NSUUID;

@protocol MSPCloudSynchronizerDelegate <NSObject>
- (NSDate *)storedBoostDateForSynchronizer:(MSPCloudSynchronizer *)arg1;
- (NSUUID *)storedClientRegistrationIdentifierForSynchronizer:(MSPCloudSynchronizer *)arg1;
- (NSString *)storedUserIdentityForSynchronizer:(MSPCloudSynchronizer *)arg1;
- (void)synchronizer:(MSPCloudSynchronizer *)arg1 didFailAttemptingTask:(MSPCloudRepeatableTask *)arg2 withError:(NSError *)arg3 reattemptingAfterDate:(NSDate *)arg4;
- (void)synchronizer:(MSPCloudSynchronizer *)arg1 storeNewBoostDate:(NSDate *)arg2;
- (void)synchronizer:(MSPCloudSynchronizer *)arg1 storeNewClientRegistrationIdentifier:(NSUUID *)arg2;
- (void)synchronizer:(MSPCloudSynchronizer *)arg1 storeNewUserIdentity:(NSString *)arg2;
- (void)synchronizer:(MSPCloudSynchronizer *)arg1 userIdentityDidLogOutWithFollowUp:(long long)arg2;
- (MSPCloudRepeatableTask *)taskToDownloadCloudStoreByErasingLocalStoreForSynchronizer:(MSPCloudSynchronizer *)arg1;
- (MSPCloudRepeatableTask *)taskToMergeLocalAndCloudStoresForSynchronizer:(MSPCloudSynchronizer *)arg1;
@end

