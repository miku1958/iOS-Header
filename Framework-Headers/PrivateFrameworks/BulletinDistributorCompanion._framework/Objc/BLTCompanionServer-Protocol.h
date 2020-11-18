//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BulletinDistributorCompanion/NSObject-Protocol.h>

@class BLTActionInfo, NSDate, NSString;

@protocol BLTCompanionServer <NSObject>
- (void)handleAction:(BLTActionInfo *)arg1;
- (void)handleDidPlayLightsAndSirens:(BOOL)arg1 forBulletin:(NSString *)arg2 inPhoneSection:(NSString *)arg3 transmissionDate:(NSDate *)arg4 receptionDate:(NSDate *)arg5;
- (void)removeBulletinWithPublisherBulletinID:(NSString *)arg1 recordID:(NSString *)arg2 sectionID:(NSString *)arg3;
- (BOOL)shouldSuppressLightsAndSirensNow;
- (void)willSendLightsAndSirensWithPublisherBulletinID:(NSString *)arg1 recordID:(NSString *)arg2 inPhoneSection:(NSString *)arg3 completion:(void (^)(BOOL))arg4;
@end

