//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreThemeDefinition/TDRenditionSpec.h>

@class TDTextureAsset, TDTextureMipLevel, TDTextureRenditionSpec, TDThemeCompressionType;

@interface TDTextureImageRenditionSpec : TDRenditionSpec
{
}

@property (strong, nonatomic) TDTextureAsset *asset; // @dynamic asset;
@property (strong, nonatomic) TDThemeCompressionType *compressionType; // @dynamic compressionType;
@property (nonatomic) BOOL flipped; // @dynamic flipped;
@property (readonly, nonatomic) TDTextureRenditionSpec *texture;
@property (readonly, nonatomic) long long textureFormat;
@property (strong, nonatomic) TDTextureMipLevel *textureLevelAssignment; // @dynamic textureLevelAssignment;

- (struct CGImage *)_createImageRefWithURL:(id)arg1 andDocument:(id)arg2 format:(unsigned int *)arg3;
- (int)_pixelFormatOfCGImage:(struct CGImage *)arg1;
- (id)associatedFileModificationDateWithDocument:(id)arg1;
- (BOOL)canBePackedWithDocument:(id)arg1;
- (id)createCSIRepresentationWithCompression:(BOOL)arg1 colorSpaceID:(unsigned long long)arg2 document:(id)arg3;
- (BOOL)isCubeMap;
- (id)textureFacesWithDocument:(id)arg1;
- (BOOL)updatePackingPropertiesWithDocument:(id)arg1;

@end
