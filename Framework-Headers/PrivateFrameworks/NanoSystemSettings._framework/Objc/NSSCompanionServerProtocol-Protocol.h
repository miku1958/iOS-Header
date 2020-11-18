//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoSystemSettings/NSSServerProtocol-Protocol.h>

@class NSData, NSString;

@protocol NSSCompanionServerProtocol <NSSServerProtocol>
- (void)getAboutInfo:(void (^)(NSDictionary *, NSError *))arg1;
- (void)getAccountsInfoForAccountType:(NSString *)arg1 completionHandler:(void (^)(NSDictionary *, NSError *))arg2;
- (void)getLegalDocuments:(void (^)(NSDictionary *, NSError *))arg1;
- (void)getLocalesInfo:(void (^)(NSDictionary *, NSError *))arg1;
- (void)getProfileWithIdentifier:(NSString *)arg1 replyHandler:(void (^)(NSData *, NSError *))arg2;
- (void)getProfilesInfo:(void (^)(NSDictionary *, NSError *))arg1;
- (void)getUsage:(void (^)(NSDictionary *, NSError *))arg1;
- (void)installProfile:(NSData *)arg1 replyHandler:(void (^)(NSError *))arg2;
- (void)obliterateGizmo:(void (^)(NSError *))arg1;
- (void)purgeUsageBundle:(NSString *)arg1 replyHandler:(void (^)(NSError *))arg2;
- (void)rebootDevice;
- (void)removeProfileWithIdentifier:(NSString *)arg1 replyHandler:(void (^)(NSError *))arg2;
- (void)setDeviceName:(NSString *)arg1;
@end

