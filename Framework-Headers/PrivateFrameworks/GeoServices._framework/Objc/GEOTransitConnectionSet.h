//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray;

@interface GEOTransitConnectionSet : PBCodable <NSCopying>
{
    NSMutableArray *_connections;
}

@property (strong, nonatomic) NSMutableArray *connections; // @synthesize connections=_connections;

- (void)addConnection:(id)arg1;
- (void)clearConnections;
- (id)connectionAtIndex:(unsigned long long)arg1;
- (unsigned long long)connectionsCount;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

