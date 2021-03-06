//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Network/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface NWPBUpdateBrowse : PBCodable <NSCopying>
{
    NSString *_clientUUID;
    NSMutableArray *_discoveredEndpoints;
}

@property (strong, nonatomic) NSString *clientUUID; // @synthesize clientUUID=_clientUUID;
@property (strong, nonatomic) NSMutableArray *discoveredEndpoints; // @synthesize discoveredEndpoints=_discoveredEndpoints;
@property (readonly, nonatomic) BOOL hasClientUUID;

+ (Class)discoveredEndpointsType;
- (void).cxx_destruct;
- (void)addDiscoveredEndpoints:(id)arg1;
- (void)clearDiscoveredEndpoints;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)discoveredEndpointsAtIndex:(unsigned long long)arg1;
- (unsigned long long)discoveredEndpointsCount;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

