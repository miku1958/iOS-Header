//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreLocationProtobuf/NSCopying-Protocol.h>

@interface CLPCdmaCellNeighbor : PBCodable <NSCopying>
{
    int _channel;
    int _ecn0;
    int _pilotPhase;
    int _pnoffset;
    int _rscp;
    struct {
        unsigned int channel:1;
        unsigned int ecn0:1;
        unsigned int pilotPhase:1;
        unsigned int pnoffset:1;
        unsigned int rscp:1;
    } _has;
}

@property (nonatomic) int channel; // @synthesize channel=_channel;
@property (nonatomic) int ecn0; // @synthesize ecn0=_ecn0;
@property (nonatomic) BOOL hasChannel;
@property (nonatomic) BOOL hasEcn0;
@property (nonatomic) BOOL hasPilotPhase;
@property (nonatomic) BOOL hasPnoffset;
@property (nonatomic) BOOL hasRscp;
@property (nonatomic) int pilotPhase; // @synthesize pilotPhase=_pilotPhase;
@property (nonatomic) int pnoffset; // @synthesize pnoffset=_pnoffset;
@property (nonatomic) int rscp; // @synthesize rscp=_rscp;

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

