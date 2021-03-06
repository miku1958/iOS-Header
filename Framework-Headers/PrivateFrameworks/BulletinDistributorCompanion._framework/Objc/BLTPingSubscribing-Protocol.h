//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BulletinDistributorCompanion/NSObject-Protocol.h>

@class BBBulletin, NSArray, NSSet, NSString;

@protocol BLTPingSubscribing <NSObject>
- (void)pingSubscriberDidLoad;
- (void)pingWithBulletin:(BBBulletin *)arg1;
- (void)pingWithBulletin:(BBBulletin *)arg1 ack:(void (^)(unsigned long long))arg2;
- (void)pingWithRecordID:(NSString *)arg1 forSectionID:(NSString *)arg2;
- (void)pingWithRecordID:(NSString *)arg1 forSectionID:(NSString *)arg2 ack:(void (^)(unsigned long long))arg3;
- (NSSet *)sectionIDs;
- (NSSet *)sectionIDsForBulletins;
- (NSArray *)subscriptionInfos;
@end

