//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreLocationProtobuf/NSCopying-Protocol.h>

@class CLPCellNeighborsGroup, CLPLocation, NSMutableArray, NSString;

@interface CLPSCdmaCellTowerLocation : PBCodable <NSCopying>
{
    NSString *_appBundleId;
    int _arfcn;
    int _ci;
    int _ecn0;
    int _lac;
    CLPLocation *_location;
    int _mcc;
    int _mnc;
    CLPCellNeighborsGroup *_neighborGroup;
    NSMutableArray *_neighbors;
    NSString *_operatorName;
    int _psc;
    int _rat;
    int _rscp;
    int _rssi;
    int _serverHash;
    int _transmit;
    CDStruct_3769fefd _has;
}

@property (strong, nonatomic) NSString *appBundleId; // @synthesize appBundleId=_appBundleId;
@property (nonatomic) int arfcn; // @synthesize arfcn=_arfcn;
@property (nonatomic) int ci; // @synthesize ci=_ci;
@property (nonatomic) int ecn0; // @synthesize ecn0=_ecn0;
@property (readonly, nonatomic) BOOL hasAppBundleId;
@property (nonatomic) BOOL hasArfcn;
@property (nonatomic) BOOL hasEcn0;
@property (readonly, nonatomic) BOOL hasNeighborGroup;
@property (readonly, nonatomic) BOOL hasOperatorName;
@property (nonatomic) BOOL hasPsc;
@property (nonatomic) BOOL hasRat;
@property (nonatomic) BOOL hasRscp;
@property (nonatomic) BOOL hasServerHash;
@property (nonatomic) BOOL hasTransmit;
@property (nonatomic) int lac; // @synthesize lac=_lac;
@property (strong, nonatomic) CLPLocation *location; // @synthesize location=_location;
@property (nonatomic) int mcc; // @synthesize mcc=_mcc;
@property (nonatomic) int mnc; // @synthesize mnc=_mnc;
@property (strong, nonatomic) CLPCellNeighborsGroup *neighborGroup; // @synthesize neighborGroup=_neighborGroup;
@property (strong, nonatomic) NSMutableArray *neighbors; // @synthesize neighbors=_neighbors;
@property (strong, nonatomic) NSString *operatorName; // @synthesize operatorName=_operatorName;
@property (nonatomic) int psc; // @synthesize psc=_psc;
@property (nonatomic) int rat; // @synthesize rat=_rat;
@property (nonatomic) int rscp; // @synthesize rscp=_rscp;
@property (nonatomic) int rssi; // @synthesize rssi=_rssi;
@property (nonatomic) int serverHash; // @synthesize serverHash=_serverHash;
@property (nonatomic) int transmit; // @synthesize transmit=_transmit;

+ (Class)neighborType;
- (void).cxx_destruct;
- (void)addNeighbor:(id)arg1;
- (void)clearNeighbors;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)neighborAtIndex:(unsigned long long)arg1;
- (unsigned long long)neighborsCount;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

