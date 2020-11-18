//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface MUPDFAnnotationAdaptorHelper : NSObject
{
}

+ (id)_colorFromPDFArray:(struct CGPDFArray *)arg1;
+ (BOOL)_shouldUseAKAnnotation:(id)arg1 toRepresentPDFAnnotationDictionary:(struct CGPDFDictionary *)arg2;
+ (void)addAKAnnotation:(id)arg1 toAnnotationDictionary:(struct __CFDictionary *)arg2;
+ (void)addAppearanceStreamOfAnnotation:(id)arg1 toDictionary:(id)arg2;
+ (void)addBorderStyleOfAnnotation:(id)arg1 toDictionary:(id)arg2;
+ (void)addBoundsOfAnnotation:(id)arg1 toDictionary:(id)arg2;
+ (void)addContentsStringOfAnnotation:(id)arg1 toDictionary:(id)arg2;
+ (void)addDefaultAppearanceStreamOfAnnotation:(id)arg1 toDictionary:(id)arg2;
+ (void)addFlagsOfAnnotation:(id)arg1 toDictionary:(id)arg2;
+ (void)addModificationDateOfAnnotation:(id)arg1 toDictionary:(id)arg2;
+ (void)addPopupOfAnnotation:(id)arg1 toDictionary:(id)arg2;
+ (void)addQuaddingOfAnnotation:(id)arg1 toDictionary:(id)arg2;
+ (void)addRGBColor:(id)arg1 forKey:(id)arg2 toDictionary:(id)arg3;
+ (void)addTextLabelOfAnnotation:(id)arg1 toDictionary:(id)arg2;
+ (id)colorFromAppearanceTokens:(id)arg1;
+ (id)fontNameFromAppearanceTokens:(id)arg1;
+ (id)getColorFromAppearanceString:(struct CGPDFString *)arg1;
+ (id)getFontFromAppearanceString:(struct CGPDFString *)arg1 ofPDFPage:(struct CGPDFPage *)arg2;
+ (void)migrateAKFilledAnnotationPropertiesTo:(id)arg1 fromAnnotationDictionary:(struct CGPDFDictionary *)arg2 ofPDFPage:(struct CGPDFPage *)arg3;
+ (void)migrateAKRectangularShapeAnnotationPropertiesTo:(id)arg1 fromAnnotationDictionary:(struct CGPDFDictionary *)arg2 ofPDFPage:(struct CGPDFPage *)arg3;
+ (void)migrateAKStrokedAnnotationPropertiesTo:(id)arg1 fromAnnotationDictionary:(struct CGPDFDictionary *)arg2 ofPDFPage:(struct CGPDFPage *)arg3;
+ (void)migrateAKTextAnnotationPropertiesTo:(id)arg1 fromAnnotationDictionary:(struct CGPDFDictionary *)arg2 ofPDFPage:(struct CGPDFPage *)arg3;
+ (id)newAKAnnotationFromAnnotationDictionary:(struct CGPDFDictionary *)arg1;
+ (double)pointSizeFromAppearanceTokens:(id)arg1;
+ (id)tokenizeAppearanceString:(id)arg1;

@end

