//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPBTransitIncidentEntityFilter : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    CDStruct_62a50c50 _nextStopMuids;
}

@property (readonly, nonatomic) unsigned long long *nextStopMuids;
@property (readonly, nonatomic) unsigned long long nextStopMuidsCount;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (void)addNextStopMuid:(unsigned long long)arg1;
- (void)clearNextStopMuids;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)nextStopMuidAtIndex:(unsigned long long)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setNextStopMuids:(unsigned long long *)arg1 count:(unsigned long long)arg2;
- (void)writeTo:(id)arg1;

@end

