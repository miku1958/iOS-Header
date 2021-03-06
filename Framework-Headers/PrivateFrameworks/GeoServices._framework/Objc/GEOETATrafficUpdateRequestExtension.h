//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOTFTrafficSnapshot;

__attribute__((visibility("hidden")))
@interface GEOETATrafficUpdateRequestExtension : PBCodable <NSCopying>
{
    struct GEOTimepoint _clientTimepoint;
    GEOTFTrafficSnapshot *_trafficSnapshot;
    BOOL _needServerLatency;
    BOOL _useClientTimepointAsNow;
    BOOL _useLiveTrafficAsFallback;
    struct {
        unsigned int has_clientTimepoint:1;
        unsigned int has_needServerLatency:1;
        unsigned int has_useClientTimepointAsNow:1;
        unsigned int has_useLiveTrafficAsFallback:1;
    } _flags;
}

@property (nonatomic) struct GEOTimepoint clientTimepoint;
@property (nonatomic) BOOL hasClientTimepoint;
@property (nonatomic) BOOL hasNeedServerLatency;
@property (readonly, nonatomic) BOOL hasTrafficSnapshot;
@property (nonatomic) BOOL hasUseClientTimepointAsNow;
@property (nonatomic) BOOL hasUseLiveTrafficAsFallback;
@property (nonatomic) BOOL needServerLatency;
@property (strong, nonatomic) GEOTFTrafficSnapshot *trafficSnapshot;
@property (nonatomic) BOOL useClientTimepointAsNow;
@property (nonatomic) BOOL useLiveTrafficAsFallback;

+ (BOOL)isValid:(id)arg1;
- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

