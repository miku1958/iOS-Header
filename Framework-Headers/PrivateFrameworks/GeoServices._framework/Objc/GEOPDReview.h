//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDRating, GEOPDUser, NSMutableArray, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDReview : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOPDRating *_rating;
    NSString *_reviewId;
    double _reviewTime;
    GEOPDUser *_reviewer;
    NSMutableArray *_snippets;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int has_reviewTime:1;
        unsigned int read_unknownFields:1;
        unsigned int read_rating:1;
        unsigned int read_reviewId:1;
        unsigned int read_reviewer:1;
        unsigned int read_snippets:1;
        unsigned int wrote_anyField:1;
    } _flags;
}

@property (readonly, nonatomic) BOOL hasRating;
@property (readonly, nonatomic) BOOL hasReviewId;
@property (nonatomic) BOOL hasReviewTime;
@property (readonly, nonatomic) BOOL hasReviewer;
@property (strong, nonatomic) GEOPDRating *rating;
@property (strong, nonatomic) NSString *reviewId;
@property (nonatomic) double reviewTime;
@property (strong, nonatomic) GEOPDUser *reviewer;
@property (strong, nonatomic) NSMutableArray *snippets;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)arg1;
+ (id)reviewsForPlaceData:(id)arg1;
+ (Class)snippetType;
- (void).cxx_destruct;
- (id)_bestSnippet;
- (id)_bestSnippetLocale;
- (void)addSnippet:(id)arg1;
- (void)clearSnippets;
- (void)clearUnknownFields:(BOOL)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)snippetAtIndex:(unsigned long long)arg1;
- (unsigned long long)snippetsCount;
- (void)writeTo:(id)arg1;

@end

