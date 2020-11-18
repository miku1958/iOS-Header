//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreThemeDefinition/TDRenditionSpec.h>

@class NSOrderedSet, NSString, TDImageStackAsset, TDThemeCompressionType;

@interface TDLayerStackRenditionSpec : TDRenditionSpec
{
    struct CGSize primitiveCanvasSize;
}

@property (strong, nonatomic) TDImageStackAsset *asset; // @dynamic asset;
@property (nonatomic) struct CGSize canvasSize; // @dynamic canvasSize;
@property (strong, nonatomic) NSString *canvasSizeString; // @dynamic canvasSizeString;
@property (strong, nonatomic) TDThemeCompressionType *compressionType; // @dynamic compressionType;
@property (strong, nonatomic) NSOrderedSet *layerReferences; // @dynamic layerReferences;
@property (nonatomic) struct CGSize primitiveCanvasSize; // @synthesize primitiveCanvasSize;

- (void)awakeFromFetch;
- (BOOL)canBePackedWithDocument:(id)arg1;
- (id)createCSIRepresentationWithCompression:(BOOL)arg1 colorSpaceID:(unsigned long long)arg2 document:(id)arg3;
- (void)prepareForDeletion;

@end
