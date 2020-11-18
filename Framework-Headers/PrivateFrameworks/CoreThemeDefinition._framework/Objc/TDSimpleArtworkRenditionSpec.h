//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreThemeDefinition/TDRenditionSpec.h>

@class NSOrderedSet, NSString, TDPNGAsset, TDThemeCompressionType;

@interface TDSimpleArtworkRenditionSpec : TDRenditionSpec
{
    struct CGRect _alignmentRect;
    BOOL _allowsMultiPassEncoding;
    BOOL _allowsOptimalRowbytesPacking;
    BOOL _allowsCompactCompression;
}

@property (nonatomic) struct CGRect alignmentRect; // @dynamic alignmentRect;
@property (strong, nonatomic) NSString *alignmentRectString; // @dynamic alignmentRectString;
@property (nonatomic) BOOL allowsCompactCompression; // @synthesize allowsCompactCompression=_allowsCompactCompression;
@property (nonatomic) BOOL allowsMultiPassEncoding; // @synthesize allowsMultiPassEncoding=_allowsMultiPassEncoding;
@property (nonatomic) BOOL allowsOptimalRowbytesPacking; // @synthesize allowsOptimalRowbytesPacking=_allowsOptimalRowbytesPacking;
@property (strong, nonatomic) TDPNGAsset *asset; // @dynamic asset;
@property (strong, nonatomic) TDThemeCompressionType *compressionType; // @dynamic compressionType;
@property (nonatomic) BOOL isTintable; // @dynamic isTintable;
@property (strong, nonatomic) NSString *nonAlphaImageAreaString; // @dynamic nonAlphaImageAreaString;
@property (strong, nonatomic) NSString *originalImageSizeString; // @dynamic originalImageSizeString;
@property (nonatomic) struct CGRect primitiveAlignmentRect;
@property (strong, nonatomic) NSOrderedSet *slices; // @dynamic slices;

+ (void)initialize;
- (struct CGImage *)_createImageRefWithURL:(id)arg1 andDocument:(id)arg2 format:(unsigned int *)arg3 vectorBased:(BOOL *)arg4;
- (CDStruct_1ba92a5e)_edgeMetricsForAlignmentRect:(struct CGRect)arg1 originalRenditionSize:(CDStruct_1ef3fb1f)arg2 newRenditionSize:(CDStruct_1ef3fb1f)arg3;
- (void)_logError:(id)arg1;
- (void)_logExtra:(id)arg1;
- (void)_logWarning:(id)arg1;
- (int)_rawPixelFormatOfCGImage:(struct CGImage *)arg1;
- (id)_sliceRectanglesForRenditionSize:(CDStruct_1ef3fb1f)arg1 unadjustedSliceRectangles:(id *)arg2 imageSlicesNeedAdjustment:(BOOL *)arg3 newRenditionSize:(CDStruct_1ef3fb1f *)arg4;
- (id)_slicesToUseForCSI;
- (id)associatedFileModificationDateWithDocument:(id)arg1;
- (void)awakeFromFetch;
- (BOOL)canBePackedWithDocument:(id)arg1;
- (void)copyAttributesInto:(id)arg1;
- (id)createCSIRepresentationWithCompression:(BOOL)arg1 colorSpaceID:(unsigned long long)arg2 document:(id)arg3;
- (void)drawPackableRenditionInContext:(struct CGContext *)arg1 withDocument:(id)arg2;
- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;
- (BOOL)updatePackingPropertiesWithDocument:(id)arg1;

@end

