//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSCHPropertyValueStorageContainer.h>

#import <iWorkImport/NSCopying-Protocol.h>

@class NSMutableArray, NSMutableDictionary, TSCHChartStyle, TSCHLegendStyle, TSCHReferenceLineStyle;

__attribute__((visibility("hidden")))
@interface TSCHChartStyleState : TSCHPropertyValueStorageContainer <NSCopying>
{
    TSCHChartStyleState *_themeChartStyleState;
}

@property (copy, nonatomic) NSMutableArray *categoryAxisStyles; // @dynamic categoryAxisStyles;
@property (strong, nonatomic) TSCHChartStyle *chartStyle; // @dynamic chartStyle;
@property (strong, nonatomic) TSCHLegendStyle *legendStyle; // @dynamic legendStyle;
@property (copy, nonatomic) NSMutableArray *paragraphStyles; // @dynamic paragraphStyles;
@property (copy, nonatomic) NSMutableDictionary *referenceLineStyles; // @dynamic referenceLineStyles;
@property (strong, nonatomic) TSCHReferenceLineStyle *referenceLineThemeStyle; // @dynamic referenceLineThemeStyle;
@property (copy, nonatomic) NSMutableArray *seriesPrivateStyles; // @dynamic seriesPrivateStyles;
@property (copy, nonatomic) NSMutableArray *seriesThemeStyles; // @dynamic seriesThemeStyles;
@property (readonly, strong, nonatomic) TSCHChartStyleState *stateForParentStyleLookup;
@property (strong, nonatomic) TSCHChartStyleState *themeChartStyleState; // @synthesize themeChartStyleState=_themeChartStyleState;
@property (copy, nonatomic) NSMutableArray *valueAxisStyles; // @dynamic valueAxisStyles;

+ (id)styleState;
- (void).cxx_destruct;
- (id)allStyles;
- (id)applyStyleSwapTuple:(id)arg1;
- (id)applyStyleSwapTuple:(id)arg1 ignoringBeforeValues:(BOOL)arg2;
- (void)checkParagraphStyleIndicies;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)enumerateSemanticTagsAndUsagesWithPropertySetType:(long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)fallbackSemanticTagForSemanticTag:(id)arg1;
- (id)fallbackSemanticUsageForSemanticUsage:(id)arg1;
- (id)listOfStyles;
- (BOOL)otherStateIsEquivalent:(id)arg1;
- (BOOL)otherStateIsEquivalent:(id)arg1 ignoringSeriesThemeStyles:(BOOL)arg2;
- (void)p_addParagraphStyleForSemanticUsage:(id)arg1 mappedStyle:(id)arg2 mappedState:(id)arg3 fromPriorStyle:(id)arg4 andPriorState:(id)arg5 maintainPriorIndex:(BOOL)arg6 withStyleMapper:(id)arg7 withStylesheet:(id)arg8 toNewParagraphStylesTable:(id)arg9 andStyleMap:(id)arg10;
- (id)p_formatSemanticTag:(id)arg1;
- (id)p_locationOfStyleInNetwork:(id)arg1;
- (id)p_propertySetWithPropertySetType:(long long)arg1 forStyle:(id)arg2;
- (BOOL)paragraphStyleIndexesAreValid;
- (void)replaceAllInstancesOfStyle:(id)arg1 withStyle:(id)arg2;
- (void)replaceStylesUsingBlock:(CDUnknownBlockType)arg1;
- (id)semanticTagToStyleMap;
- (id)semanticUsagesOfParagraphStylePropertiesWithPropertySetType:(long long)arg1;
- (id)semanticUsagesToParagraphStyleMapWithPropertySetType:(long long)arg1 filteredBySemanticUsages:(id)arg2;
- (void)setStyle:(id)arg1 withSemanticTag:(id)arg2;
- (id)stateByAdoptingStylesheet:(id)arg1 withMapper:(id)arg2;
- (id)stateByExpandingForSeriesCount:(unsigned long long)arg1 andReferenceLineCount:(unsigned long long)arg2;
- (id)stateByExpandingReferenceLineStylesForCount:(unsigned long long)arg1;
- (id)stateByExpandingSeriesStylesForSeriesCount:(unsigned long long)arg1;
- (id)stateByOptimizingParagraphStyleTableWithStylesheet:(id)arg1;
- (id)stateByOptimizingParagraphStyleTableWithStylesheet:(id)arg1 withMapper:(id)arg2;
- (id)stateByReducingReferenceLineStyles;
- (id)stateByReducingSeriesPrivateStyles;
- (id)stateByReducingSeriesPrivateStylesAndReferenceLineStyles;
- (id)styleForSemanticTag:(id)arg1;
- (id)styleLookupSemanticTagForSemanticTag:(id)arg1;
- (id)styleNetworkDescription;
- (id)styleToSemanticTagsMap;
- (id)styleToUseForSemanticTag:(id)arg1;
- (id)stylesheet;
- (id)usesOfParagraphStylePropertiesWithPropertySetType:(long long)arg1;

@end

