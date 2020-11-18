//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDCategory : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    NSMutableArray *_localizedNames;
    int _level;
    struct {
        unsigned int has_level:1;
    } _flags;
}

@property (nonatomic) BOOL hasLevel;
@property (nonatomic) int level;
@property (strong, nonatomic) NSMutableArray *localizedNames;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (id)_allCategoriesForPlaceData:(id)arg1 type:(unsigned int)arg2;
+ (id)categoryNamesForPlaceData:(id)arg1 type:(unsigned int)arg2;
+ (BOOL)hasCategoryNamesForPlaceData:(id)arg1 type:(unsigned int)arg2;
+ (BOOL)isValid:(id)arg1;
+ (Class)localizedNameType;
- (void).cxx_destruct;
- (void)addLocalizedName:(id)arg1;
- (void)clearLocalizedNames;
- (void)clearUnknownFields:(BOOL)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)localizedNameAtIndex:(unsigned long long)arg1;
- (unsigned long long)localizedNamesCount;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
