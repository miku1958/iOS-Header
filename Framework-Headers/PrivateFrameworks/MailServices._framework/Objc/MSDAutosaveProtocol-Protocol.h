//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MailServices/NSObject-Protocol.h>

@class NSData, NSString;

@protocol MSDAutosaveProtocol <NSObject>
- (void)autosaveMessageData:(NSData *)arg1 replacingIdentifier:(NSString *)arg2 completion:(void (^)(NSString *, NSError *))arg3;
- (void)autosaveSessionForIdentifier:(NSString *)arg1 completion:(void (^)(id<MSDAutosaveSessionProtocol>, NSError *))arg2;
- (void)autosavedMessageDataWithIdentifier:(NSString *)arg1 completion:(void (^)(NSData *, NSError *))arg2;
- (void)getIdleAutosaves:(void (^)(NSArray *, NSError *))arg1;
- (void)hasAutosavedMessageWithIdentifier:(NSString *)arg1 completion:(void (^)(BOOL))arg2;
- (void)removeAutosavedMessageWithIdentifier:(NSString *)arg1;
@end

