//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreThemeDefinition/TDSimpleArtworkRenditionSpec.h>

@class TDFlattenedImageRenditionSpec;

@interface TDRadiosityImageRenditionSpec : TDSimpleArtworkRenditionSpec
{
}

@property (strong, nonatomic) TDFlattenedImageRenditionSpec *flattenedImage; // @dynamic flattenedImage;

- (id)createCSIRepresentationWithCompression:(BOOL)arg1 colorSpaceID:(unsigned long long)arg2 document:(id)arg3;
- (BOOL)updatePackingPropertiesWithDocument:(id)arg1;

@end

