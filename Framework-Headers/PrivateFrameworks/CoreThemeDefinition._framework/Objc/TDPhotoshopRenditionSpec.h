//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreThemeDefinition/TDRenditionSpec.h>

@class TDPhotoshopLayer;

@interface TDPhotoshopRenditionSpec : TDRenditionSpec
{
}

@property (strong, nonatomic) TDPhotoshopLayer *photoshopLayer; // @dynamic photoshopLayer;

- (int)_layerIndexInPSDImage:(id)arg1;
- (void)_logError:(id)arg1;
- (void)_logExtra:(id)arg1;
- (void)_logWarning:(id)arg1;
- (BOOL)_sliceRectanglesForPSDImage:(id)arg1 rowsPerRendition:(int *)arg2 columnsPerRendition:(int *)arg3 originalColumnWidth:(int *)arg4 newColumnWidth:(int *)arg5 originalRowHeight:(int *)arg6 newRowHeight:(int *)arg7 originalColumnX:(int *)arg8 originalRowY:(int *)arg9 newRenditionSize:(CDStruct_1ef3fb1f *)arg10 newSliceCount:(int *)arg11 renditionRect:(struct CGRect *)arg12;
- (void)copyAttributesInto:(id)arg1;
- (id)copyDataFromAttributes;
- (id)createCSIRepresentationFromGradientPSDImage:(id)arg1 withCompression:(BOOL)arg2 colorSpaceID:(unsigned long long)arg3;
- (id)createCSIRepresentationFromPSDImage:(id)arg1 withCompression:(BOOL)arg2 colorSpaceID:(unsigned long long)arg3;
- (id)createCSIRepresentationFromPSDImage:(id)arg1 withCompression:(BOOL)arg2 edgeMetricsMask:(id)arg3 textMetricsMask:(id)arg4 baselineMetricsMask:(id)arg5 colorSpaceID:(unsigned long long)arg6;
- (id)createCSIRepresentationWithCompression:(BOOL)arg1 colorSpaceID:(unsigned long long)arg2 document:(id)arg3;
- (id)debugDescription;
- (void)drawPackableRenditionInContext:(struct CGContext *)arg1 withDocument:(id)arg2;
- (int)psdSliceNumberForRenditionRow:(int)arg1 sliceRow:(int)arg2 renditionColumn:(int)arg3 sliceColumn:(int)arg4 rowsPerRendition:(int)arg5 columnsPerRendition:(int)arg6 renditionColumnCount:(int)arg7;
- (void)setAttributesFromCopyData:(id)arg1;
- (void)updatePackingPropertiesWithDocument:(id)arg1;

@end

