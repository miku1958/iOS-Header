//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSSStyle.h>

#import <iWorkImport/TSDMixing-Protocol.h>
#import <iWorkImport/TSSPreset-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface TSDShapeStyle : TSSStyle <TSSPreset, TSDMixing>
{
}

@property (readonly, nonatomic) NSString *presetKind;

+ (float)defaultFloatValueForProperty:(int)arg1;
+ (id)defaultValueForProperty:(int)arg1;
+ (void)initialize;
+ (void)loadShapeStylePropertiesIntoPropertyMap:(id)arg1 fromArchive:(const struct ShapeStylePropertiesArchive *)arg2 unarchiver:(id)arg3;
+ (id)properties;
+ (id)propertiesAllowingNSNull;
+ (void)saveShapeStylePropertyMap:(id)arg1 toArchive:(struct ShapeStylePropertiesArchive *)arg2 archiver:(id)arg3;
+ (BOOL)validateFloatValue:(float *)arg1 forProperty:(int)arg2;
- (id)boxedValueForProperty:(int)arg1 oldBoxedValue:(id)arg2 transformedByTransform:(struct CGAffineTransform)arg3;
- (void)fixImageFillTechniqueForSwatchOfSize:(struct CGSize)arg1;
- (BOOL)hasLineEnds;
- (void)loadFromArchive:(const struct ShapeStyleArchive *)arg1 unarchiver:(id)arg2;
- (void)loadFromUnarchiver:(id)arg1;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1 context:(id)arg2;
- (void)saveToArchive:(struct ShapeStyleArchive *)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (struct CGSize)targetSizeForImageData:(id)arg1 associatedHint:(id)arg2;
- (BOOL)wantsHighContrastBackgroundColor;
- (BOOL)wantsHighContrastBackgroundColorWithColor:(id)arg1;
- (BOOL)wantsHighContrastFillColorWithColor:(id)arg1;
- (BOOL)wantsHighContrastStrokeColorWithColor:(id)arg1;

@end
