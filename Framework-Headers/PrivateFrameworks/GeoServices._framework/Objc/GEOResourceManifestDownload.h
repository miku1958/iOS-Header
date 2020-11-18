//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEODownloadMetadata, GEOResources;

@interface GEOResourceManifestDownload : PBCodable <NSCopying>
{
    GEODownloadMetadata *_metadata;
    GEOResources *_resources;
}

@property (readonly, nonatomic) BOOL hasResources;
@property (strong, nonatomic) GEODownloadMetadata *metadata; // @synthesize metadata=_metadata;
@property (strong, nonatomic) GEOResources *resources; // @synthesize resources=_resources;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithResourceManifestData:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
