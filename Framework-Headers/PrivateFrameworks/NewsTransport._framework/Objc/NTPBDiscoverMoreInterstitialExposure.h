//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSString;

@interface NTPBDiscoverMoreInterstitialExposure : PBCodable <NSCopying>
{
    int _nextArticleAffordanceType;
    NSString *_tappedNextArticleAffordanceFeedId;
    int _userAction;
    BOOL _withNextArticleAffordance;
    struct {
        unsigned int nextArticleAffordanceType:1;
        unsigned int userAction:1;
        unsigned int withNextArticleAffordance:1;
    } _has;
}

@property (nonatomic) BOOL hasNextArticleAffordanceType;
@property (readonly, nonatomic) BOOL hasTappedNextArticleAffordanceFeedId;
@property (nonatomic) BOOL hasUserAction;
@property (nonatomic) BOOL hasWithNextArticleAffordance;
@property (nonatomic) int nextArticleAffordanceType; // @synthesize nextArticleAffordanceType=_nextArticleAffordanceType;
@property (strong, nonatomic) NSString *tappedNextArticleAffordanceFeedId; // @synthesize tappedNextArticleAffordanceFeedId=_tappedNextArticleAffordanceFeedId;
@property (nonatomic) int userAction; // @synthesize userAction=_userAction;
@property (nonatomic) BOOL withNextArticleAffordance; // @synthesize withNextArticleAffordance=_withNextArticleAffordance;

- (void).cxx_destruct;
- (int)StringAsNextArticleAffordanceType:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)nextArticleAffordanceTypeAsString:(int)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

