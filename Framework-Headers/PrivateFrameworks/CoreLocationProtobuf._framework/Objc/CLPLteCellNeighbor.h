//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreLocationProtobuf/NSCopying-Protocol.h>

@interface CLPLteCellNeighbor : PBCodable <NSCopying>
{
    int _ecn0;
    int _pid;
    int _rscp;
    int _rssi;
    int _uarfcn;
    struct {
        unsigned int ecn0:1;
        unsigned int pid:1;
        unsigned int rscp:1;
        unsigned int rssi:1;
        unsigned int uarfcn:1;
    } _has;
}

@property (nonatomic) int ecn0; // @synthesize ecn0=_ecn0;
@property (nonatomic) BOOL hasEcn0;
@property (nonatomic) BOOL hasPid;
@property (nonatomic) BOOL hasRscp;
@property (nonatomic) BOOL hasRssi;
@property (nonatomic) BOOL hasUarfcn;
@property (nonatomic) int pid; // @synthesize pid=_pid;
@property (nonatomic) int rscp; // @synthesize rscp=_rscp;
@property (nonatomic) int rssi; // @synthesize rssi=_rssi;
@property (nonatomic) int uarfcn; // @synthesize uarfcn=_uarfcn;

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

