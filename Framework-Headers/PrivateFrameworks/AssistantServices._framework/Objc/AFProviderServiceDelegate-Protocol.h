//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AssistantServices/NSObject-Protocol.h>

@class AFCommandExecutionInfo, NSArray, NSSet, NSString, NSURL, NSUUID, SABaseCommand;

@protocol AFProviderServiceDelegate <NSObject>
- (oneway void)assistantServiceWillCrashForStuckSyncPluginAtPath:(NSString *)arg1;
- (oneway void)dismissAssistant;
- (oneway void)fetchContextsForKeys:(NSSet *)arg1 forRequestID:(NSString *)arg2 includesNearbyDevices:(BOOL)arg3 completion:(void (^)(NSArray *))arg4;
- (oneway void)getCarDNDModeWithReply:(void (^)(BOOL))arg1;
- (oneway void)getLockStateWithReply:(void (^)(BOOL))arg1;
- (oneway void)getStarkModeWithReply:(void (^)(BOOL))arg1;
- (oneway void)getTimeoutSuspendedWithReply:(void (^)(BOOL))arg1;
- (oneway void)handleCommand:(SABaseCommand *)arg1 executionInfo:(AFCommandExecutionInfo *)arg2 completion:(void (^)(SABaseCommand *, NSError *))arg3;
- (oneway void)openURL:(NSURL *)arg1 reply:(void (^)(BOOL))arg2;
- (oneway void)prepareForAudioHandoffFailedWithCompletion:(void (^)(void))arg1;
- (oneway void)prepareForAudioHandoffWithCompletion:(void (^)(BOOL))arg1;
- (oneway void)syncChunksWithPreAnchor:(NSString *)arg1 postAnchor:(NSString *)arg2 updates:(NSArray *)arg3 deletes:(NSArray *)arg4 validity:(NSString *)arg5 forRequestUUID:(NSUUID *)arg6 reply:(void (^)(BOOL))arg7;
@end

