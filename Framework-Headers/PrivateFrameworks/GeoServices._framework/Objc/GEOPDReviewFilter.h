//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@interface GEOPDReviewFilter : PBCodable <NSCopying>
{
    CDStruct_43c37391 *_photoSizeFilters;
    unsigned long long _photoSizeFiltersCount;
    unsigned long long _photoSizeFiltersSpace;
}

@property (readonly, nonatomic) CDStruct_43c37391 *photoSizeFilters;
@property (readonly, nonatomic) unsigned long long photoSizeFiltersCount;

- (void)addPhotoSizeFilter:(CDStruct_43c37391)arg1;
- (void)clearPhotoSizeFilters;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (CDStruct_43c37391)photoSizeFilterAtIndex:(unsigned long long)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setPhotoSizeFilters:(CDStruct_43c37391 *)arg1 count:(unsigned long long)arg2;
- (void)writeTo:(id)arg1;

@end

