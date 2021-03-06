//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDGroundViewLabel : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    NSMutableArray *_groundViewLabelInfos;
    unsigned long long _groundViewLocationId;
    struct {
        unsigned int has_groundViewLocationId:1;
    } _flags;
}

@property (strong, nonatomic) NSMutableArray *groundViewLabelInfos;
@property (nonatomic) unsigned long long groundViewLocationId;
@property (nonatomic) BOOL hasGroundViewLocationId;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)groundViewLabelInfoType;
+ (BOOL)isValid:(id)arg1;
- (void).cxx_destruct;
- (void)addGroundViewLabelInfo:(id)arg1;
- (void)clearGroundViewLabelInfos;
- (void)clearUnknownFields:(BOOL)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)groundViewLabelInfoAtIndex:(unsigned long long)arg1;
- (unsigned long long)groundViewLabelInfosCount;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

