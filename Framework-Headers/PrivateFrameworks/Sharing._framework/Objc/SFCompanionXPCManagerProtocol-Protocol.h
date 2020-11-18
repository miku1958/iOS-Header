//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Sharing/NSObject-Protocol.h>

@class NSDictionary, NSNumber, NSString;
@protocol SFActivityAdvertiserClient, SFAirDropTransferDataProviderClient, SFCompanionServiceManagerClient, SFContinuityScannerClient;

@protocol SFCompanionXPCManagerProtocol <NSObject>
- (void)addAirDropClientToManager:(id<SFAirDropTransferDataProviderClient>)arg1;
- (void)createActivityAdvertiserForClientProxy:(id<SFActivityAdvertiserClient>)arg1 reply:(void (^)(id<SFActivityAdvertiserProtocol>, NSError *))arg2;
- (void)createAirDropTransferDataProviderForClientProxy:(id<SFAirDropTransferDataProviderClient>)arg1 WithReply:(void (^)(id<SFAirDropTransferDataProviderProtocol>, NSError *))arg2;
- (void)createCompanionServiceManagerWithIdentifier:(NSString *)arg1 clientProxy:(id<SFCompanionServiceManagerClient>)arg2 reply:(void (^)(id<SFCompanionServiceManagerProtocol>, NSString *, NSString *, NSString *, NSError *))arg3;
- (void)createContinuityScannerForClientProxy:(id<SFContinuityScannerClient>)arg1 reply:(void (^)(id<SFContinuityScannerProtocol>, NSError *))arg2;
- (void)createStreamsForMessage:(NSDictionary *)arg1 reply:(void (^)(NSFileHandle *, NSError *))arg2;
- (void)createUnlockManagerWithReply:(void (^)(id<SFUnlockProtocol>, NSError *))arg1;
- (void)userDidPerformActionWithType:(unsigned long long)arg1 andRecordID:(NSString *)arg2;
- (void)userDidSelectAppWithIndex:(NSNumber *)arg1 forRecordID:(NSString *)arg2;
@end
