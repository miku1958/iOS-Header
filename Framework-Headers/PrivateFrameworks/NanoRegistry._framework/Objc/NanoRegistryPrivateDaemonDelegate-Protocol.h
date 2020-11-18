//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NRDeviceCollectionDiff, NSString, NSUUID;

@protocol NanoRegistryPrivateDaemonDelegate
- (void)xpcApplyDiff:(NRDeviceCollectionDiff *)arg1 block:(void (^)(void))arg2;
- (void)xpcBeginMigrationWithDeviceID:(NSUUID *)arg1 passcode:(NSString *)arg2 withBlock:(void (^)(void))arg3;
- (void)xpcGetLastMigrationRequestPhoneNameWithCompletion:(void (^)(NSString *))arg1;
- (void)xpcIsWatchSetupPushActiveWithBlock:(void (^)(BOOL))arg1;
- (void)xpcKeepPhoneUnlockedInternalTestSPI:(void (^)(void))arg1;
- (void)xpcPingActiveGizmoWithPriority:(long long)arg1 withMessageSize:(unsigned long long)arg2 withBlock:(void (^)(BOOL, double, double))arg3;
- (void)xpcSetMigrationConsented:(BOOL)arg1 forDeviceID:(NSUUID *)arg2 withBlock:(void (^)(void))arg3;
- (void)xpcStartWatchSetupPushWithBlock:(void (^)(void))arg1;
- (void)xpcStopWatchSetupPushWithBlock:(void (^)(void))arg1;
- (void)xpcSubmitServerRequestReportWithRequestType:(NSString *)arg1 duration:(double)arg2 errorCode:(unsigned int)arg3 block:(void (^)(void))arg4;
@end

