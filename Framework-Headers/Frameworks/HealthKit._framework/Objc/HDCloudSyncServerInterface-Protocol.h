//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthKit/NSObject-Protocol.h>

@class NSProgress;

@protocol HDCloudSyncServerInterface <NSObject>
- (void)remote_accountConfigurationDidChangeWithCompletion:(void (^)(BOOL, NSError *))arg1;
- (NSProgress *)remote_disableCloudSyncAndDeleteAllCloudDataWithCompletion:(void (^)(BOOL, NSError *))arg1;
- (void)remote_disableCloudSyncWithCompletion:(void (^)(BOOL, NSError *))arg1;
- (void)remote_enableCloudSyncWithCompletion:(void (^)(BOOL, NSError *))arg1;
- (NSProgress *)remote_fetchCloudDescriptionWithCompletion:(void (^)(NSString *, NSError *))arg1;
- (NSProgress *)remote_fetchCloudSyncProgressWithCompletion:(void (^)(BOOL, NSError *))arg1;
- (void)remote_fetchCloudSyncStatusWithCompletion:(void (^)(BOOL, NSDate *, NSDate *, BOOL, NSError *))arg1;
- (NSProgress *)remote_forceCloudResetWithCompletion:(void (^)(BOOL, NSError *))arg1;
- (NSProgress *)remote_forceCloudSyncDataUploadForProfileWithCompletion:(void (^)(BOOL, NSError *))arg1;
- (NSProgress *)remote_forceCloudSyncWithOptions:(unsigned long long)arg1 reason:(long long)arg2 completion:(void (^)(BOOL, NSError *))arg3;
- (void)remote_oldestSampleStartDateInHealthDatabaseWithCompletion:(void (^)(NSDate *, NSError *))arg1;
@end
