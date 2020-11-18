//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CompanionSync/NSObject-Protocol.h>

@class NSData, NSDictionary, NSError, NSString, NSURL, PBCodable, SYMessageHeader;

@protocol SYSyncEngineResponder <NSObject>

@property (readonly, nonatomic) NSDictionary *extraTransportOptions;

- (void)currentDeviceProximityChanged:(BOOL)arg1;
- (void)deliveredMessageWithID:(NSString *)arg1 context:(NSDictionary *)arg2;
- (void)enqueuedMessageWithID:(NSString *)arg1 context:(NSDictionary *)arg2;
- (void)handleFileTransfer:(NSURL *)arg1 metadata:(NSDictionary *)arg2 completion:(void (^)(BOOL, NSError *))arg3;
- (void)handleOutOfBandData:(NSData *)arg1 completion:(void (^)(BOOL, NSError *))arg2;
- (void)handleSyncError:(NSError *)arg1 forMessageWithIdentifier:(NSString *)arg2;
- (void)handleSyncRequest:(PBCodable *)arg1 ofType:(unsigned short)arg2 response:(void (^)(PBCodable *, NSDictionary *))arg3;
- (void)handleSyncResponse:(PBCodable *)arg1 ofType:(unsigned short)arg2 completion:(void (^)(BOOL, NSError *))arg3;
- (void)sentMessageWithID:(NSString *)arg1 context:(NSDictionary *)arg2;
- (void)serializeForIncomingSession:(void (^)(void))arg1;
- (BOOL)willAcceptMessageWithHeader:(SYMessageHeader *)arg1 messageID:(NSString *)arg2;
@end

