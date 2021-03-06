//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSBundle, NSCache, NSDictionary, NSMapTable, NSString;

@interface CUICatalog : NSObject
{
    unsigned long long _storageRef;
    NSMapTable *_storageMapTable;
    NSBundle *_bundle;
    NSString *_assetStoreName;
    NSCache *_lookupCache;
    NSCache *_negativeCache;
    NSCache *_localObjectCache;
    NSDictionary *_vibrantColorMatrixTints;
    unsigned short _preferredLocalization;
    unsigned int _purgeWhenFinished:1;
    unsigned int _fileHasDisplayGamutInKeySpace:2;
    unsigned int _reserved:28;
}

@property (nonatomic) unsigned long long storageRef; // @synthesize storageRef=_storageRef;

+ (id)bestMatchUsingImages:(id)arg1 scaleFactor:(double)arg2 deviceIdiom:(long long)arg3 deviceSubtype:(unsigned long long)arg4;
+ (id)bestMatchUsingImages:(id)arg1 scaleFactor:(double)arg2 deviceIdiom:(long long)arg3 deviceSubtype:(unsigned long long)arg4 displayGamut:(unsigned long long)arg5 layoutDirection:(unsigned long long)arg6 sizeClassHorizontal:(long long)arg7 sizeClassVertical:(long long)arg8;
+ (id)bestMatchUsingImages:(id)arg1 scaleFactor:(double)arg2 deviceIdiom:(long long)arg3 deviceSubtype:(unsigned long long)arg4 sizeClassHorizontal:(long long)arg5 sizeClassVertical:(long long)arg6;
+ (id)bestMatchUsingImages:(id)arg1 scaleFactor:(double)arg2 deviceIdiom:(long long)arg3 displayGamut:(unsigned long long)arg4 deviceSubtype:(unsigned long long)arg5 sizeClassHorizontal:(long long)arg6 sizeClassVertical:(long long)arg7;
+ (id)bestMatchUsingObjects:(id)arg1 getAttributeValueUsing:(CDUnknownBlockType)arg2 scaleFactor:(double)arg3 deviceIdiom:(long long)arg4 deviceSubtype:(unsigned long long)arg5 displayGamut:(long long)arg6 deploymentTarget:(long long)arg7 layoutDirection:(long long)arg8 sizeClassHorizontal:(long long)arg9 sizeClassVertical:(long long)arg10 memoryClass:(long long)arg11 graphicsFeatureSetClass:(long long)arg12 graphicsFallBackOrder:(id)arg13 deviceSubtypeFallBackOrder:(id)arg14;
+ (id)bestMatchUsingObjects:(id)arg1 getAttributeValueUsing:(CDUnknownBlockType)arg2 scaleFactor:(double)arg3 deviceIdiom:(long long)arg4 deviceSubtype:(unsigned long long)arg5 displayGamut:(long long)arg6 deploymentTarget:(long long)arg7 layoutDirection:(long long)arg8 sizeClassHorizontal:(long long)arg9 sizeClassVertical:(long long)arg10 memoryClass:(long long)arg11 graphicsFeatureSetClass:(long long)arg12 graphicsFallBackOrder:(id)arg13 deviceSubtypeFallBackOrder:(id)arg14 platform:(long long)arg15;
+ (id)defaultUICatalogForBundle:(id)arg1;
+ (BOOL)isValidAssetStorageWithURL:(id)arg1;
+ (BOOL)isValidLCRWithBytes:(const void *)arg1 length:(unsigned long long)arg2;
+ (struct CGColor *)newColorByAdjustingLightnessOfColor:(struct CGColor *)arg1 darker:(BOOL)arg2;
- (id)_baseAtlasContentsKeyForName:(id)arg1;
- (id)_baseAtlasKeyForName:(id)arg1;
- (id)_baseColorKeyForName:(id)arg1;
- (id)_baseImageKeyForName:(id)arg1;
- (id)_baseKeyForName:(id)arg1;
- (id)_baseModelForKeyForName:(id)arg1;
- (id)_baseMultisizeImageSetKeyForName:(id)arg1;
- (id)_baseRecognitionGroupImageSetKeyForName:(id)arg1;
- (id)_baseRecognitionObjectKeyForName:(id)arg1;
- (id)_baseTextureKeyForName:(id)arg1;
- (id)_baseVectorGlyphForName:(id)arg1;
- (id)_baseVectorRenditionKey:(id)arg1;
- (id)_dataWithName:(id)arg1 deviceIdiom:(long long)arg2 deviceSubtype:(unsigned long long)arg3 memoryClass:(unsigned long long)arg4 graphicsClass:(unsigned long long)arg5 appearanceIdentifier:(long long)arg6 graphicsFallBackOrder:(id)arg7 deviceSubtypeFallBackOrder:(id)arg8;
- (id)_defaultAssetRenditionKey:(id)arg1;
- (id)_defaultLayerStackWithScaleFactor:(double)arg1 deviceIdiom:(long long)arg2 deviceSubtype:(unsigned long long)arg3 sizeClassHorizontal:(long long)arg4 sizeClassVertical:(long long)arg5;
- (id)_defaultNamedAssetWithScaleFactor:(double)arg1 deviceIdiom:(long long)arg2 deviceSubtype:(unsigned long long)arg3 sizeClassHorizontal:(long long)arg4 sizeClassVertical:(long long)arg5;
- (BOOL)_doStyledQuartzDrawingInContext:(struct CGContext *)arg1 inBounds:(struct CGRect)arg2 stylePresetName:(id)arg3 styleConfiguration:(id)arg4 drawingHandler:(CDUnknownBlockType)arg5;
- (BOOL)_effectStyle:(unsigned long long *)arg1 state:(long long *)arg2 presentationState:(long long *)arg3 value:(long long *)arg4 resolution:(unsigned long long *)arg5 dimension1:(unsigned long long *)arg6 appearance:(long long *)arg7 fromStyleConfiguration:(id)arg8;
- (id)_imageWithName:(id)arg1 scaleFactor:(double)arg2 deviceIdiom:(long long)arg3 deviceSubtype:(unsigned long long)arg4 displayGamut:(long long)arg5 layoutDirection:(long long)arg6 sizeClassHorizontal:(long long)arg7 sizeClassVertical:(long long)arg8 memoryClass:(unsigned long long)arg9 graphicsClass:(unsigned long long)arg10 appearanceIdentifier:(long long)arg11 graphicsFallBackOrder:(id)arg12 deviceSubtypeFallBackOrder:(id)arg13;
- (id)_layerStackWithName:(id)arg1 scaleFactor:(double)arg2 deviceIdiom:(long long)arg3 deviceSubtype:(unsigned long long)arg4 sizeClassHorizontal:(long long)arg5 sizeClassVertical:(long long)arg6;
- (id)_modelWithName:(id)arg1;
- (id)_nameForAppearanceIdentifier:(long long)arg1;
- (id)_namedImageAtlasWithName:(id)arg1 scaleFactor:(double)arg2 deviceIdiom:(long long)arg3 displayGamut:(long long)arg4 deviceSubtype:(unsigned long long)arg5 memoryClass:(unsigned long long)arg6 graphicsClass:(unsigned long long)arg7 graphicsFallBackOrder:(id)arg8 deviceSubtypeFallBackOrder:(id)arg9;
- (id)_namedLookupWithName:(id)arg1 scaleFactor:(double)arg2 deviceIdiom:(long long)arg3 deviceSubtype:(unsigned long long)arg4 displayGamut:(long long)arg5 layoutDirection:(long long)arg6 sizeClassHorizontal:(long long)arg7 sizeClassVertical:(long long)arg8 appearanceName:(id)arg9;
- (id)_namedTextureWithName:(id)arg1 scaleFactor:(double)arg2 appearanceName:(id)arg3;
- (id)_namedTextureWithName:(id)arg1 scaleFactor:(double)arg2 displayGamut:(long long)arg3 appearanceName:(id)arg4;
- (id)_namedVectorImageWithName:(id)arg1 scaleFactor:(double)arg2 deviceIdiom:(long long)arg3 deviceSubtype:(unsigned long long)arg4 displayGamut:(long long)arg5 layoutDirection:(long long)arg6 sizeClassHorizontal:(long long)arg7 sizeClassVertical:(long long)arg8 appearanceIdentifier:(long long)arg9;
- (id)_recognitionImageWithName:(id)arg1;
- (id)_recognitionObjectWithName:(id)arg1;
- (id)_resolvedRenditionKeyForName:(id)arg1 scaleFactor:(double)arg2 deviceIdiom:(long long)arg3 deviceSubtype:(unsigned long long)arg4 displayGamut:(long long)arg5 layoutDirection:(long long)arg6 sizeClassHorizontal:(long long)arg7 sizeClassVertical:(long long)arg8 memoryClass:(unsigned long long)arg9 graphicsClass:(unsigned long long)arg10 graphicsFallBackOrder:(id)arg11 deviceSubtypeFallBackOrder:(id)arg12 withBaseKeySelector:(SEL)arg13 adjustRenditionKeyWithBlock:(CDUnknownBlockType)arg14;
- (id)_resolvedRenditionKeyFromThemeRef:(unsigned long long)arg1 withBaseKey:(id)arg2 scaleFactor:(double)arg3 deviceIdiom:(long long)arg4 deviceSubtype:(unsigned long long)arg5 displayGamut:(long long)arg6 layoutDirection:(long long)arg7 sizeClassHorizontal:(long long)arg8 sizeClassVertical:(long long)arg9 memoryClass:(unsigned long long)arg10 graphicsClass:(unsigned long long)arg11 graphicsFallBackOrder:(id)arg12 deviceSubtypeFallBackOrder:(id)arg13 adjustRenditionKeyWithBlock:(CDUnknownBlockType)arg14;
- (void)_resourceUnPinnedNotification:(id)arg1;
- (void)_setPreferredLocalization:(id)arg1;
- (unsigned long long)_storageRefForRendition:(id)arg1 representsODRContent:(BOOL *)arg2;
- (unsigned long long)_themeRef;
- (id)_themeStore;
- (void)_vibrantColorMatrixBrightnessSaturationForColor:(struct CGColor *)arg1 saturation:(double *)arg2 brightness:(double *)arg3;
- (id)allImageNames;
- (id)appearanceNames;
- (int)blendModeForStylePresetWithName:(id)arg1 styleConfiguration:(id)arg2;
- (BOOL)canGetShapeEffectRenditionWithKey:(id)arg1;
- (void)clearCachedImageResources;
- (id)colorWithName:(id)arg1 displayGamut:(long long)arg2;
- (id)colorWithName:(id)arg1 displayGamut:(long long)arg2 appearanceName:(id)arg3;
- (id)colorWithName:(id)arg1 displayGamut:(long long)arg2 deviceIdiom:(long long)arg3;
- (id)colorWithName:(id)arg1 displayGamut:(long long)arg2 deviceIdiom:(long long)arg3 appearanceName:(id)arg4;
- (id)compositingFilterForStylePresetWithName:(id)arg1 styleConfiguration:(id)arg2;
- (id)compositingFilterForStylePresetWithName:(id)arg1 styleConfiguration:(id)arg2 foregroundColor:(struct CGColor *)arg3;
- (BOOL)containsLookupForName:(id)arg1;
- (id)dataWithName:(id)arg1;
- (id)dataWithName:(id)arg1 appearanceName:(id)arg2;
- (id)dataWithName:(id)arg1 deviceIdiom:(long long)arg2 deviceSubtype:(unsigned long long)arg3 memoryClass:(unsigned long long)arg4 graphicsClass:(unsigned long long)arg5 appearanceIdentifier:(long long)arg6 graphicsFallBackOrder:(id)arg7 deviceSubtypeFallBackOrder:(id)arg8;
- (id)dataWithName:(id)arg1 deviceIdiom:(long long)arg2 deviceSubtype:(unsigned long long)arg3 memoryClass:(unsigned long long)arg4 graphicsClass:(unsigned long long)arg5 graphicsFallBackOrder:(id)arg6 deviceSubtypeFallBackOrder:(id)arg7;
- (void)dealloc;
- (id)debugDescription;
- (id)defaultLayerStackWithScaleFactor:(double)arg1 deviceIdiom:(long long)arg2 deviceSubtype:(unsigned long long)arg3 sizeClassHorizontal:(long long)arg4 sizeClassVertical:(long long)arg5;
- (id)defaultNamedAssetWithScaleFactor:(double)arg1 deviceIdiom:(long long)arg2 deviceSubtype:(unsigned long long)arg3 sizeClassHorizontal:(long long)arg4 sizeClassVertical:(long long)arg5;
- (BOOL)drawGlyphs:(const unsigned short *)arg1 atPositions:(const struct CGPoint *)arg2 inContext:(struct CGContext *)arg3 withFont:(struct __CTFont *)arg4 count:(unsigned long long)arg5 stylePresetName:(id)arg6 styleConfiguration:(id)arg7 foregroundColor:(struct CGColor *)arg8;
- (void)enumerateNamedLookupsUsingBlock:(CDUnknownBlockType)arg1;
- (struct CGColor *)equivalentForegroundColorForStylePresetWithName:(id)arg1 styleConfiguration:(id)arg2;
- (struct CGColor *)equivalentForegroundColorForStylePresetWithName:(id)arg1 styleConfiguration:(id)arg2 baseForegroundColor:(struct CGColor *)arg3;
- (BOOL)fillStyledPath:(struct CGPath *)arg1 inContext:(struct CGContext *)arg2 stylePresetName:(id)arg3 styleConfiguration:(id)arg4;
- (BOOL)fillStyledRect:(struct CGRect)arg1 inContext:(struct CGContext *)arg2 stylePresetName:(id)arg3 styleConfiguration:(id)arg4;
- (BOOL)hasStylePresetWithName:(id)arg1;
- (BOOL)hasStylePresetWithName:(id)arg1 styleConfiguration:(id)arg2;
- (id)iconImageWithName:(id)arg1 scaleFactor:(double)arg2 deviceIdiom:(long long)arg3 deviceSubtype:(unsigned long long)arg4 displayGamut:(long long)arg5 layoutDirection:(long long)arg6 sizeClassHorizontal:(long long)arg7 sizeClassVertical:(long long)arg8 desiredSize:(struct CGSize)arg9;
- (id)iconImageWithName:(id)arg1 scaleFactor:(double)arg2 deviceIdiom:(long long)arg3 deviceSubtype:(unsigned long long)arg4 displayGamut:(long long)arg5 layoutDirection:(long long)arg6 sizeClassHorizontal:(long long)arg7 sizeClassVertical:(long long)arg8 desiredSize:(struct CGSize)arg9 appearanceName:(id)arg10;
- (id)iconImageWithName:(id)arg1 scaleFactor:(double)arg2 displayGamut:(unsigned long long)arg3 layoutDirection:(long long)arg4 desiredSize:(struct CGSize)arg5;
- (id)iconImageWithName:(id)arg1 scaleFactor:(double)arg2 displayGamut:(unsigned long long)arg3 layoutDirection:(long long)arg4 desiredSize:(struct CGSize)arg5 appearanceName:(id)arg6;
- (id)imageByStylingImage:(struct CGImage *)arg1 stylePresetName:(id)arg2 styleConfiguration:(id)arg3 foregroundColor:(struct CGColor *)arg4 scale:(double)arg5;
- (BOOL)imageExistsWithName:(id)arg1;
- (BOOL)imageExistsWithName:(id)arg1 scaleFactor:(double)arg2;
- (id)imageWithName:(id)arg1 scaleFactor:(double)arg2;
- (id)imageWithName:(id)arg1 scaleFactor:(double)arg2 appearanceName:(id)arg3;
- (id)imageWithName:(id)arg1 scaleFactor:(double)arg2 deviceIdiom:(long long)arg3;
- (id)imageWithName:(id)arg1 scaleFactor:(double)arg2 deviceIdiom:(long long)arg3 appearanceName:(id)arg4;
- (id)imageWithName:(id)arg1 scaleFactor:(double)arg2 deviceIdiom:(long long)arg3 deviceSubtype:(unsigned long long)arg4;
- (id)imageWithName:(id)arg1 scaleFactor:(double)arg2 deviceIdiom:(long long)arg3 deviceSubtype:(unsigned long long)arg4 appearanceName:(id)arg5;
- (id)imageWithName:(id)arg1 scaleFactor:(double)arg2 deviceIdiom:(long long)arg3 deviceSubtype:(unsigned long long)arg4 displayGamut:(long long)arg5 layoutDirection:(long long)arg6 sizeClassHorizontal:(long long)arg7 sizeClassVertical:(long long)arg8;
- (id)imageWithName:(id)arg1 scaleFactor:(double)arg2 deviceIdiom:(long long)arg3 deviceSubtype:(unsigned long long)arg4 displayGamut:(long long)arg5 layoutDirection:(long long)arg6 sizeClassHorizontal:(long long)arg7 sizeClassVertical:(long long)arg8 appearanceName:(id)arg9;
- (id)imageWithName:(id)arg1 scaleFactor:(double)arg2 deviceIdiom:(long long)arg3 deviceSubtype:(unsigned long long)arg4 displayGamut:(long long)arg5 layoutDirection:(long long)arg6 sizeClassHorizontal:(long long)arg7 sizeClassVertical:(long long)arg8 memoryClass:(long long)arg9 graphicsClass:(long long)arg10;
- (id)imageWithName:(id)arg1 scaleFactor:(double)arg2 deviceIdiom:(long long)arg3 deviceSubtype:(unsigned long long)arg4 displayGamut:(long long)arg5 layoutDirection:(long long)arg6 sizeClassHorizontal:(long long)arg7 sizeClassVertical:(long long)arg8 memoryClass:(unsigned long long)arg9 graphicsClass:(unsigned long long)arg10 appearanceIdentifier:(long long)arg11 graphicsFallBackOrder:(id)arg12 deviceSubtypeFallBackOrder:(id)arg13;
- (id)imageWithName:(id)arg1 scaleFactor:(double)arg2 deviceIdiom:(long long)arg3 deviceSubtype:(unsigned long long)arg4 displayGamut:(long long)arg5 layoutDirection:(long long)arg6 sizeClassHorizontal:(long long)arg7 sizeClassVertical:(long long)arg8 memoryClass:(unsigned long long)arg9 graphicsClass:(unsigned long long)arg10 graphicsFallBackOrder:(id)arg11 deviceSubtypeFallBackOrder:(id)arg12;
- (id)imageWithName:(id)arg1 scaleFactor:(double)arg2 deviceIdiom:(long long)arg3 deviceSubtype:(unsigned long long)arg4 sizeClassHorizontal:(long long)arg5 sizeClassVertical:(long long)arg6;
- (id)imageWithName:(id)arg1 scaleFactor:(double)arg2 deviceIdiom:(long long)arg3 deviceSubtype:(unsigned long long)arg4 sizeClassHorizontal:(long long)arg5 sizeClassVertical:(long long)arg6 appearanceName:(id)arg7;
- (id)imageWithName:(id)arg1 scaleFactor:(double)arg2 deviceIdiom:(long long)arg3 layoutDirection:(long long)arg4 adjustRenditionKeyWithBlock:(CDUnknownBlockType)arg5;
- (id)imageWithName:(id)arg1 scaleFactor:(double)arg2 displayGamut:(long long)arg3 layoutDirection:(long long)arg4;
- (id)imageWithName:(id)arg1 scaleFactor:(double)arg2 displayGamut:(long long)arg3 layoutDirection:(long long)arg4 appearanceName:(id)arg5;
- (id)imagesWithName:(id)arg1;
- (id)initWithBytes:(const void *)arg1 length:(unsigned long long)arg2 error:(id *)arg3;
- (id)initWithName:(id)arg1 fromBundle:(id)arg2;
- (id)initWithName:(id)arg1 fromBundle:(id)arg2 error:(id *)arg3;
- (id)initWithURL:(id)arg1 error:(id *)arg2;
- (id)layerStackWithName:(id)arg1;
- (id)layerStackWithName:(id)arg1 scaleFactor:(double)arg2;
- (id)layerStackWithName:(id)arg1 scaleFactor:(double)arg2 deviceIdiom:(long long)arg3;
- (id)layerStackWithName:(id)arg1 scaleFactor:(double)arg2 deviceIdiom:(long long)arg3 deviceSubtype:(unsigned long long)arg4 sizeClassHorizontal:(long long)arg5 sizeClassVertical:(long long)arg6;
- (id)localObjectCache;
- (id)lookupCache;
- (id)modelWithName:(id)arg1;
- (id)namedImageAtlasWithName:(id)arg1 scaleFactor:(double)arg2;
- (id)namedImageAtlasWithName:(id)arg1 scaleFactor:(double)arg2 deviceIdiom:(long long)arg3;
- (id)namedImageAtlasWithName:(id)arg1 scaleFactor:(double)arg2 deviceIdiom:(long long)arg3 displayGamut:(long long)arg4 deviceSubtype:(unsigned long long)arg5 memoryClass:(unsigned long long)arg6 graphicsClass:(unsigned long long)arg7 graphicsFallBackOrder:(id)arg8 deviceSubtypeFallBackOrder:(id)arg9;
- (id)namedImageAtlasWithName:(id)arg1 scaleFactor:(double)arg2 displayGamut:(unsigned long long)arg3;
- (id)namedLookupWithName:(id)arg1 scaleFactor:(double)arg2;
- (id)namedLookupWithName:(id)arg1 scaleFactor:(double)arg2 deviceIdiom:(long long)arg3 deviceSubtype:(unsigned long long)arg4 displayGamut:(long long)arg5 layoutDirection:(long long)arg6 sizeClassHorizontal:(long long)arg7 sizeClassVertical:(long long)arg8;
- (id)namedLookupWithName:(id)arg1 scaleFactor:(double)arg2 deviceIdiom:(long long)arg3 deviceSubtype:(unsigned long long)arg4 displayGamut:(long long)arg5 layoutDirection:(long long)arg6 sizeClassHorizontal:(long long)arg7 sizeClassVertical:(long long)arg8 appearanceName:(id)arg9;
- (id)namedLookupWithName:(id)arg1 scaleFactor:(double)arg2 deviceIdiom:(long long)arg3 deviceSubtype:(unsigned long long)arg4 sizeClassHorizontal:(long long)arg5 sizeClassVertical:(long long)arg6;
- (id)namedRecognitionGroupWithName:(id)arg1;
- (id)namedTextureWithName:(id)arg1 scaleFactor:(double)arg2;
- (id)namedTextureWithName:(id)arg1 scaleFactor:(double)arg2 appearanceName:(id)arg3;
- (id)namedTextureWithName:(id)arg1 scaleFactor:(double)arg2 displayGamut:(long long)arg3;
- (id)namedTextureWithName:(id)arg1 scaleFactor:(double)arg2 displayGamut:(long long)arg3 appearanceName:(id)arg4;
- (id)namedVectorGlyphWithName:(id)arg1 scaleFactor:(double)arg2 deviceIdiom:(long long)arg3 glyphSize:(long long)arg4 glyphWeight:(long long)arg5 glyphPointSize:(double)arg6 appearanceName:(id)arg7;
- (id)namedVectorGlyphWithName:(id)arg1 scaleFactor:(double)arg2 deviceIdiom:(long long)arg3 layoutDirection:(long long)arg4 glyphSize:(long long)arg5 glyphWeight:(long long)arg6 glyphPointSize:(double)arg7 appearanceName:(id)arg8;
- (id)namedVectorImageWithName:(id)arg1 scaleFactor:(double)arg2 deviceIdiom:(long long)arg3 deviceSubtype:(unsigned long long)arg4 displayGamut:(long long)arg5 layoutDirection:(long long)arg6 sizeClassHorizontal:(long long)arg7 sizeClassVertical:(long long)arg8;
- (id)namedVectorImageWithName:(id)arg1 scaleFactor:(double)arg2 deviceIdiom:(long long)arg3 deviceSubtype:(unsigned long long)arg4 displayGamut:(long long)arg5 layoutDirection:(long long)arg6 sizeClassHorizontal:(long long)arg7 sizeClassVertical:(long long)arg8 appearanceName:(id)arg9;
- (id)namedVectorImageWithName:(id)arg1 scaleFactor:(double)arg2 displayGamut:(long long)arg3 layoutDirection:(long long)arg4;
- (id)namedVectorImageWithName:(id)arg1 scaleFactor:(double)arg2 displayGamut:(long long)arg3 layoutDirection:(long long)arg4 appearanceName:(id)arg5;
- (id)negativeCache;
- (id)newShapeEffectPresetForStylePresetName:(id)arg1 styleConfiguration:(id)arg2;
- (id)newShapeEffectPresetWithRenditionKey:(id)arg1;
- (id)newShapeEffectStackForStylePresetName:(id)arg1 styleConfiguration:(id)arg2 foregroundColor:(struct CGColor *)arg3;
- (id)newTextEffectStackForStylePresetName:(id)arg1 styleConfiguration:(id)arg2 foregroundColor:(struct CGColor *)arg3;
- (id)parentNamedImageAtlasForImageNamed:(id)arg1 scaleFactor:(double)arg2 displayGamut:(unsigned long long)arg3;
- (id)parentNamedImageAtlastForImageNamed:(id)arg1 scaleFactor:(double)arg2;
- (struct CGPDFDocument *)pdfDocumentWithName:(id)arg1;
- (struct CGPDFDocument *)pdfDocumentWithName:(id)arg1 appearanceName:(id)arg2;
- (void)preloadNamedAtlasWithScaleFactor:(double)arg1 andNames:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)renditionKeyForShapeEffectPresetForStylePresetName:(id)arg1 styleConfiguration:(id)arg2;
- (id)renditionKeyForShapeEffectPresetWithStyleID:(unsigned long long)arg1 state:(long long)arg2 presentationState:(long long)arg3 value:(long long)arg4 resolution:(unsigned long long)arg5 dimension1:(unsigned long long)arg6;
- (id)renditionKeyForShapeEffectPresetWithStylePresetName:(id)arg1 state:(long long)arg2 presentationState:(long long)arg3 value:(long long)arg4 resolution:(unsigned long long)arg5 dimension1:(unsigned long long)arg6 appearance:(long long)arg7;
- (BOOL)strokeStyledPath:(struct CGPath *)arg1 inContext:(struct CGContext *)arg2 stylePresetName:(id)arg3 styleConfiguration:(id)arg4;
- (CDStruct_3c058996)styledInsetsForStylePresetName:(id)arg1 styleConfiguration:(id)arg2 foregroundColor:(struct CGColor *)arg3 scale:(double)arg4;
- (id)textStyleWithName:(id)arg1 deviceIdiom:(long long)arg2 deviceSubtype:(unsigned long long)arg3 displayGamut:(long long)arg4 sizeClassHorizontal:(long long)arg5 sizeClassVertical:(long long)arg6;
- (id)textStyleWithName:(id)arg1 deviceIdiom:(long long)arg2 deviceSubtype:(unsigned long long)arg3 displayGamut:(long long)arg4 sizeClassHorizontal:(long long)arg5 sizeClassVertical:(long long)arg6 appearanceName:(id)arg7;
- (id)textStyleWithName:(id)arg1 displayGamut:(long long)arg2;
- (id)textStyleWithName:(id)arg1 displayGamut:(long long)arg2 appearanceName:(id)arg3;

@end

