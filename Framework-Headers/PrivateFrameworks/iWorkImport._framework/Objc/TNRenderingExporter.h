//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSARenderingExporter.h>

@class NSMutableArray, TNPageController, TNPdfHyperlinkController;

__attribute__((visibility("hidden")))
@interface TNRenderingExporter : TSARenderingExporter
{
    unsigned long long mSheetIndex;
    unsigned long long mPageIndex;
    unsigned long long mTotalPagesCount;
    vector_88016b54 mSheetPageCountArray;
    vector_88016b54 mSheetPageStartArray;
    TNPageController *mPageController;
    TNPdfHyperlinkController *mHyperlinkController;
    NSMutableArray *mCanvasBasedSheets;
    BOOL _renderingAllSheets;
}

@property (nonatomic, getter=isRenderingAllSheets) BOOL renderingAllSheets; // @synthesize renderingAllSheets=_renderingAllSheets;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct CGRect)boundsRect;
- (id)currentInfos;
- (void)dealloc;
- (void)drawAllPagesWithContext:(struct CGContext *)arg1 returnSuccess:(BOOL *)arg2;
- (BOOL)drawCurrentPageInContext:(struct CGContext *)arg1 viewScale:(double)arg2 unscaledClipRect:(struct CGRect)arg3 createPage:(BOOL)arg4;
- (void)drawCurrentPageWithContext:(struct CGContext *)arg1 returnSuccess:(BOOL *)arg2;
- (unsigned long long)inSheetPageIndexForPage:(unsigned long long)arg1;
- (BOOL)incrementPage;
- (id)initWithDocumentRoot:(id)arg1;
- (BOOL)isPageInPortraitOrientation:(unsigned long long)arg1;
- (unsigned long long)numberOfCanvasBasedSheets;
- (id)p_activeSheet;
- (struct CGRect)p_boundsRectForFirstPage;
- (id)p_canvasBasedSheets;
- (BOOL)p_isActiveSheetForm;
- (vector_88016b54)p_pageCountArray;
- (vector_88016b54)p_pageStartArray;
- (id)pageController;
- (unsigned long long)pageCount;
- (long long)pageIndexFromQuickLookSheet:(id)arg1;
- (BOOL)preparePage:(unsigned long long)arg1;
- (double)progressForCurrentPage;
- (id)quickLookSheets;
- (void)setSheetIndex:(unsigned long long)arg1 andPageIndex:(unsigned long long)arg2;
- (void)setup;
- (unsigned long long)sheetIndexForPage:(unsigned long long)arg1;
- (void)teardown;
- (double)totalProgess;
- (struct CGRect)unscaledClipRect;

@end

