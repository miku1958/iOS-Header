//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOUser, NSString;

@interface GEOReview : PBCodable <NSCopying>
{
    double _reviewTime;
    double _score;
    NSString *_languageCode;
    GEOUser *_reviewer;
    NSString *_snippet;
    NSString *_uid;
    struct {
        unsigned int reviewTime:1;
        unsigned int score:1;
    } _has;
}

@property (readonly, nonatomic) BOOL hasLanguageCode;
@property (nonatomic) BOOL hasReviewTime;
@property (readonly, nonatomic) BOOL hasReviewer;
@property (nonatomic) BOOL hasScore;
@property (readonly, nonatomic) BOOL hasSnippet;
@property (readonly, nonatomic) BOOL hasUid;
@property (strong, nonatomic) NSString *languageCode; // @synthesize languageCode=_languageCode;
@property (nonatomic) double reviewTime; // @synthesize reviewTime=_reviewTime;
@property (strong, nonatomic) GEOUser *reviewer; // @synthesize reviewer=_reviewer;
@property (nonatomic) double score; // @synthesize score=_score;
@property (strong, nonatomic) NSString *snippet; // @synthesize snippet=_snippet;
@property (strong, nonatomic) NSString *uid; // @synthesize uid=_uid;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

