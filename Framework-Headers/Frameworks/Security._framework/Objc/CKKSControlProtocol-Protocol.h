//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSString;

@protocol CKKSControlProtocol
- (void)performanceCounters:(void (^)(NSDictionary *))arg1;
- (void)rpcFetchAndProcessChanges:(NSString *)arg1 reply:(void (^)(NSError *))arg2;
- (void)rpcFetchAndProcessClassAChanges:(NSString *)arg1 reply:(void (^)(NSError *))arg2;
- (void)rpcForceUploadAnalyticsWithReply:(void (^)(BOOL, NSError *))arg1;
- (void)rpcGetAnalyticsJSONWithReply:(void (^)(NSData *, NSError *))arg1;
- (void)rpcGetAnalyticsSysdiagnoseWithReply:(void (^)(NSString *, NSError *))arg1;
- (void)rpcPushOutgoingChanges:(NSString *)arg1 reply:(void (^)(NSError *))arg2;
- (void)rpcResetCloudKit:(NSString *)arg1 reply:(void (^)(NSError *))arg2;
- (void)rpcResetLocal:(NSString *)arg1 reply:(void (^)(NSError *))arg2;
- (void)rpcResync:(NSString *)arg1 reply:(void (^)(NSError *))arg2;
- (void)rpcStatus:(NSString *)arg1 reply:(void (^)(NSArray *, NSError *))arg2;
@end

