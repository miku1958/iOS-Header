//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSString, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPBTransitRoutingIncidentMessage : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    CDStruct_9f2792e4 _transitIncidentIndexs;
    unsigned int _routingIncidentMessageIndex;
    NSString *_routingMessage;
    struct {
        unsigned int routingIncidentMessageIndex:1;
    } _has;
}

@property (nonatomic) BOOL hasRoutingIncidentMessageIndex;
@property (readonly, nonatomic) BOOL hasRoutingMessage;
@property (nonatomic) unsigned int routingIncidentMessageIndex; // @synthesize routingIncidentMessageIndex=_routingIncidentMessageIndex;
@property (strong, nonatomic) NSString *routingMessage; // @synthesize routingMessage=_routingMessage;
@property (readonly, nonatomic) unsigned int *transitIncidentIndexs;
@property (readonly, nonatomic) unsigned long long transitIncidentIndexsCount;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (void)addTransitIncidentIndex:(unsigned int)arg1;
- (void)clearTransitIncidentIndexs;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setTransitIncidentIndexs:(unsigned int *)arg1 count:(unsigned long long)arg2;
- (unsigned int)transitIncidentIndexAtIndex:(unsigned long long)arg1;
- (void)writeTo:(id)arg1;

@end

