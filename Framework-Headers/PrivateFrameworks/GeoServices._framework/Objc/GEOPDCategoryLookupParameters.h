//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSString, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDCategoryLookupParameters : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    long long _industryCode;
    NSString *_mapsCategoryId;
    NSString *_walletCategoryId;
    struct {
        unsigned int industryCode:1;
    } _has;
}

@property (nonatomic) BOOL hasIndustryCode;
@property (readonly, nonatomic) BOOL hasMapsCategoryId;
@property (readonly, nonatomic) BOOL hasWalletCategoryId;
@property (nonatomic) long long industryCode; // @synthesize industryCode=_industryCode;
@property (strong, nonatomic) NSString *mapsCategoryId; // @synthesize mapsCategoryId=_mapsCategoryId;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;
@property (strong, nonatomic) NSString *walletCategoryId; // @synthesize walletCategoryId=_walletCategoryId;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

