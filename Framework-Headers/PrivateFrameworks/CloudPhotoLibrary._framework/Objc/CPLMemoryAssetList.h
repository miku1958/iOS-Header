//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudPhotoLibrary/NSCopying-Protocol.h>

@class NSMutableArray;

@interface CPLMemoryAssetList : PBCodable <NSCopying>
{
    NSMutableArray *_assets;
    unsigned int _version;
    struct {
        unsigned int version:1;
    } _has;
}

@property (strong, nonatomic) NSMutableArray *assets; // @synthesize assets=_assets;
@property (nonatomic) BOOL hasVersion;
@property (nonatomic) unsigned int version; // @synthesize version=_version;

+ (Class)assetType;
- (void).cxx_destruct;
- (void)addAsset:(id)arg1;
- (id)assetAtIndex:(unsigned long long)arg1;
- (unsigned long long)assetsCount;
- (void)clearAssets;
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

