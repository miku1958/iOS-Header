//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDReviewFilter : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    struct GEOPDPhotoSizeFilterValue *_photoSizeFilters;
    unsigned long long _photoSizeFiltersCount;
    unsigned long long _photoSizeFiltersSpace;
    BOOL _suppressSyntheticReviews;
    struct {
        unsigned int has_suppressSyntheticReviews:1;
    } _flags;
}

@property (nonatomic) BOOL hasSuppressSyntheticReviews;
@property (readonly, nonatomic) struct GEOPDPhotoSizeFilterValue *photoSizeFilters;
@property (readonly, nonatomic) unsigned long long photoSizeFiltersCount;
@property (nonatomic) BOOL suppressSyntheticReviews;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)arg1;
- (void).cxx_destruct;
- (void)addPhotoSizeFilter:(struct GEOPDPhotoSizeFilterValue)arg1;
- (void)clearPhotoSizeFilters;
- (void)clearUnknownFields:(BOOL)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (struct GEOPDPhotoSizeFilterValue)photoSizeFilterAtIndex:(unsigned long long)arg1;
- (void)readAll:(BOOL)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setPhotoSizeFilters:(struct GEOPDPhotoSizeFilterValue *)arg1 count:(unsigned long long)arg2;
- (void)writeTo:(id)arg1;

@end
