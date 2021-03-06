//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AssistantServices/NSObject-Protocol.h>

@class AFCommandExecutionInfo, AFSyncInfo, NSDictionary, NSString, NSUUID;

@protocol AFProviderService <NSObject>
- (oneway void)beginSyncForServicePath:(NSString *)arg1 className:(NSString *)arg2 requestUUID:(NSUUID *)arg3 info:(AFSyncInfo *)arg4 reply:(void (^)(void))arg5;
- (oneway void)clearDomainObjectsForServicePath:(NSString *)arg1 className:(NSString *)arg2;
- (oneway void)doCommandForServicePath:(NSString *)arg1 className:(NSString *)arg2 infoDictionary:(NSDictionary *)arg3 executionInfo:(AFCommandExecutionInfo *)arg4 reply:(void (^)(NSDictionary *, NSArray *, NSError *))arg5;
- (oneway void)fetchCurrentSyncSnapshotForServicePath:(NSString *)arg1 className:(NSString *)arg2 key:(NSString *)arg3 completion:(void (^)(AFSyncSnapshot *))arg4;
- (oneway void)preheatBundleForServicePath:(NSString *)arg1;
- (oneway void)reloadServiceBundleAtPath:(NSString *)arg1;
- (oneway void)runMaintenanceWorkForServicePath:(NSString *)arg1 className:(NSString *)arg2 completion:(void (^)(void))arg3;
@end

