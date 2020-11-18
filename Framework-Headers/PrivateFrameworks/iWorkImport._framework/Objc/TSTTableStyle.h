//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSSStyle.h>

#import <iWorkImport/TSDMixing-Protocol.h>
#import <iWorkImport/TSTTableStrokeProviding-Protocol.h>

@class NSString, TSDStroke;

__attribute__((visibility("hidden")))
@interface TSTTableStyle : TSSStyle <TSTTableStrokeProviding, TSDMixing>
{
}

@property (readonly, nonatomic) TSDStroke *bodyColumnStroke;
@property (readonly, nonatomic) TSDStroke *bodyRowStroke;
@property (readonly, nonatomic) TSDStroke *bodyRowStrokeEvenIfNotVisible;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) TSDStroke *defaultHorizontalBorderStroke;
@property (readonly, nonatomic) TSDStroke *defaultHorizontalBorderStrokeEvenIfNotVisible;
@property (readonly, nonatomic) TSDStroke *defaultVerticalBorderStroke;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) TSDStroke *footerRowBodyColumnStroke;
@property (readonly, nonatomic) TSDStroke *footerRowBodyRowStroke;
@property (readonly, nonatomic) TSDStroke *footerRowBorderStroke;
@property (readonly, nonatomic) TSDStroke *footerRowSeparatorStroke;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) TSDStroke *headerColumnBodyColumnStroke;
@property (readonly, nonatomic) TSDStroke *headerColumnBodyRowStroke;
@property (readonly, nonatomic) TSDStroke *headerColumnBorderStroke;
@property (readonly, nonatomic) TSDStroke *headerColumnSeparatorStroke;
@property (readonly, nonatomic) TSDStroke *headerRowBodyColumnStroke;
@property (readonly, nonatomic) TSDStroke *headerRowBodyRowStroke;
@property (readonly, nonatomic) TSDStroke *headerRowBorderStroke;
@property (readonly, nonatomic) TSDStroke *headerRowSeparatorStroke;
@property (readonly) Class superclass;

+ (void)initDefaultPropertyMap:(id)arg1 presetID:(unsigned long long)arg2 colors:(id)arg3 alternate:(int)arg4;
+ (void)initDefaultStrokePresetListInPropertyMap:(id)arg1 presetID:(unsigned long long)arg2 colors:(id)arg3;
+ (id)nonEmphasisTableProperties;
+ (unsigned long long)presetIDForStyleID:(id)arg1;
+ (id)properties;
+ (id)propertiesAllowingNSNull;
+ (id)styleIDForPreset:(unsigned long long)arg1;
- (id)boxedValueForProperty:(int)arg1 oldBoxedValue:(id)arg2 transformedByTransform:(struct CGAffineTransform)arg3;
- (id)exteriorStrokeForStrokePreset:(unsigned long long)arg1;
- (id)horizontalStrokeForStrokePreset:(unsigned long long)arg1;
- (id)initWithContext:(id)arg1 name:(id)arg2 overridePropertyMap:(id)arg3 isVariation:(BOOL)arg4;
- (BOOL)isEquivalentForCrossDocumentPasteMasterComparison:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (void)loadTableStylePropertiesIntoPropertyMap:(id)arg1 fromArchive:(const struct TableStylePropertiesArchive *)arg2 unarchiver:(id)arg3;
- (unsigned int)maskForStrokePreset:(unsigned long long)arg1;
- (unsigned int)maskForStrokePresets:(id)arg1;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1 context:(id)arg2;
- (void)saveTableStylePropertiesToArchive:(struct TableStylePropertiesArchive *)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (id)strokeForStrokePreset:(unsigned long long)arg1;
- (void)validate;
- (id)verticalStrokeForStrokePreset:(unsigned long long)arg1;

@end

