//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXLayoutGenerator.h>

#import <PhotosUICore/PXGDiagnosticsProvider-Protocol.h>
#import <PhotosUICore/PXPresentedGridLayout-Protocol.h>

@class NSString, PXExploreLayoutMetrics, PXExploreParsingState;

@interface PXExploreLayoutGenerator : PXLayoutGenerator <PXGDiagnosticsProvider, PXPresentedGridLayout>
{
    long long _count;
    long long _capacity;
    struct {
        long long _field1;
        long long _field2;
        unsigned long long _field3;
        double _field4;
        double _field5;
    } *_inputItemInfos;
    struct _PXLayoutGeometry *_outputGeometries;
    long long *_outputItemIndexToParseLocation;
    CDStruct_e6148bb0 *_outputItemLocations;
    long long *_outputNumberOfColumnsAtRow;
    BOOL _isPrepared;
    struct CGPoint _origin;
    long long _row;
    long long _localNumberOfColumns;
    long long _localNumberOfRows;
    struct CGSize _cellSize;
    struct CGSize _intercellSpacing;
    struct CGSize _contentSize;
    struct _PXCornerSpriteIndexes _cornerSpriteIndexes;
    struct CGSize _headerItemSize;
    struct CGSize _minHeroItemsSize;
    PXExploreParsingState *_localState;
    struct CGSize _minimumItemSize;
    struct CGSize _buildingBlockSize;
}

@property (readonly, nonatomic) struct CGSize buildingBlockSize; // @synthesize buildingBlockSize=_buildingBlockSize;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *diagnosticDescription;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) struct CGSize headerItemSize;
@property (readonly, nonatomic) PXExploreParsingState *localState; // @synthesize localState=_localState;
@property (copy, nonatomic) PXExploreLayoutMetrics *metrics; // @dynamic metrics;
@property (readonly, nonatomic) struct CGSize minHeroItemsSize;
@property (readonly, nonatomic) struct CGSize minimumItemSize; // @synthesize minimumItemSize=_minimumItemSize;
@property (readonly, nonatomic) long long numberOfRemainingItems;
@property (readonly, nonatomic) long long presentedNumberOfRows;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addThreeItemsToSixColumnRowWithHeroItemType:(long long)arg1 options:(unsigned long long)arg2 rowType:(long long *)arg3;
- (void)_addTwoItemsForThreeColumnRowPreferringTallVariant:(BOOL)arg1;
- (double)_buildingBlockAspectRatioForNumberOfColumns:(long long)arg1 options:(unsigned long long)arg2;
- (struct CGSize)_cellSizeForNumberOfColumns:(long long)arg1;
- (struct CGSize)_estimatedSizeForColumns:(long long)arg1 headerRows:(long long)arg2 averageItemsPerBlock:(double)arg3 averageRowsPerBlock:(double)arg4 withOptions:(unsigned long long)arg5;
- (struct CGSize)_estimatedSizeForFourColumnLayoutWithOptions:(unsigned long long)arg1;
- (struct CGSize)_estimatedSizeForSixColumnLayoutWithOptions:(unsigned long long)arg1;
- (struct CGSize)_estimatedSizeForThreeColumnLayoutWithOptions:(unsigned long long)arg1;
- (BOOL)_isShortRowNextFollowedByLargeHero;
- (void)_parseFourColumnHeroRowWithType:(long long)arg1 heroItemType:(long long)arg2 numberOfItems:(long long)arg3;
- (BOOL)_parseFourColumnLayoutWithOptions:(unsigned long long)arg1;
- (void)_parseFourColumnShortRowWithNumberOfItems:(long long)arg1;
- (void)_parseSixColumnHeroRowWithNumberOfItems:(long long)arg1 heroItemType:(long long)arg2 subsequentShortRowItems:(long long)arg3 options:(unsigned long long)arg4;
- (BOOL)_parseSixColumnLayoutWithOptions:(unsigned long long)arg1;
- (void)_parseSixColumnShortRowWithNumberOfItems:(long long)arg1;
- (void)_parseThreeColumnHeaderRowWithNumberOfItems:(long long)arg1;
- (BOOL)_parseThreeColumnLayoutWithOptions:(unsigned long long)arg1;
- (void)_parseThreeColumnMediumHeroRowWithNumberOfItems:(long long)arg1;
- (void)_parseThreeColumnShortRowWithNumberOfItems:(long long)arg1;
- (void)_prepareIfNeeded;
- (void)addLocalItemWithType:(long long)arg1 atColumn:(long long)arg2 row:(long long)arg3 columnSpan:(long long)arg4 rowSpan:(long long)arg5;
- (unsigned long long)attributesForNextItemAtIndex:(long long)arg1;
- (void)beginRowWithNumberOfColumns:(long long)arg1;
- (struct _PXCornerSpriteIndexes)cornerSpriteIndexes;
- (void)dealloc;
- (void)endRowWithType:(long long)arg1;
- (struct CGSize)estimatedSize;
- (struct CGSize)estimatedSizeForPadLandscape;
- (struct CGSize)estimatedSizeForPadPortrait;
- (struct CGSize)estimatedSizeForPhoneLandscape;
- (struct CGSize)estimatedSizeForPhonePortrait;
- (void)getGeometries:(struct _PXLayoutGeometry *)arg1 inRange:(struct _NSRange)arg2 withKind:(long long)arg3;
- (void)getLowestAspectRatio:(double *)arg1 highestAspectRatio:(double *)arg2 forNextItems:(long long)arg3;
- (long long)indexWithinNextItems:(long long)arg1 having:(long long)arg2 keyIndex:(long long)arg3;
- (id)initWithMetrics:(id)arg1;
- (void)invalidate;
- (BOOL)isAcceptableLargeHeroNextItemAtIndex:(long long)arg1;
- (long long)itemIndexForItem:(long long)arg1 inDirection:(unsigned long long)arg2;
- (long long)itemIndexForPresentedItemIndex:(long long)arg1;
- (void)moveNextItemAtIndex:(long long)arg1 toIndex:(long long)arg2;
- (BOOL)nextInputItems:(unsigned long long)arg1;
- (BOOL)nextItems:(long long)arg1 areAll:(unsigned long long)arg2;
- (BOOL)nextItems:(long long)arg1 isAny:(unsigned long long)arg2;
- (long long)numberOf:(unsigned long long)arg1 withinNextItems:(long long)arg2;
- (long long)numberOfItemsInFourColumnMediumHeroRowForNumberOfRemainingItems:(long long)arg1;
- (long long)numberOfItemsInSixColumnHeroRowForNumberOfRemainingItems:(long long)arg1 rowOptions:(unsigned long long *)arg2;
- (long long)numberOfItemsInSixColumnShortRowForNumberOfRemainingItems:(long long)arg1;
- (BOOL)parseFourColumnGroupWithShortRowFollowedByLargeHero;
- (BOOL)parseFourColumnRowWithType:(long long)arg1 numberOfItems:(long long)arg2;
- (BOOL)parseMacLayout;
- (BOOL)parsePadLandscapeLayout;
- (BOOL)parsePadPortraitLayout;
- (BOOL)parsePhoneLandscapeLayout;
- (BOOL)parsePhonePortraitLayout;
- (BOOL)parseSixColumnRowWithType:(long long)arg1 numberOfItems:(long long)arg2 options:(unsigned long long)arg3;
- (BOOL)parseSixColumnRowWithType:(long long)arg1 numberOfItems:(long long)arg2 subsequentShortRowItems:(long long)arg3 options:(unsigned long long)arg4;
- (BOOL)parseThreeColumnGroupWithFiveItems;
- (BOOL)parseThreeColumnGroupWithShortRowFollowedByLargeHero;
- (BOOL)parseThreeColumnGroupWithThreeItemsFollowedByOneItemAllowingLargeHeroAtEnd:(BOOL)arg1;
- (BOOL)parseThreeColumnMediumHeroRowWithPano;
- (BOOL)parseThreeColumnRowWithType:(long long)arg1 numberOfItems:(long long)arg2;
- (BOOL)parseThreeColumnShortRowWithPano;
- (long long)preferredRowTypeAfterRowWithType:(long long)arg1;
- (BOOL)prepareNextItems:(long long)arg1 withLargeHeroIndex:(long long)arg2;
- (CDStruct_e6148bb0)presentedItemLocationForItemAtIndex:(long long)arg1;
- (id)presentedItemsBetweenItem:(long long)arg1 andItem:(long long)arg2;
- (id)presentedItemsInRect:(struct CGRect)arg1;
- (long long)presentedNumberOfColumnsAtRow:(long long)arg1;
- (struct CGRect)presentedRectForItemAtIndex:(long long)arg1;
- (void)reorderNextItems:(long long)arg1 usingMapping:(CDUnknownBlockType)arg2;
- (double)score:(long long)arg1 forNextItemAtIndex:(long long)arg2;
- (void)setBuildingBlockColumnSpan:(long long)arg1 rowSpan:(long long)arg2 withNumberOfColumns:(long long)arg3;
- (struct CGSize)size;
- (void)sortNextItems:(long long)arg1 withItemAtIndex:(long long)arg2 having:(long long)arg3;

@end

