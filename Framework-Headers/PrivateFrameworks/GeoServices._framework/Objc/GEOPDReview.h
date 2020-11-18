//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDRating, GEOPDUser, NSMutableArray, NSString;

@interface GEOPDReview : PBCodable <NSCopying>
{
    double _reviewTime;
    GEOPDRating *_rating;
    NSString *_reviewId;
    GEOPDUser *_reviewer;
    NSMutableArray *_snippets;
    struct {
        unsigned int reviewTime:1;
    } _has;
}

@property (readonly, nonatomic) BOOL hasRating;
@property (readonly, nonatomic) BOOL hasReviewId;
@property (nonatomic) BOOL hasReviewTime;
@property (readonly, nonatomic) BOOL hasReviewer;
@property (strong, nonatomic) GEOPDRating *rating; // @synthesize rating=_rating;
@property (strong, nonatomic) NSString *reviewId; // @synthesize reviewId=_reviewId;
@property (nonatomic) double reviewTime; // @synthesize reviewTime=_reviewTime;
@property (strong, nonatomic) GEOPDUser *reviewer; // @synthesize reviewer=_reviewer;
@property (strong, nonatomic) NSMutableArray *snippets; // @synthesize snippets=_snippets;

+ (id)reviewsForPlaceData:(id)arg1;
+ (Class)snippetType;
- (id)_bestSnippet;
- (void)addSnippet:(id)arg1;
- (void)clearSnippets;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)snippetAtIndex:(unsigned long long)arg1;
- (unsigned long long)snippetsCount;
- (void)writeTo:(id)arg1;

@end

