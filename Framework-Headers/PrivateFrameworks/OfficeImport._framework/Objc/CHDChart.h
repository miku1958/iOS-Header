//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/OADGraphic.h>

#import <OfficeImport/OADDrawableContainer-Protocol.h>

@class CHDDefaultTextProperties, CHDLegend, CHDPlotArea, CHDTitle, CHDView3D, EDSheet, EDWorkbook, NSMutableArray, NSString, OADGraphicProperties, OADThemeOverrides;

__attribute__((visibility("hidden")))
@interface CHDChart : OADGraphic <OADDrawableContainer>
{
    EDSheet *mSheet;
    int mStyleId;
    BOOL mAutoTitleDeleted;
    BOOL mPlotVisibleCellsOnly;
    BOOL mMSGraph;
    BOOL mHasSharedXValues;
    BOOL mDirectionChanged;
    BOOL mHasVisibleSeriesNames;
    int mDisplayBlankCellsAs;
    CHDPlotArea *mPlotArea;
    CHDView3D *mView3D;
    CHDTitle *mTitle;
    CHDLegend *mLegend;
    EDWorkbook *mExternalData;
    OADGraphicProperties *mChartAreaGraphicProperties;
    OADGraphicProperties *mBackWallGraphicProperties;
    OADGraphicProperties *mSideWallGraphicProperties;
    OADGraphicProperties *mFloorGraphicProperties;
    CHDDefaultTextProperties *mDefaultTextProperties;
    int mChartDirection;
    struct CGRect mLogicalBounds;
    NSMutableArray *mDrawables;
    OADThemeOverrides *mThemeOverrides;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)binaryEffects:(BOOL)arg1;
- (void).cxx_destruct;
- (void)addChild:(id)arg1;
- (void)addChildren:(id)arg1;
- (id)backWallGraphicProperties;
- (unsigned long long)categoryCount;
- (void)changeParentTextListStylePreservingEffectiveValues:(id)arg1;
- (id)chartAreaGraphicProperties;
- (id)childAtIndex:(unsigned long long)arg1;
- (unsigned long long)childCount;
- (id)children;
- (id)defaultContentFormat;
- (id)defaultDataLabelFont;
- (unsigned long long)defaultFontIndex;
- (id)defaultFontWithResources:(id)arg1;
- (int)defaultLabelPosition;
- (id)defaultSeriesTitleFont;
- (id)defaultTextFont;
- (id)defaultTextProperties;
- (id)defaultThemeFont;
- (int)direction;
- (int)displayBlankAs;
- (id)externalData;
- (id)floorGraphicProperties;
- (BOOL)hasSharedXValues;
- (BOOL)hasVisibleSeriesNames;
- (id)init;
- (BOOL)is3D;
- (BOOL)isArea;
- (BOOL)isAutoTitleDeleted;
- (BOOL)isBinary;
- (BOOL)isDirectionChanged;
- (BOOL)isMSGraph;
- (BOOL)isPie;
- (BOOL)isPlotVisibleCellsOnly;
- (BOOL)isScatterOrBubble;
- (id)legend;
- (struct CGRect)logicalBounds;
- (id)mainType;
- (id)plotArea;
- (id)processors;
- (void)removeChild:(id)arg1;
- (void)replaceChild:(id)arg1 with:(id)arg2;
- (unsigned long long)seriesCount;
- (void)setAutoTitleDeleted:(BOOL)arg1;
- (void)setBackWallGraphicProperties:(id)arg1;
- (void)setChartAreaGraphicProperties:(id)arg1;
- (void)setDefaultTextProperties:(id)arg1;
- (void)setDirection:(int)arg1;
- (void)setDirectionChanged:(BOOL)arg1;
- (void)setDisplayBlankAs:(int)arg1;
- (void)setExternalData:(id)arg1;
- (void)setFloorGraphicProperties:(id)arg1;
- (void)setHasSharedXValues:(BOOL)arg1;
- (void)setLegend:(id)arg1;
- (void)setLogicalBounds:(struct CGRect)arg1;
- (void)setMSGraph:(BOOL)arg1;
- (void)setParentTextListStyle:(id)arg1;
- (void)setPlotArea:(id)arg1;
- (void)setPlotVisibleCellsOnly:(BOOL)arg1;
- (void)setSheet:(id)arg1;
- (void)setSideWallGraphicProperties:(id)arg1;
- (void)setStyleId:(int)arg1;
- (void)setThemeOverrides:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setView3D:(id)arg1;
- (void)setVisibleSeriesNames:(BOOL)arg1;
- (id)sheet;
- (id)sideWallGraphicProperties;
- (int)styleId;
- (id)styleMatrix;
- (BOOL)supportsMarkers;
- (id)themeOverrides;
- (id)title;
- (id)view3D;
- (id)workbook;

@end
