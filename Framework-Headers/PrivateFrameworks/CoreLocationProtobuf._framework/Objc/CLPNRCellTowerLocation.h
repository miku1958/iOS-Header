//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreLocationProtobuf/NSCopying-Protocol.h>

@class CLPCellNeighborsGroup, CLPLocation, NSMutableArray, NSString;

@interface CLPNRCellTowerLocation : PBCodable <NSCopying>
{
    double _cellLatitude;
    double _cellLongitude;
    long long _ci;
    NSString *_appBundleId;
    int _bandInfo;
    int _bandwidth;
    int _ecn0;
    unsigned int _gscn;
    CLPLocation *_location;
    int _mcc;
    int _mnc;
    CLPCellNeighborsGroup *_neighborGroup;
    NSMutableArray *_neighbors;
    int _nrarfcn;
    NSString *_operatorName;
    int _pid;
    int _rscp;
    int _rssi;
    unsigned int _scs;
    int _serverHash;
    NSString *_serviceProviderName;
    int _tac;
    BOOL _isLimitedService;
    struct {
        unsigned int cellLatitude:1;
        unsigned int cellLongitude:1;
        unsigned int ci:1;
        unsigned int bandInfo:1;
        unsigned int bandwidth:1;
        unsigned int ecn0:1;
        unsigned int gscn:1;
        unsigned int mcc:1;
        unsigned int mnc:1;
        unsigned int nrarfcn:1;
        unsigned int pid:1;
        unsigned int rscp:1;
        unsigned int rssi:1;
        unsigned int scs:1;
        unsigned int serverHash:1;
        unsigned int tac:1;
        unsigned int isLimitedService:1;
    } _has;
}

@property (strong, nonatomic) NSString *appBundleId; // @synthesize appBundleId=_appBundleId;
@property (nonatomic) int bandInfo; // @synthesize bandInfo=_bandInfo;
@property (nonatomic) int bandwidth; // @synthesize bandwidth=_bandwidth;
@property (nonatomic) double cellLatitude; // @synthesize cellLatitude=_cellLatitude;
@property (nonatomic) double cellLongitude; // @synthesize cellLongitude=_cellLongitude;
@property (nonatomic) long long ci; // @synthesize ci=_ci;
@property (nonatomic) int ecn0; // @synthesize ecn0=_ecn0;
@property (nonatomic) unsigned int gscn; // @synthesize gscn=_gscn;
@property (readonly, nonatomic) BOOL hasAppBundleId;
@property (nonatomic) BOOL hasBandInfo;
@property (nonatomic) BOOL hasBandwidth;
@property (nonatomic) BOOL hasCellLatitude;
@property (nonatomic) BOOL hasCellLongitude;
@property (nonatomic) BOOL hasCi;
@property (nonatomic) BOOL hasEcn0;
@property (nonatomic) BOOL hasGscn;
@property (nonatomic) BOOL hasIsLimitedService;
@property (readonly, nonatomic) BOOL hasLocation;
@property (nonatomic) BOOL hasMcc;
@property (nonatomic) BOOL hasMnc;
@property (readonly, nonatomic) BOOL hasNeighborGroup;
@property (nonatomic) BOOL hasNrarfcn;
@property (readonly, nonatomic) BOOL hasOperatorName;
@property (nonatomic) BOOL hasPid;
@property (nonatomic) BOOL hasRscp;
@property (nonatomic) BOOL hasRssi;
@property (nonatomic) BOOL hasScs;
@property (nonatomic) BOOL hasServerHash;
@property (readonly, nonatomic) BOOL hasServiceProviderName;
@property (nonatomic) BOOL hasTac;
@property (nonatomic) BOOL isLimitedService; // @synthesize isLimitedService=_isLimitedService;
@property (strong, nonatomic) CLPLocation *location; // @synthesize location=_location;
@property (nonatomic) int mcc; // @synthesize mcc=_mcc;
@property (nonatomic) int mnc; // @synthesize mnc=_mnc;
@property (strong, nonatomic) CLPCellNeighborsGroup *neighborGroup; // @synthesize neighborGroup=_neighborGroup;
@property (strong, nonatomic) NSMutableArray *neighbors; // @synthesize neighbors=_neighbors;
@property (nonatomic) int nrarfcn; // @synthesize nrarfcn=_nrarfcn;
@property (strong, nonatomic) NSString *operatorName; // @synthesize operatorName=_operatorName;
@property (nonatomic) int pid; // @synthesize pid=_pid;
@property (nonatomic) int rscp; // @synthesize rscp=_rscp;
@property (nonatomic) int rssi; // @synthesize rssi=_rssi;
@property (nonatomic) unsigned int scs; // @synthesize scs=_scs;
@property (nonatomic) int serverHash; // @synthesize serverHash=_serverHash;
@property (strong, nonatomic) NSString *serviceProviderName; // @synthesize serviceProviderName=_serviceProviderName;
@property (nonatomic) int tac; // @synthesize tac=_tac;

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

