//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/NSCopying-Protocol.h>
#import <iWorkImport/TSCHPropertyMapsGeneratedProtocol-Protocol.h>
#import <iWorkImport/TSCHStyleOwnerCollaborationSupport-Protocol.h>
#import <iWorkImport/TSCHStyleOwning-Protocol.h>
#import <iWorkImport/TSCHUnretainedParent-Protocol.h>
#import <iWorkImport/TSDMixing-Protocol.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSNumber, NSString, TSCHChartDrawableInfo, TSCHChartLayoutCache, TSCHChartMediator, TSCHChartModel, TSCHChartStylePreset, TSCHChartType, TSCHLegendModel, TSDInfoGeometry, TSKCustomFormatList, TSKDocumentRoot, TSPLazyReference, TSSStylesheet;
@protocol TSCHStyleActAlike;

__attribute__((visibility("hidden")))
@interface TSCHChartInfo : NSObject <TSCHPropertyMapsGeneratedProtocol, TSCHStyleOwnerCollaborationSupport, TSCHStyleOwning, TSCHUnretainedParent, TSDMixing, NSCopying>
{
    TSCHChartModel *mModel;
    id<TSCHStyleActAlike> mStyle;
    id<TSCHStyleActAlike> mNonStyle;
    TSCHChartType *mChartType;
    TSCHLegendModel *mLegendModel;
    TSCHChartMediator *mChartMediator;
    TSPLazyReference *mLazyPreset;
    TSPLazyReference *mOwnedPreset;
    struct CGRect mInnerChartFrame;
    id<TSCHStyleActAlike> mLegendStyle;
    id<TSCHStyleActAlike> mLegendNonStyle;
    NSMutableArray *mValueAxisStyles;
    NSMutableArray *mCategoryAxisStyles;
    NSMutableArray *mValueAxisNonStyles;
    NSMutableArray *mCategoryAxisNonStyles;
    NSMutableArray *mThemeSeriesStyles;
    NSMutableArray *mPrivateSeriesStyles;
    NSMutableArray *mSeriesNonStyles;
    NSMutableArray *mParagraphStyles;
    NSMutableDictionary *mRefLineNonStylesMap;
    NSMutableDictionary *mRefLineStylesMap;
    id<TSCHStyleActAlike> mThemePresetRefLineStyle;
    struct CGPoint mPreviewOrigin;
    BOOL mDisplayMessageOnRepCreation;
    NSString *mMessageString;
    double mMessageDuration;
    TSDInfoGeometry *mNonInfoGeometry;
    TSCHChartDrawableInfo *mDrawableInfo;
    BOOL mNeedsCalcEngineDependentUpgrade;
    BOOL mNeedsCalcEngineDependentImport;
    BOOL mIsOlderThanSage;
    NSNumber *mHorizontalMin;
    NSNumber *mHorizontalMax;
    NSNumber *mValueMin;
    NSNumber *mValueMax;
    NSString *mValuePrefix;
    NSString *mValueSuffix;
    BOOL mValueUseSeparator;
    NSString *mHorizontalPrefix;
    NSString *mHorizontalSuffix;
    BOOL mHorizontalUseSeparator;
    NSMutableDictionary *mStyleViewProxyMap;
    NSArray *mStyleViewProxyParagraphStyleArray;
    unsigned long long mLastSeriesIndex;
    NSString *mLastAppliedFillSetLookupString;
    TSKCustomFormatList *mPasteboardCustomFormatList;
    BOOL mAppearancePreservedForPreset;
    struct CGSize _minimumChartBodySizeForTransformingGeometry;
}

@property (readonly, strong, nonatomic) TSCHChartType *chartType; // @synthesize chartType=mChartType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) CDStruct_44ada6bf defaultLayoutSettings;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL displayMessageOnRepCreation; // @synthesize displayMessageOnRepCreation=mDisplayMessageOnRepCreation;
@property (readonly, nonatomic) TSKDocumentRoot *documentRoot;
@property (readonly, nonatomic) TSSStylesheet *documentStylesheet;
@property (readonly, nonatomic) TSCHChartDrawableInfo *drawableInfo; // @synthesize drawableInfo=mDrawableInfo;
@property (readonly, nonatomic) TSCHChartStylePreset *firstPresetFromTheme;
@property (copy, nonatomic) TSDInfoGeometry *geometry;
@property (readonly, nonatomic) int gridDirection;
@property (readonly, nonatomic) BOOL hasSetDefaultLayoutSettings;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long hash;
@property (nonatomic) double informationalMessageDuration; // @synthesize informationalMessageDuration=mMessageDuration;
@property (strong, nonatomic) NSString *informationalMessageString; // @synthesize informationalMessageString=mMessageString;
@property (readonly, nonatomic) BOOL isPhantom;
@property (copy, nonatomic) NSString *lastAppliedFillSetLookupString; // @synthesize lastAppliedFillSetLookupString=mLastAppliedFillSetLookupString;
@property (strong, nonatomic) TSCHLegendModel *legend; // @synthesize legend=mLegendModel;
@property (strong, nonatomic) TSCHChartMediator *mediator; // @synthesize mediator=mChartMediator;
@property (readonly, nonatomic) struct CGSize minimumChartBodySize;
@property (readonly, nonatomic) struct CGSize minimumChartBodySizeForTransformingGeometry; // @synthesize minimumChartBodySizeForTransformingGeometry=_minimumChartBodySizeForTransformingGeometry;
@property (strong, nonatomic) TSCHChartModel *model; // @synthesize model=mModel;
@property (readonly, nonatomic) unsigned long long multiDataSetIndex; // @dynamic multiDataSetIndex;
@property (readonly, nonatomic) TSCHChartStylePreset *preset;
@property (readonly, nonatomic) TSCHChartStylePreset *presetFromThemeIfNecessary;
@property (nonatomic) struct CGPoint previewOrigin; // @synthesize previewOrigin=mPreviewOrigin;
@property (readonly, nonatomic) TSCHChartLayoutCache *sceneAreaLayoutItemCache;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSArray *themeChartPresets;
@property (readonly, nonatomic) BOOL wantsDeferredUpgradeOrImport;

+ (int)adjustNumberFormatType:(int)arg1 forChartModel:(id)arg2 gridValueType:(int)arg3 hasCustomFormat:(BOOL)arg4;
+ (id)adjustNumberFormatTypeValue:(id)arg1 forChartModel:(id)arg2 gridValueType:(int)arg3 hasCustomFormat:(BOOL)arg4;
+ (double)beginValueForStackedBarSeries:(id)arg1 index:(unsigned long long)arg2 unitSpaceIntercept:(double)arg3 relativelyPositive:(BOOL)arg4 valueAxis:(id)arg5;
+ (id)categoryAxisStyleIdentifierForRoleIndex:(unsigned long long)arg1 ordinal:(unsigned long long)arg2;
+ (id)chartStyleIdentifierForRoleIndex:(unsigned long long)arg1;
+ (Class)classForAxisNonstyle;
+ (Class)classForAxisStyle;
+ (Class)classForChartNonstyle;
+ (Class)classForChartStyle;
+ (Class)classForLegendNonstyle;
+ (Class)classForLegendStyle;
+ (Class)classForSeriesNonstyle;
+ (Class)classForSeriesStyle;
+ (id)genericParagraphStyleIndexProperties;
+ (id)genericParagraphStyleIndexPropertiesInUse;
+ (BOOL)groupedShadowsForChartModel:(id)arg1;
+ (id)legendStyleIdentifierForRoleIndex:(unsigned long long)arg1;
+ (struct CGSize)minimumChartBodySizeForTransformingGeometryForChart:(id)arg1;
+ (id)p_chartTypeTo3DScalePropertyPairs;
+ (id)p_currentThreadSceneAreaLayoutCache;
+ (id)p_stylesheetFromOrderedArrayOfSources:(id)arg1;
+ (id)paragraphStyleIdentifierForRoleIndex:(unsigned long long)arg1 ordinal:(unsigned long long)arg2;
+ (id)paragraphStyleIndexProperties;
+ (id)paragraphStyleIndexPropertiesInUse;
+ (id)paragraphStylePropertiesChartsUse;
+ (id)propertiesThatInvalidateModel;
+ (id)referenceLineStyleIdentifierForRoleIndex:(unsigned long long)arg1 ordinal:(unsigned long long)arg2;
+ (id)scale3DPropertyToConstantDepthInfoChartScaleMappingsWithBarShape:(int)arg1 conversionBlock:(CDUnknownBlockType)arg2;
+ (id)seriesStyleIdentifierForRoleIndex:(unsigned long long)arg1 ordinal:(unsigned long long)arg2;
+ (void)setCurrentThreadSceneAreaLayoutCache:(id)arg1;
+ (id)specificNumberFormatTypeProperties;
+ (id)specificPropertiesThatCanContainCustomDateFormats;
+ (id)specificPropertiesThatCanContainCustomFormats;
+ (id)specificPropertiesThatCanContainCustomNumberFormats;
+ (unsigned char)styleOwnerPathType;
+ (id)swapTuplesForParagraphStyleMutations:(id)arg1 forReferencingProperty:(int)arg2 forStyleOwner:(id)arg3;
+ (id)valueAxisStyleIdentifierForRoleIndex:(unsigned long long)arg1 ordinal:(unsigned long long)arg2;
- (unsigned long long)addParagraphStyle:(id)arg1;
- (void)addReferenceLineForAxisID:(id)arg1 nonStyle:(id)arg2 style:(id)arg3 uuid:(id)arg4;
- (void)addViewStyleProxyForMutationTuples:(id)arg1 layouts:(id)arg2;
- (void)adoptStylesheet:(id)arg1 withMapper:(id)arg2;
- (id)allCustomFormatKeys;
- (id)allStyleOwners;
- (id)allStylesAndNonStylesThatCanHaveCustomNumberFormats;
- (BOOL)appearancePreservedForCurrentPreset;
- (BOOL)appearancePreservedForPreset;
- (void)applyChartStyleState:(id)arg1;
- (id)applyStyleSwapTuple:(id)arg1;
- (id)applyStyleSwapTuples:(id)arg1;
- (struct CGRect)calculateDefaultLegendPositionIfNeededWithOptionalLayout:(id)arg1;
- (id)categoryAxisNonstyleAtIndex:(unsigned long long)arg1;
- (id)categoryAxisStyleAtIndex:(unsigned long long)arg1;
- (unsigned long long)categoryAxisStyleCount;
- (struct CGRect)chartBodyBoundsForSageImportWithSageChartType:(BOOL)arg1 isSpiceDoc:(BOOL)arg2;
- (void)chartDidInvalidateWithProperties:(id)arg1;
- (id)chartInfo;
- (void)chartMoveToPosition:(struct CGPoint)arg1 size:(struct CGSize)arg2;
- (id)chartStyleState;
- (void)chartTypeDidChangeWithDetails:(id)arg1;
- (id)childInfos;
- (id)clamped3DRotationPropertyObject;
- (void)clearParent;
- (void)clearViewStyleProxyForLayouts:(id)arg1;
- (id)commandToApplyFillSet:(id)arg1;
- (BOOL)containsCalloutLines;
- (id)context;
- (id)copyWithContext:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1 context:(id)arg2;
- (id)create3DSceneWithLayoutSettings:(const CDStruct_44ada6bf *)arg1;
- (void)dealloc;
- (void)debugLayoutCache;
- (void)debugVerifyPreset;
- (unsigned long long)defaultDataColumnCountForChartType:(id)arg1 forDocumentLocale:(id)arg2;
- (unsigned long long)defaultDataRowCountForChartType:(id)arg1 forDocumentLocale:(id)arg2;
- (id)defaultProperties;
- (int)defaultPropertyForGeneric:(int)arg1;
- (void)deleteReferenceLineForAxisID:(id)arg1 uuid:(id)arg2;
- (int)elementKind;
- (id)fillsForSeriesAndTheme;
- (float)floatValueForProperty:(int)arg1 defaultValue:(float)arg2;
- (id)g_genericToDefaultPropertyMap;
- (id)g_operationPropertyNameForGenericProperty:(int)arg1;
- (BOOL)gridEqualToDefaultGrid;
- (BOOL)hasFloatValueForProperty:(int)arg1 value:(float *)arg2;
- (BOOL)hasIntValueForProperty:(int)arg1 value:(int *)arg2;
- (BOOL)hasObjectValueForProperty:(int)arg1 value:(id *)arg2;
- (id)infoGeometryForDesiredCircumscribingGeometry:(id)arg1;
- (id)infoGeometryForDesiredPureLayoutGeometry:(id)arg1;
- (id)infoGeometryForVisiblePositioningInfoGeometry:(id)arg1;
- (id)infoGeometryForVisuallyCenteringOnUnscaledCanvasPoint:(struct CGPoint)arg1;
- (id)init;
- (id)initWithChartType:(id)arg1 legendShowing:(id)arg2 chartBodyFrame:(id)arg3 chartAreaFrame:(id)arg4 circumscribingFrame:(id)arg5 legendFrame:(id)arg6 stylePreset:(id)arg7 privateSeriesStyles:(id)arg8 chartNonStyle:(id)arg9 legendNonStyle:(id)arg10 valueAxisNonStyles:(id)arg11 categoryAxisNonStyles:(id)arg12 seriesNonStyles:(id)arg13 refLineNonStylesMap:(id)arg14 refLineStylesMap:(id)arg15 forDocumentLocale:(id)arg16;
- (int)intValueForProperty:(int)arg1 defaultValue:(int)arg2;
- (BOOL)isEquivalentForCrossDocumentPasteMasterComparison:(id)arg1;
- (BOOL)isSingleCircleSpecialCase;
- (BOOL)isSingleCircleSpecialCaseOutSeries:(id *)arg1;
- (Class)layoutClass;
- (id)legendNonStyle;
- (id)legendStyle;
- (void)loadFromPreUFFArchive:(const struct ChartInfoArchive *)arg1 unarchiver:(id)arg2 persistentChartInfo:(id)arg3;
- (void)loadFromUnityArchive:(const struct ChartArchive *)arg1 unarchiver:(id)arg2 persistentChartInfo:(id)arg3;
- (id)masterFontNameForInspectors;
- (float)maximumExplosion;
- (float)maximumExplosionOfAllSeriesExcept:(id)arg1;
- (float)minFrameDimensionForRadius:(float)arg1 withMaxExplosion:(float)arg2;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1 context:(id)arg2;
- (void)modelDidInvalidateWithDetails:(id)arg1;
- (id)modelForDataSetIndex:(unsigned long long)arg1;
- (id)newChartStylePresetByExampleWithPresetIndex:(unsigned long long)arg1 forTheme:(id)arg2;
- (id)newChartStylePresetByExampleWithPresetIndex:(unsigned long long)arg1 withSeriesCount:(unsigned long long)arg2 forTheme:(id)arg3;
- (id)nonStyleForAxis:(id)arg1;
- (id)nonStyleForSeries:(id)arg1;
- (unsigned long long)nonStyleIndexForStyleOwnerRef:(id)arg1;
- (id)nonstyle;
- (unsigned long long)numberOfThemeSeriesStyles;
- (id)objectValueForProperty:(int)arg1;
- (id)operationPropertyNameFromGenericProperty:(int)arg1;
- (id)p_copyNonStyleArray:(id)arg1 inContext:(id)arg2;
- (id)p_copyStyleAndNonStyleArray:(id)arg1 withZone:(struct _NSZone *)arg2 context:(id)arg3;
- (id)p_copyStyleAndNonStyleMap:(id)arg1 withZone:(struct _NSZone *)arg2 context:(id)arg3;
- (id)p_copyStyleArray:(id)arg1 inContext:(id)arg2 withMapper:(id)arg3;
- (double)p_dataSetNameAccomodationWithOptionalLayout:(id)arg1;
- (void)p_duplicatePersistableMembersOfCopiedChartUsingContext:(id)arg1;
- (id)p_genericToDefaultPropertyMap;
- (id)p_getLocalizableDefaultDataDictionaryForChartType:(id)arg1 forDocumentLocale:(id)arg2;
- (id)p_infoGeometryForGeometry:(id)arg1 isCircumscribing:(BOOL)arg2;
- (id)p_init;
- (void)p_invalidateCachesInLayouts:(id)arg1;
- (unsigned long long)p_paragraphStyleIndexOfFirstCategoryAxisParagraphStyle;
- (id)p_presetByAdoptingStylesheet:(id)arg1 forPreset:(id)arg2 withMapper:(id)arg3;
- (unsigned long long)p_refLineIndexWithUUID:(id)arg1 nonStyleItems:(id)arg2;
- (BOOL)p_refLineNonStyleMapIsValid;
- (void)p_saveToUnityArchive:(struct ChartArchive *)arg1 persistentChartInfo:(id)arg2 archiver:(id)arg3;
- (void)p_setDrawableInfo:(id)arg1;
- (id)p_swapTuplesForApplyingPreset:(id)arg1 preservingAppearance:(BOOL)arg2;
- (id)p_swapTuplesForApplyingPresetRemovingOverrides:(id)arg1;
- (id)p_swapTuplesForMutations:(id)arg1;
- (double)p_titleAccommodationWithLegendSize:(struct CGSize)arg1 optionalLayout:(id)arg2;
- (id)p_uuidForRefLineOnAxis:(id)arg1 havingNonStyle:(id)arg2;
- (id)paragraphStyleAtIndex:(unsigned long long)arg1;
- (id)paragraphStyleForSelectionPath:(id)arg1;
- (int)paragraphStylePropertyForSelectionPath:(id)arg1;
- (id)paragraphStyles;
- (id)pasteboardCustomFormatList;
- (void)performDeferredUpgradeAndImportOperations;
- (void)preserveAppearanceForCurrentPresetAdoptingStylesheet:(BOOL)arg1;
- (float)radiusForFrame:(struct CGRect)arg1 withMaxExplosion:(float)arg2;
- (void)reassignPasteboardCustomFormatKeys;
- (id)referenceLineNonStyleForAxisID:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)referenceLineNonStyleForAxisID:(id)arg1 uuid:(id)arg2 outIndex:(unsigned long long *)arg3;
- (id)referenceLineNonStyleItemsForAxisID:(id)arg1;
- (id)referenceLineStyleForAxisID:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)referenceLineStyleForAxisID:(id)arg1 atIndex:(unsigned long long)arg2 privateStyleOnly:(BOOL)arg3;
- (BOOL)referenceLineStyleIsPrivate:(id)arg1;
- (Class)repClass;
- (struct CGRect)resizedLegendFrame:(struct CGRect)arg1 oldChartSize:(struct CGSize)arg2 newChartSize:(struct CGSize)arg3;
- (double)sageDepthFactorForExport;
- (void)saveToUnityArchive:(struct ChartArchive *)arg1 persistentChartInfo:(id)arg2 archiver:(id)arg3;
- (id)scaleAllStrokesInStyle:(id)arg1 byRatio:(double)arg2;
- (id)seriesNonstyleForSeriesIndex:(unsigned long long)arg1;
- (id)seriesStyleForSeries:(id)arg1;
- (id)seriesStyleForSeriesIndex:(unsigned long long)arg1;
- (BOOL)seriesStyleIsPrivate:(id)arg1;
- (void)setCategoryAxisNonstyle:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setChartNonstyle:(id)arg1;
- (void)setChartType:(id)arg1 andSetLegendDefaults:(BOOL)arg2 gridRowIds:(id)arg3 gridColumnIds:(id)arg4 forDocumentLocale:(id)arg5;
- (void)setDefaultLegendPositionIfNeededWithOptionalLayout:(id)arg1;
- (void)setGeometry:(id)arg1 clearObjectPlaceholderFlag:(BOOL)arg2;
- (void)setGeometry:(id)arg1 omitLegendResize:(BOOL)arg2;
- (void)setGeometry:(id)arg1 omitLegendResize:(BOOL)arg2 clearObjectPlaceholderFlag:(BOOL)arg3;
- (void)setInfoGeometryByUpdatingLegendGeometryAccommodatedForInitialLayoutGeometry:(id)arg1;
- (void)setLastAppliedFillSetIdentifier:(id)arg1;
- (void)setPreset:(id)arg1;
- (void)setPreset:(id)arg1 forceOwning:(BOOL)arg2;
- (void)setReferenceLineNonStyleItem:(id)arg1 forAxisID:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)setReferenceLineStyle:(id)arg1 forAxisID:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)setSeriesNonstyle:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setValueAxisNonstyle:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setViewStyleProxyParagraphStyleArray:(id)arg1 layouts:(id)arg2;
- (BOOL)shouldOwnPreset:(id)arg1;
- (int)specificPropertyForGeneric:(int)arg1;
- (id)stringForSelectionPath:(id)arg1;
- (int)stringPropertyForSelectionPath:(id)arg1;
- (id)style;
- (id)styleForAxis:(id)arg1;
- (id)styleOwnerForPath:(id)arg1;
- (id)styleOwnerForRef:(id)arg1;
- (id)styleOwnerForSelectionPath:(id)arg1;
- (id)styleOwnerFromSwapType:(int)arg1 andIndex:(unsigned long long)arg2;
- (id)styleOwnerPathForRef:(id)arg1;
- (id)styleOwnerPathForSemanticTag:(id)arg1;
- (id)styleOwnerPathForStyleOwner:(id)arg1;
- (id)styleOwnerRefForSemanticTag:(id)arg1;
- (id)styleOwnerRefForStyleOwner:(id)arg1;
- (id)styleOwnerRefForStyleOwnerPath:(id)arg1;
- (id)styleSwapCommandToApplyFillSetSeriesPropertyMaps:(id)arg1;
- (id)swapTuplesForApplyingPreset:(id)arg1 withBehavior:(unsigned long long)arg2;
- (id)swapTuplesForMutations:(id)arg1 forImport:(BOOL)arg2;
- (id)swapTuplesForParagraphStyleMutations:(id)arg1 forReferencingProperty:(int)arg2;
- (id)themeChartPresetForUUID:(id)arg1;
- (id)tuplesToApplyState:(id)arg1;
- (void)updateAfterPaste;
- (void)updateTitlesForExportingModel:(id)arg1;
- (void)upgradeAxisLabelFormatWithValuePrefix:(id)arg1 valueSuffix:(id)arg2 valueUseSeparator:(BOOL)arg3 horizontalPrefix:(id)arg4 horizontalSuffix:(id)arg5 horizontalUseSeparator:(BOOL)arg6;
- (void)upgradeWithHorizontalMin:(id)arg1 horizontalMax:(id)arg2 valueMin:(id)arg3 valueMax:(id)arg4;
- (id)valueAxisNonstyleAtIndex:(unsigned long long)arg1;
- (id)valueAxisStyleAtIndex:(unsigned long long)arg1;
- (unsigned long long)valueAxisStyleCount;
- (id)valueForProperty:(int)arg1;
- (id)viewOverrideMapForStyleOwner:(id)arg1;
- (void)willModify;

@end

