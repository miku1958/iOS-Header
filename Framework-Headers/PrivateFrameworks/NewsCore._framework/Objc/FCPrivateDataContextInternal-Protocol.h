//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsCore/NSObject-Protocol.h>

@class FCCKPrivateDatabase, FCCKRecordZone, NSString;
@protocol FCAppActivityMonitor;

@protocol FCPrivateDataContextInternal <NSObject>

@property (readonly, nonatomic) id<FCAppActivityMonitor> appActivityMonitor;
@property (readonly, nonatomic) FCCKRecordZone *channelMembershipsRecordZone;
@property (readonly, nonatomic) FCCKRecordZone *issueReadingHistoryRecordZone;
@property (readonly, nonatomic) FCCKPrivateDatabase *privateDatabase;
@property (readonly, nonatomic) FCCKRecordZone *readingHistoryRecordZone;
@property (readonly, nonatomic) FCCKRecordZone *readingListRecordZone;
@property (readonly, nonatomic) FCCKRecordZone *sensitiveSubscriptionsRecordZone;
@property (readonly, nonatomic) FCCKRecordZone *subscriptionsRecordZone;
@property (readonly, nonatomic) FCCKRecordZone *userInfoRecordZone;

- (void)prepareRecordZonesForUseWithCompletionHandler:(void (^)(NSError *))arg1;
- (FCCKRecordZone *)recordZoneWithName:(NSString *)arg1;
@end

