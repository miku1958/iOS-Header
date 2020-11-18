//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class TNDocumentRoot, TNPageCoordinateDictionary, TNPrintProperties, TNSheet, TSUPointerKeyDictionary;
@protocol TNPageControllerDelegate;

__attribute__((visibility("hidden")))
@interface TNPageController : NSObject
{
    BOOL _pageCountsValid;
    BOOL _computingPageCounts;
    BOOL _maxPageCoordinateValid;
    BOOL _processingChanges;
    BOOL _updateViewScaleForDrawablesChangeAfterProcessingChanges;
    BOOL _postAutoFitContentScaleDidChangeNotificationAfterProcessingChanges;
    BOOL _inDynamicContentScaleChange;
    struct TSUCellCoord _maxPageCoordinate;
    NSObject<TNPageControllerDelegate> *_delegate;
    TNDocumentRoot *_documentRoot;
    TNSheet *_sheet;
    double _userViewScale;
    double _headerTextHeight;
    double _footerTextHeight;
    TNPageCoordinateDictionary *_pageLayoutCache;
    TSUPointerKeyDictionary *_hintCacheDictionary;
    TSUPointerKeyDictionary *_sheetPageCountCache;
    TNPageCoordinateDictionary *_headerLayerCache;
    TNPageCoordinateDictionary *_footerLayerCache;
    long long _cachedPageCountDuringDynamicContentScaleChange;
    long long _priorPageCount;
    long long _subsequentPageCount;
    TNPrintProperties *_printProperties;
}

@property (nonatomic) long long cachedPageCountDuringDynamicContentScaleChange; // @synthesize cachedPageCountDuringDynamicContentScaleChange=_cachedPageCountDuringDynamicContentScaleChange;
@property (nonatomic) BOOL computingPageCounts; // @synthesize computingPageCounts=_computingPageCounts;
@property (readonly, nonatomic) struct CGRect contentFrame;
@property (readonly, nonatomic) double contentScale;
@property (weak, nonatomic) NSObject<TNPageControllerDelegate> *delegate; // @synthesize delegate=_delegate;
@property (weak, nonatomic) TNDocumentRoot *documentRoot; // @synthesize documentRoot=_documentRoot;
@property (strong, nonatomic) TNPageCoordinateDictionary *footerLayerCache; // @synthesize footerLayerCache=_footerLayerCache;
@property (nonatomic) double footerTextHeight; // @synthesize footerTextHeight=_footerTextHeight;
@property (strong, nonatomic) TNPageCoordinateDictionary *headerLayerCache; // @synthesize headerLayerCache=_headerLayerCache;
@property (nonatomic) double headerTextHeight; // @synthesize headerTextHeight=_headerTextHeight;
@property (strong, nonatomic) TSUPointerKeyDictionary *hintCacheDictionary; // @synthesize hintCacheDictionary=_hintCacheDictionary;
@property (readonly, nonatomic) BOOL inDynamicContentScaleChange; // @synthesize inDynamicContentScaleChange=_inDynamicContentScaleChange;
@property (nonatomic) struct TSUCellCoord maxPageCoordinate; // @synthesize maxPageCoordinate=_maxPageCoordinate;
@property (nonatomic) BOOL maxPageCoordinateValid; // @synthesize maxPageCoordinateValid=_maxPageCoordinateValid;
@property (readonly, nonatomic) unsigned long long numPages;
@property (nonatomic) BOOL pageCountsValid; // @synthesize pageCountsValid=_pageCountsValid;
@property (strong, nonatomic) TNPageCoordinateDictionary *pageLayoutCache; // @synthesize pageLayoutCache=_pageLayoutCache;
@property (readonly, nonatomic) struct CGSize pageSize;
@property (readonly, nonatomic, getter=isPortrait) BOOL portrait;
@property (nonatomic) BOOL postAutoFitContentScaleDidChangeNotificationAfterProcessingChanges; // @synthesize postAutoFitContentScaleDidChangeNotificationAfterProcessingChanges=_postAutoFitContentScaleDidChangeNotificationAfterProcessingChanges;
@property (strong, nonatomic) TNPrintProperties *printProperties; // @synthesize printProperties=_printProperties;
@property (nonatomic) long long priorPageCount; // @synthesize priorPageCount=_priorPageCount;
@property (nonatomic, getter=isProcessingChanges) BOOL processingChanges; // @synthesize processingChanges=_processingChanges;
@property (weak, nonatomic) TNSheet *sheet; // @synthesize sheet=_sheet;
@property (strong, nonatomic) TSUPointerKeyDictionary *sheetPageCountCache; // @synthesize sheetPageCountCache=_sheetPageCountCache;
@property (nonatomic) long long subsequentPageCount; // @synthesize subsequentPageCount=_subsequentPageCount;
@property (nonatomic) BOOL updateViewScaleForDrawablesChangeAfterProcessingChanges; // @synthesize updateViewScaleForDrawablesChangeAfterProcessingChanges=_updateViewScaleForDrawablesChangeAfterProcessingChanges;
@property (nonatomic) double userViewScale; // @synthesize userViewScale=_userViewScale;

+ (double)autoFitContentScaleForSheet:(id)arg1;
+ (id)cachedAutoFitContentScaleDictionary;
+ (double)p_unclampedAutoFitContentScaleForSheet:(id)arg1;
- (void).cxx_destruct;
- (void)canvasViewScaleDidChange:(double)arg1;
- (struct CGSize)contentSizeForCanvasLayer;
- (void)dealloc;
- (struct CGRect)firstPartitionFrameForInfo:(id)arg1 outStartPageCoordinate:(out struct TSUCellCoord *)arg2;
- (void)i_invalidateHintCache;
- (void)i_invalidatePageLayoutCache;
- (id)i_layerForHeaderType:(long long)arg1 fragment:(long long)arg2 atPageCoordinate:(struct TSUCellCoord)arg3;
- (void)i_setLayer:(id)arg1 forHeaderType:(long long)arg2 fragment:(long long)arg3 atPageCoordinate:(struct TSUCellCoord)arg4;
- (id)initWithDocumentRoot:(id)arg1;
- (void)invalidateCachedAutoFitContentScaleForSheet:(id)arg1;
- (void)invalidateDrawableLayouts;
- (void)invalidatePageLayout;
- (void)invalidatePageLayoutGeometries;
- (BOOL)isPagePlaceholderAtPageCoordinate:(struct TSUCellCoord)arg1;
- (void)layoutAtPageIndex:(unsigned long long)arg1 forLayoutController:(id)arg2;
- (void)layoutInPageRange:(CDStruct_d8c645bd)arg1 forLayoutController:(id)arg2;
- (void)p_clearHintCache;
- (void)p_computePriorPageCountForCurrentSheet;
- (void)p_computeSubsequentPageCountForCurrentSheet;
- (void)p_didEndDynamicContentScaleChange:(id)arg1;
- (void)p_enumerateOverPageRange:(CDStruct_d8c645bd)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (BOOL)p_headersOrFootersContainPageNumberRelatedAttachments;
- (id)p_hintCacheForInfo:(id)arg1;
- (void)p_invalidateCachedAutoFitContentScaleForSheet:(id)arg1 notify:(BOOL)arg2;
- (void)p_invalidatePageCounts;
- (id)p_layoutForInfo:(id)arg1 atCoordinate:(struct TSUCellCoord)arg2 parentLayout:(id)arg3;
- (void)p_layoutInfo:(id)arg1 intoPageLayout:(id)arg2 atPageCoordinate:(struct TSUCellCoord)arg3;
- (void)p_layoutInfo:(id)arg1 intoPageRange:(CDStruct_d8c645bd)arg2;
- (void)p_measureHeadersAndFooters;
- (struct TSUCellCoord)p_pageCoordinateForPageLayoutAtDevicePoint:(struct CGPoint)arg1;
- (long long)p_pageCountForSheet:(id)arg1;
- (id)p_pageInfoForPageAtIndex:(unsigned long long)arg1;
- (id)p_pageLayoutAtCoordinate:(struct TSUCellCoord)arg1;
- (void)p_postAutoFitContentScaleDidChangeNotification;
- (double)p_printViewDefaultUserViewScale;
- (long long)p_priorPageCount;
- (long long)p_updateCachedPageCountForCurrentSheet;
- (void)p_updateVisiblePageRange:(CDStruct_d8c645bd)arg1 forLayoutController:(id)arg2;
- (void)p_willBeginDynamicContentScaleChange:(id)arg1;
- (struct TSUCellCoord)pageCoordinateForDrawableAtUnscaledPoint:(struct CGPoint)arg1;
- (struct TSUCellCoord)pageCoordinateForMaxVisiblePage;
- (struct TSUCellCoord)pageCoordinateForPageIndex:(unsigned long long)arg1;
- (struct TSUCellCoord)pageCoordinateForPageLayoutAtUnscaledPoint:(struct CGPoint)arg1;
- (unsigned long long)pageCount;
- (id)pageInfoForPageIndex:(unsigned long long)arg1;
- (id)pageLayoutGeometryForPageCoordinate:(struct TSUCellCoord)arg1;
- (id)pageLayoutGeometryForPrintingAtPageCoordinate:(struct TSUCellCoord)arg1;
- (unsigned long long)pageNumberForPageCoordinate:(struct TSUCellCoord)arg1;
- (CDStruct_d8c645bd)pageRangeForContent;
- (CDStruct_d8c645bd)pageRangeForContentWithUpperBound:(struct TSUCellCoord)arg1;
- (CDStruct_d8c645bd)pageRangeForInfo:(id)arg1 upperBound:(struct TSUCellCoord)arg2;
- (CDStruct_d8c645bd)pageRangeForPageIndex:(unsigned long long)arg1;
- (CDStruct_d8c645bd)pageRangeWithPlaceholdersWithUpperBound:(struct TSUCellCoord)arg1;
- (struct CGSize)pageSizeWithGutter;
- (struct CGRect)printingLayoutRectForPageIndex:(unsigned long long)arg1;
- (void)registerPageLayout:(id)arg1 atPageCoordinate:(struct TSUCellCoord)arg2;
- (void)removeLayoutsFromPages;
- (void)syncPositionOfLayout:(id)arg1 atCoordinate:(struct TSUCellCoord)arg2;
- (void)updateContentScale;
- (void)updatePrintMargins;
- (void)updateUserViewScale;
- (void)updateViewScale;
- (void)willExitPrintView;

@end
