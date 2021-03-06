//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, NSString, PBDataReader;

@interface GEORPScorecard : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    NSMutableArray *_categoryRatings;
    NSString *_version;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    BOOL _recommended;
    struct {
        unsigned int has_recommended:1;
        unsigned int read_categoryRatings:1;
        unsigned int read_version:1;
        unsigned int wrote_anyField:1;
    } _flags;
}

@property (strong, nonatomic) NSMutableArray *categoryRatings;
@property (nonatomic) BOOL hasRecommended;
@property (readonly, nonatomic) BOOL hasVersion;
@property (nonatomic) BOOL recommended;
@property (strong, nonatomic) NSString *version;

+ (Class)categoryRatingsType;
+ (BOOL)isValid:(id)arg1;
- (void).cxx_destruct;
- (void)addCategoryRatings:(id)arg1;
- (id)categoryRatingsAtIndex:(unsigned long long)arg1;
- (unsigned long long)categoryRatingsCount;
- (void)clearCategoryRatings;
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
- (void)writeTo:(id)arg1;

@end

