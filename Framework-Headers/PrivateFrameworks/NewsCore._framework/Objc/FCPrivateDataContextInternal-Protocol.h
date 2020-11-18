//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsCore/NSObject-Protocol.h>

@class FCCKDatabase, FCCKRecordZone, NSString;

@protocol FCPrivateDataContextInternal <NSObject>

@property (readonly, nonatomic) FCCKRecordZone *channelMembershipsRecordZone;
@property (readonly, nonatomic) FCCKDatabase *privateDatabase;
@property (readonly, nonatomic) FCCKRecordZone *readingHistoryRecordZone;
@property (readonly, nonatomic) FCCKRecordZone *readingListRecordZone;
@property (readonly, nonatomic) FCCKRecordZone *subscriptionsRecordZone;
@property (readonly, nonatomic) FCCKRecordZone *userInfoRecordZone;

- (FCCKRecordZone *)recordZoneWithName:(NSString *)arg1;
@end

