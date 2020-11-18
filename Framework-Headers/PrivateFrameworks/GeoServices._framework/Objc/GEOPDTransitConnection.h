//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDMapsIdentifier, NSMutableArray, NSString, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDTransitConnection : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    unsigned long long _muid;
    NSString *_entityNameString;
    GEOPDMapsIdentifier *_mapsId;
    NSMutableArray *_transitLabels;
    CDStruct_e99c65f7 _has;
}

@property (strong, nonatomic) NSString *entityNameString; // @synthesize entityNameString=_entityNameString;
@property (readonly, nonatomic) BOOL hasEntityNameString;
@property (readonly, nonatomic) BOOL hasMapsId;
@property (nonatomic) BOOL hasMuid;
@property (strong, nonatomic) GEOPDMapsIdentifier *mapsId; // @synthesize mapsId=_mapsId;
@property (nonatomic) unsigned long long muid; // @synthesize muid=_muid;
@property (strong, nonatomic) NSMutableArray *transitLabels; // @synthesize transitLabels=_transitLabels;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)transitLabelType;
- (void).cxx_destruct;
- (void)addTransitLabel:(id)arg1;
- (void)clearTransitLabels;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)transitLabelAtIndex:(unsigned long long)arg1;
- (unsigned long long)transitLabelsCount;
- (void)writeTo:(id)arg1;

@end

