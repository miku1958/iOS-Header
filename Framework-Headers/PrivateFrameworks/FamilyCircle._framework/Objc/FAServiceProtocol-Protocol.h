//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FamilyCircle/NSObject-Protocol.h>

@class NSArray, NSData, NSDictionary, NSNumber, NSString;

@protocol FAServiceProtocol <NSObject>
- (void)addFamilyMemberWithAppleID:(NSString *)arg1 password:(NSString *)arg2 isUnder13:(BOOL)arg3 options:(NSDictionary *)arg4 replyBlock:(void (^)(BOOL, NSString *, NSError *))arg5;
- (void)clearFamilyCircleCacheWithReplyBlock:(void (^)(NSError *))arg1;
- (void)didReceiveFamilyEventPushNotificationWithPayload:(NSDictionary *)arg1 options:(NSDictionary *)arg2 replyBlock:(void (^)(NSError *))arg3;
- (void)dispatchFamilyPushNotificationWithPayload:(NSDictionary *)arg1 options:(NSDictionary *)arg2 replyBlock:(void (^)(NSError *))arg3;
- (void)fetchFamilyCircleWithExpectedDSIDs:(NSArray *)arg1 signedInAccountShouldBeApprover:(BOOL)arg2 forceServerFetch:(BOOL)arg3 doNotFetchFromServer:(BOOL)arg4 options:(NSDictionary *)arg5 replyBlock:(void (^)(NSDictionary *, FAFamilyCircle *, NSError *))arg6;
- (void)fetchFamilyMemberPhotoWithDSID:(NSNumber *)arg1 hashedDSID:(NSString *)arg2 size:(long long)arg3 localFallback:(BOOL)arg4 options:(NSDictionary *)arg5 replyBlock:(void (^)(NSData *, long long, NSError *))arg6;
- (void)launchiCloudFamilySettings;
- (void)registerPushToken:(NSData *)arg1 options:(NSDictionary *)arg2 replyBlock:(void (^)(NSError *))arg3;
- (void)removeFamilyMemberWithDSID:(NSNumber *)arg1 options:(NSDictionary *)arg2 replyBlock:(void (^)(BOOL, NSNumber *, NSError *))arg3;
- (void)updateFamilyMemberFlagWithDSID:(NSNumber *)arg1 flag:(NSString *)arg2 enabled:(BOOL)arg3 replyBlock:(void (^)(NSError *))arg4;
@end

