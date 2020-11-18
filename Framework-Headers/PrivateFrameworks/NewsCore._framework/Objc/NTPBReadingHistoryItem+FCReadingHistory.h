//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsTransport/NTPBReadingHistoryItem.h>

#import <NewsCore/FCKeyValueStoreCoding-Protocol.h>
#import <NewsCore/FCMutableReadingHistoryItem-Protocol.h>

@class CKRecord, NSDate, NSString;

@interface NTPBReadingHistoryItem (FCReadingHistory) <FCMutableReadingHistoryItem, FCKeyValueStoreCoding>

@property (copy, nonatomic) NSString *articleID;
@property (nonatomic) unsigned long long articleLikingStatus;
@property (readonly, nonatomic) CKRecord *asCKRecord;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *deviceID;
@property (copy, nonatomic) NSDate *firstSeenAt;
@property (copy, nonatomic) NSDate *firstSeenAtOfMaxVersionSeen;
@property (readonly, nonatomic) unsigned long long flags;
@property (nonatomic) BOOL hasArticleBeenConsumed;
@property (nonatomic) BOOL hasArticleBeenMarkedOffensive;
@property (nonatomic) BOOL hasArticleBeenRead;
@property (nonatomic) BOOL hasArticleBeenSeen;
@property (nonatomic) BOOL hasArticleCompletedListening;
@property (readonly) unsigned long long hash;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSDate *lastListenedAt;
@property (copy, nonatomic) NSDate *lastVisitedAt;
@property (nonatomic) double listeningProgress;
@property (copy, nonatomic) NSDate *listeningProgressSavedAt;
@property (nonatomic) long long maxVersionRead;
@property (nonatomic) long long maxVersionSeen;
@property (nonatomic) long long readCount;
@property (copy, nonatomic) NSString *readingPosition;
@property (copy, nonatomic) NSDate *readingPositionSavedAt;
@property (copy, nonatomic) NSString *sourceChannelTagID;
@property (readonly) Class superclass;

+ (int)keyValuePairType;
+ (id)readValueFromKeyValuePair:(id)arg1;
+ (id)readingHistoryItemWithCKRecord:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)writeToKeyValuePair:(id)arg1;
@end
