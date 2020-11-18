//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOLocation, NSMutableArray, NSString, PBUnknownFields;

@interface GEOPDExternalTransitLookupParameters : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    double _transactionTimestamp;
    NSMutableArray *_externalTransitStationCodes;
    NSString *_sourceId;
    GEOLocation *_transactionLocation;
    struct {
        unsigned int transactionTimestamp:1;
    } _has;
}

@property (strong, nonatomic) NSMutableArray *externalTransitStationCodes; // @synthesize externalTransitStationCodes=_externalTransitStationCodes;
@property (readonly, nonatomic) BOOL hasSourceId;
@property (readonly, nonatomic) BOOL hasTransactionLocation;
@property (nonatomic) BOOL hasTransactionTimestamp;
@property (strong, nonatomic) NSString *sourceId; // @synthesize sourceId=_sourceId;
@property (strong, nonatomic) GEOLocation *transactionLocation; // @synthesize transactionLocation=_transactionLocation;
@property (nonatomic) double transactionTimestamp; // @synthesize transactionTimestamp=_transactionTimestamp;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)externalTransitStationCodeType;
- (void)addExternalTransitStationCode:(id)arg1;
- (void)clearExternalTransitStationCodes;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)externalTransitStationCodeAtIndex:(unsigned long long)arg1;
- (unsigned long long)externalTransitStationCodesCount;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

