//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSDFill.h>

@class NSNumber, TSCH3DFillSetIdentifier, TSCH3DLightingModel;

__attribute__((visibility("hidden")))
@interface TSCH3DFill : TSDFill
{
    TSCH3DLightingModel *_lightingModel;
    TSCH3DFillSetIdentifier *_identifier;
    TSDFill *_fallbackFill;
    NSNumber *_percentage;
    TSDFill *_cachedImageFill;
    struct CGSize _cachedImageFillSize;
    TSDFill *_swatchFill;
}

@property (strong, nonatomic) TSCH3DFillSetIdentifier *identifier; // @synthesize identifier=_identifier;
@property (readonly) TSCH3DLightingModel *lightingModel;
@property (strong, nonatomic) NSNumber *percentage; // @synthesize percentage=_percentage;
@property (readonly, nonatomic) float percentageValue;
@property (readonly) TSDFill *swatchFill; // @synthesize swatchFill=_swatchFill;

+ (id)fill;
+ (id)fillWithIdentifier:(id)arg1;
+ (id)fillWithLightingModel:(id)arg1 identifier:(id)arg2;
+ (id)fillWithSageFillData:(id)arg1;
+ (id)instanceWithArchive:(const struct FillArchive *)arg1 unarchiver:(id)arg2;
+ (id)lightingModelWithSageFillData:(id)arg1;
- (void)assignQuicklookColorToMaterialDiffuseColorForLightingModel:(id)arg1;
- (id)convertForChartSeriesType:(id)arg1 context:(id)arg2;
- (id)convertToSimpleTSDFillWithSize:(unsigned long long)arg1 context:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)didInitFromSOS;
- (void)drawSwatchInRect:(struct CGRect)arg1 inContext:(struct CGContext *)arg2;
- (int)fillType;
- (BOOL)hasCompleteData;
- (unsigned long long)hash;
- (BOOL)identifierReferencesUnavailableLocalBundle;
- (id)init;
- (id)initWithArchive:(const struct FillArchive *)arg1 unarchiver:(id)arg2;
- (id)initWithLightingModel:(id)arg1 identifier:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isOpaque;
- (id)lightenByPercent:(float)arg1;
- (void)nonatomicallyClearLightingModel;
- (void)nonatomicallySetLightingModel:(id)arg1;
- (id)p_convertToTSDFillWithSize:(unsigned long long)arg1 technique:(int)arg2;
- (id)p_convertToTSDFillWithSize:(unsigned long long)arg1 technique:(int)arg2 context:(id)arg3;
- (id)p_iconFill;
- (id)p_imageFillForRect:(struct CGRect)arg1 context:(struct CGContext *)arg2;
- (id)p_imageFillForSize:(struct CGSize)arg1 context:(id)arg2;
- (id)p_lazyLightingModel;
- (void)paintPath:(struct CGPath *)arg1 inContext:(struct CGContext *)arg2;
- (void)paintPath:(struct CGPath *)arg1 naturalBounds:(struct CGRect)arg2 inContext:(struct CGContext *)arg3 isPDF:(BOOL)arg4;
- (void)paintRect:(struct CGRect)arg1 inContext:(struct CGContext *)arg2;
- (id)referenceColor;
- (id)renderingLightingModelWithLightings:(id)arg1;
- (id)representativeDiffuseColor;
- (id)sageFillData;
- (void)saveToArchive:(struct FillArchive *)arg1 archiver:(id)arg2;
- (void)setFallbackFill:(id)arg1;
- (BOOL)tsch_hasAllResources;

@end

