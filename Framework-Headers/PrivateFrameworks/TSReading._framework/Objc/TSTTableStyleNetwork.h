//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/TSPObject.h>

#import <TSReading/NSFastEnumeration-Protocol.h>

@class TSTCellStyle, TSTTableStyle, TSWPParagraphStyle, TSWPShapeStyle;

@interface TSTTableStyleNetwork : TSPObject <NSFastEnumeration>
{
    unsigned long long mPresetIndex;
    TSTTableStyle *mTableStyle;
    TSTCellStyle *mHeaderRowCellStyle;
    TSTCellStyle *mHeaderColumnCellStyle;
    TSTCellStyle *mFooterRowCellStyle;
    TSTCellStyle *mBodyCellStyle;
    TSWPParagraphStyle *mHeaderRowTextStyle;
    TSWPParagraphStyle *mHeaderColumnTextStyle;
    TSWPParagraphStyle *mFooterRowTextStyle;
    TSWPParagraphStyle *mBodyTextStyle;
    TSWPParagraphStyle *mTableNameStyle;
    TSWPShapeStyle *mTableNameShapeStyle;
}

@property (readonly, nonatomic) TSTCellStyle *bodyCellStyle;
@property (readonly, nonatomic) TSWPParagraphStyle *bodyTextStyle;
@property (readonly, nonatomic) TSTCellStyle *footerRowCellStyle;
@property (readonly, nonatomic) TSWPParagraphStyle *footerRowTextStyle;
@property (readonly, nonatomic) TSTCellStyle *headerColumnCellStyle;
@property (readonly, nonatomic) TSWPParagraphStyle *headerColumnTextStyle;
@property (readonly, nonatomic) TSTCellStyle *headerRowCellStyle;
@property (readonly, nonatomic) TSWPParagraphStyle *headerRowTextStyle;
@property (nonatomic) unsigned long long presetIndex;
@property (strong, nonatomic) TSWPShapeStyle *tableNameShapeStyle;
@property (strong, nonatomic) TSWPParagraphStyle *tableNameStyle;
@property (strong, nonatomic) TSTTableStyle *tableStyle;

+ (id)createStylesInStylesheet:(id)arg1 presetIndex:(unsigned long long)arg2 colors:(id)arg3 alternate:(int)arg4;
+ (id)defaultTableNameShapeStyleWithContext:(id)arg1;
+ (id)identifiersForPresetIndex:(unsigned long long)arg1;
+ (id)networkFromStylesheet:(id)arg1 presetIndex:(unsigned long long)arg2;
+ (id)networkFromTableModel:(id)arg1;
+ (id)networkFromTheme:(id)arg1 presetIndex:(unsigned long long)arg2;
+ (id)networkWithContext:(id)arg1 presetIndex:(unsigned long long)arg2 colors:(id)arg3 alternate:(int)arg4;
+ (id)tableNameShapeStyleIDForPreset:(unsigned long long)arg1;
+ (id)tableNameStyleIDForPreset:(unsigned long long)arg1;
- (id)cellStyleForTableArea:(unsigned int)arg1;
- (id)copy;
- (id)copyWithContext:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1 context:(id)arg2;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (void)dealloc;
- (id)dictionaryWithPreset:(unsigned long long)arg1;
- (unsigned long long)hash;
- (id)initWithContext:(id)arg1;
- (id)initWithContext:(id)arg1 fromArray:(id)arg2 presetIndex:(unsigned long long)arg3;
- (id)initWithContext:(id)arg1 fromDictionary:(id)arg2 withPreset:(unsigned long long)arg3;
- (BOOL)isEqual:(id)arg1;
- (void)setBodyCellStyle:(id)arg1;
- (void)setBodyTextStyle:(id)arg1;
- (void)setCellStyle:(id)arg1 forTableArea:(unsigned int)arg2;
- (void)setFooterRowCellStyle:(id)arg1;
- (void)setFooterRowTextStyle:(id)arg1;
- (void)setHeaderColumnCellStyle:(id)arg1;
- (void)setHeaderColumnTextStyle:(id)arg1;
- (void)setHeaderRowCellStyle:(id)arg1;
- (void)setHeaderRowTextStyle:(id)arg1;
- (void)setStylesFromTableModel:(id)arg1;
- (void)setTextStyle:(id)arg1 forTableArea:(unsigned int)arg2;
- (id)styleArray;
- (BOOL)stylesInStylesheet:(id)arg1;
- (id)textStyleForTableArea:(unsigned int)arg1;
- (BOOL)valid;

@end

