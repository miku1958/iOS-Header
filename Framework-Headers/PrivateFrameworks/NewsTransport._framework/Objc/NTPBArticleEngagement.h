//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSData, NSString;

@interface NTPBArticleEngagement : PBCodable <NSCopying>
{
    long long _articleOpenedAtTimestamp;
    long long _eventTimestamp;
    int _articleEngagementType;
    NSString *_articleId;
    NSString *_channelId;
    NSString *_countryCode;
    NSData *_sessionId;
    NSString *_userId;
    int _utcOffset;
    BOOL _isPaidSubscriber;
    struct {
        unsigned int articleOpenedAtTimestamp:1;
        unsigned int eventTimestamp:1;
        unsigned int articleEngagementType:1;
        unsigned int utcOffset:1;
        unsigned int isPaidSubscriber:1;
    } _has;
}

@property (nonatomic) int articleEngagementType; // @synthesize articleEngagementType=_articleEngagementType;
@property (strong, nonatomic) NSString *articleId; // @synthesize articleId=_articleId;
@property (nonatomic) long long articleOpenedAtTimestamp; // @synthesize articleOpenedAtTimestamp=_articleOpenedAtTimestamp;
@property (strong, nonatomic) NSString *channelId; // @synthesize channelId=_channelId;
@property (strong, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property (nonatomic) long long eventTimestamp; // @synthesize eventTimestamp=_eventTimestamp;
@property (nonatomic) BOOL hasArticleEngagementType;
@property (readonly, nonatomic) BOOL hasArticleId;
@property (nonatomic) BOOL hasArticleOpenedAtTimestamp;
@property (readonly, nonatomic) BOOL hasChannelId;
@property (readonly, nonatomic) BOOL hasCountryCode;
@property (nonatomic) BOOL hasEventTimestamp;
@property (nonatomic) BOOL hasIsPaidSubscriber;
@property (readonly, nonatomic) BOOL hasSessionId;
@property (readonly, nonatomic) BOOL hasUserId;
@property (nonatomic) BOOL hasUtcOffset;
@property (nonatomic) BOOL isPaidSubscriber; // @synthesize isPaidSubscriber=_isPaidSubscriber;
@property (strong, nonatomic) NSData *sessionId; // @synthesize sessionId=_sessionId;
@property (strong, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property (nonatomic) int utcOffset; // @synthesize utcOffset=_utcOffset;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
