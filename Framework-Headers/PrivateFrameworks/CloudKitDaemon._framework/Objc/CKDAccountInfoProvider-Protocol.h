//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKitDaemon/NSObject-Protocol.h>

@class CKAccountOverrideInfo, CKContainerID, CKDMescalSession, CKDOperation, CKDServerConfiguration, CKDURLRequest, NSBundle, NSDictionary, NSString, NSURL;

@protocol CKDAccountInfoProvider <NSObject>

@property (readonly, nonatomic) BOOL accountWantsPushRegistration;
@property (readonly, nonatomic) BOOL canAccessAccount;
@property (readonly, nonatomic) BOOL canAuthWithCloudKit;
@property (readonly, nonatomic) CKAccountOverrideInfo *fakeAccountInfo;
@property (readonly, nonatomic) BOOL isAnonymousAccount;
@property (readonly, nonatomic) BOOL isCarryAccount;
@property (readonly, nonatomic) BOOL isUnitTestingAccount;
@property (readonly, nonatomic) BOOL isiCloudDevEnvironmentAccount;

- (NSBundle *)applicationBundle;
- (NSURL *)baseURLForServerType:(long long)arg1 partitionType:(long long)arg2;
- (NSString *)bundleID;
- (void)cloudKitAuthTokenWithCompletionHandler:(void (^)(NSString *, NSError *))arg1;
- (CKDServerConfiguration *)config;
- (CKContainerID *)containerID;
- (NSString *)containerScopedUserID;
- (NSString *)deviceName;
- (NSString *)dsid;
- (void)fetchConfigurationForOperation:(CKDOperation *)arg1 withCompletionHandler:(void (^)(CKDServerConfiguration *, NSError *))arg2;
- (void)fetchDeviceIDForOperation:(CKDOperation *)arg1 withCompletionHandler:(void (^)(NSString *, NSError *))arg2;
- (void)fetchImportantUserIDsForOperation:(CKDOperation *)arg1 withCompletionHandler:(void (^)(NSString *, NSString *, NSError *))arg2;
- (void)fetchPrivateURLForServerType:(long long)arg1 operation:(CKDOperation *)arg2 completionHandler:(void (^)(NSURL *, NSError *))arg3;
- (void)fetchPublicURLForServerType:(long long)arg1 operation:(CKDOperation *)arg2 completionHandler:(void (^)(NSURL *, NSError *))arg3;
- (void)fetchServerEnvironmentForOperation:(CKDOperation *)arg1 withCompletionHandler:(void (^)(long long, NSError *))arg2;
- (NSString *)hardwareID;
- (void)iCloudAuthTokenWithCompletionHandler:(void (^)(NSString *, NSError *))arg1;
- (NSString *)languageCode;
- (CKDMescalSession *)mescalSession;
- (NSString *)regionCode;
- (void)renewCloudKitAuthTokenWithReason:(NSString *)arg1 shouldForce:(BOOL)arg2 failedToken:(NSString *)arg3 completionHandler:(void (^)(BOOL, NSError *))arg4;
- (void)renewMescalSessionForRequest:(CKDURLRequest *)arg1 withCompletionHandler:(void (^)(BOOL, NSError *))arg2;
- (void)renewiCloudAuthTokenWithReason:(NSString *)arg1 shouldForce:(BOOL)arg2 failedToken:(NSString *)arg3 completionHandler:(void (^)(BOOL, NSError *))arg4;
- (void)resetMescalSession;
- (NSString *)serverPreferredPushEnvironment;
- (BOOL)shouldFailAllTasks;
- (NSString *)trafficContainerIdentifier;

@optional
- (NSDictionary *)additionalHeaderValues;
- (void)noteFailedNetworkRequest;
- (void)noteFailedProtocolRequest;
- (void)noteSuccessfulRequestWithNumDownloadedElements:(long long)arg1;
- (void)noteTimeSpentInNetworking:(double)arg1;
@end

