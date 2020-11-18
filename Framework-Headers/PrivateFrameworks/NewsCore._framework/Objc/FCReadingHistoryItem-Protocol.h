//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsCore/NSCopying-Protocol.h>
#import <NewsCore/NSMutableCopying-Protocol.h>
#import <NewsCore/NSObject-Protocol.h>

@class CKRecord, NSDate, NSString;

@protocol FCReadingHistoryItem <NSObject, NSCopying, NSMutableCopying>

@property (readonly, copy, nonatomic) NSString *articleID;
@property (readonly, nonatomic) unsigned long long articleLikingStatus;
@property (readonly, nonatomic) CKRecord *asCKRecord;
@property (readonly, copy, nonatomic) NSString *deviceID;
@property (readonly, copy, nonatomic) NSDate *firstSeenAt;
@property (readonly, copy, nonatomic) NSDate *firstSeenAtOfMaxVersionSeen;
@property (readonly, nonatomic) unsigned long long flags;
@property (readonly, nonatomic) BOOL hasArticleBeenConsumed;
@property (readonly, nonatomic) BOOL hasArticleBeenMarkedOffensive;
@property (readonly, nonatomic) BOOL hasArticleBeenRead;
@property (readonly, nonatomic) BOOL hasArticleBeenSeen;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSDate *lastVisitedAt;
@property (readonly, nonatomic) long long maxVersionRead;
@property (readonly, nonatomic) long long maxVersionSeen;
@property (readonly, copy, nonatomic) NSString *sourceChannelTagID;

@end
