//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class BLDownloadManifestRequest, BLPurchaseRequest, NSArray, NSDictionary, NSString, NSURL;
@protocol BLUIHostServiceProtocol;

@protocol BLServiceProtocol
- (void)cancelAllActiveDownloadsWithReply:(void (^)(NSError *))arg1;
- (void)cancelDownloadWithID:(NSString *)arg1 withReply:(void (^)(NSError *))arg2;
- (void)downloadWithPermlink:(NSURL *)arg1 title:(NSString *)arg2 reply:(void (^)(NSString *, NSError *))arg3;
- (void)fetchDownloadFromDownloadID:(NSString *)arg1 withReply:(void (^)(BLDownload *, NSError *))arg2;
- (void)fetchDownloadListWithReply:(void (^)(NSArray *, NSError *))arg1;
- (void)flushMetricsWithReply:(void (^)(NSError *))arg1;
- (void)getCrashSimulationOverrideValuesWithReply:(void (^)(BOOL, BOOL, BOOL, BOOL, NSError *))arg1;
- (void)getValueSimulateDeviceOutOfSpaceWithReply:(void (^)(BOOL, NSError *))arg1;
- (void)pauseDownloadWithID:(NSString *)arg1 withReply:(void (^)(NSError *))arg2;
- (void)processAutomaticDownloadsWithReply:(void (^)(NSArray *, NSError *))arg1;
- (void)purchaseWithRequest:(BLPurchaseRequest *)arg1 reply:(void (^)(NSString *, BLPurchaseResponse *, NSError *))arg2;
- (void)purchaseWithRequest:(BLPurchaseRequest *)arg1 uiHostProxy:(id<BLUIHostServiceProtocol>)arg2 reply:(void (^)(NSString *, BLPurchaseResponse *, NSError *))arg3;
- (void)reloadFromServerWithReply:(void (^)(NSError *))arg1;
- (void)requestDownloadWithMetadata:(NSDictionary *)arg1 isRestore:(BOOL)arg2 reply:(void (^)(NSString *, NSError *))arg3;
- (void)requestDownloadWithParameters:(NSDictionary *)arg1 reply:(void (^)(NSString *, NSError *))arg2;
- (void)requestDownloadsWithManifestRequest:(BLDownloadManifestRequest *)arg1 uiHostProxy:(id<BLUIHostServiceProtocol>)arg2 reply:(void (^)(BLDownloadManifestResponse *, NSError *))arg3;
- (void)requestDownloadsWithMetadata:(NSArray *)arg1 areRestore:(BOOL)arg2 reply:(void (^)(NSArray *, NSError *))arg3;
- (void)requestDownloadsWithRestoreContentRequestItems:(NSArray *)arg1 reply:(void (^)(NSArray *, NSError *))arg2;
- (void)resetAllCrashSimulationOverridesWithReply:(void (^)(NSError *))arg1;
- (void)resumeDownloadWithID:(NSString *)arg1 withReply:(void (^)(NSError *))arg2;
- (void)setAutomaticDownloadEnabled:(BOOL)arg1 uiHostProxy:(id<BLUIHostServiceProtocol>)arg2 reply:(void (^)(NSError *))arg3;
- (void)setValueSimulateCrashAtInstallDuringDecrypt:(BOOL)arg1 withReply:(void (^)(NSError *))arg2;
- (void)setValueSimulateCrashAtInstallDuringFinish:(BOOL)arg1 withReply:(void (^)(NSError *))arg2;
- (void)setValueSimulateCrashAtInstallDuringUnzip:(BOOL)arg1 withReply:(void (^)(NSError *))arg2;
- (void)setValueSimulateCrashAtInstallStart:(BOOL)arg1 withReply:(void (^)(NSError *))arg2;
- (void)setValueSimulateDeviceOutOfSpace:(BOOL)arg1 withReply:(void (^)(NSError *))arg2;
@end

