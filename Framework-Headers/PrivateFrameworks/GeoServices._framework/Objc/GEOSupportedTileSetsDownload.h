//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEODownloadMetadata, GEOSupportedTileSets;

@interface GEOSupportedTileSetsDownload : PBCodable <NSCopying>
{
    GEODownloadMetadata *_metadata;
    GEOSupportedTileSets *_tileSets;
}

@property (strong, nonatomic) GEODownloadMetadata *metadata; // @synthesize metadata=_metadata;
@property (strong, nonatomic) GEOSupportedTileSets *tileSets; // @synthesize tileSets=_tileSets;

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

