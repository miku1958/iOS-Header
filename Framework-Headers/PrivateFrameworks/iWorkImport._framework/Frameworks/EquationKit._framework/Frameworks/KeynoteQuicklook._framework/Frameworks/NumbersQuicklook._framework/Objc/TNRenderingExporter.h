//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSApplication/TSARenderingExporter.h>

#import <NumbersQuicklook/TNAnnotationPrintingHelperDataSource-Protocol.h>

@class NSArray, NSMapTable, NSMutableArray, TNAnnotationPrintingHelper, TNPageController, TNPdfHyperlinkController;

@interface TNRenderingExporter : TSARenderingExporter <TNAnnotationPrintingHelperDataSource>
{
    unsigned long long mSheetIndex;
    unsigned long long mPageIndex;
    NSMapTable *mPageCountCache;
    vector_06e666a8 mSheetPageCountArray;
    vector_06e666a8 mSheetPageStartArray;
    TNPageController *mPageController;
    TNPdfHyperlinkController *mHyperlinkController;
    NSMutableArray *mCanvasBasedSheets;
    TNAnnotationPrintingHelper *_annotationPrintingHelper;
    NSArray *_addendumContentProvidersForCurrentSheet;
    NSArray *_overlayContentProvidersForCurrentSheet;
    BOOL _renderingAllSheets;
    BOOL _shouldGenerateTemporaryLayouts;
    BOOL _hasCompletedSetup;
    unsigned long long _renderingComments;
    unsigned long long _addendumPageIndex;
    unsigned long long _exportState;
    unsigned long long _addendumPageCount;
}

@property (readonly, nonatomic) NSArray *addendumContentProvidersForCurrentSheet; // @synthesize addendumContentProvidersForCurrentSheet=_addendumContentProvidersForCurrentSheet;
@property (nonatomic) unsigned long long addendumPageCount; // @synthesize addendumPageCount=_addendumPageCount;
@property (nonatomic) unsigned long long addendumPageIndex; // @synthesize addendumPageIndex=_addendumPageIndex;
@property (readonly, nonatomic) TNAnnotationPrintingHelper *annotationPrintingHelper; // @synthesize annotationPrintingHelper=_annotationPrintingHelper;
@property (nonatomic) unsigned long long exportState; // @synthesize exportState=_exportState;
@property (nonatomic) BOOL hasCompletedSetup; // @synthesize hasCompletedSetup=_hasCompletedSetup;
@property (strong, nonatomic) NSArray *overlayContentProvidersForCurrentSheet; // @synthesize overlayContentProvidersForCurrentSheet=_overlayContentProvidersForCurrentSheet;
@property (nonatomic, getter=isRenderingAllSheets) BOOL renderingAllSheets; // @synthesize renderingAllSheets=_renderingAllSheets;
@property (nonatomic) unsigned long long renderingComments; // @synthesize renderingComments=_renderingComments;
@property (nonatomic) BOOL shouldGenerateTemporaryLayouts; // @synthesize shouldGenerateTemporaryLayouts=_shouldGenerateTemporaryLayouts;

- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned long long)_addendumPageCountForCurrentSheet;
- (id)_pageCountCache;
- (struct UIEdgeInsets)_printMargins;
- (id)_printProperties;
- (id)_printableInfos;
- (void)_resetSheetDependentObjects;
- (struct CGRect)_unpaginatedBoundsRect;
- (void)_updateExportState;
- (id)addendumPageTitleOfAnnotationPrintingHelper:(id)arg1;
- (void)annotationPrintingHelper:(id)arg1 enumerateLayoutsByPageWithBlock:(CDUnknownBlockType)arg2;
- (struct CGAffineTransform)annotationPrintingHelper:(id)arg1 inversePureTransformInRootForContentAtPageIndex:(unsigned long long)arg2;
- (id)annotationPrintingHelper:(id)arg1 layoutsForPageIndex:(unsigned long long)arg2;
- (struct CGRect)availableRectForAddendumContentOfAnnotationPrintingHelper:(id)arg1;
- (struct CGRect)boundsRect;
- (double)contentScaleOfAnnotationPrintingHelper:(id)arg1;
- (id)currentInfos;
- (void)dealloc;
- (BOOL)drawCurrentPageInContext:(struct CGContext *)arg1 viewScale:(double)arg2 unscaledClipRect:(struct CGRect)arg3 createPage:(BOOL)arg4;
- (void)drawCurrentPageWithContext:(struct CGContext *)arg1 returnSuccess:(BOOL *)arg2;
- (BOOL)exportToURL:(id)arg1 pageNumber:(unsigned long long)arg2 delegate:(id)arg3 error:(id *)arg4;
- (Class)imagerClass;
- (unsigned long long)inSheetPageIndexForPage:(unsigned long long)arg1;
- (BOOL)incrementPage;
- (id)initWithDocumentRoot:(id)arg1;
- (BOOL)isPageInPortraitOrientation:(unsigned long long)arg1;
- (unsigned long long)numberOfCanvasBasedSheets;
- (id)p_activeSheet;
- (struct CGRect)p_boundsRectForFirstPage;
- (id)p_canvasBasedSheets;
- (long long)p_indexOfActiveSheet;
- (BOOL)p_isActiveSheetForm;
- (vector_06e666a8)p_pageCountArray;
- (vector_06e666a8)p_pageStartArray;
- (id)pageController;
- (unsigned long long)pageCount;
- (long long)pageIndexFromQuickLookSheet:(id)arg1;
- (BOOL)preparePage:(unsigned long long)arg1;
- (void)processHyperlinksForCanvas:(id)arg1 withContext:(struct CGContext *)arg2 andImager:(id)arg3 isFitToSheet:(BOOL)arg4;
- (double)progressForCurrentPage;
- (id)quickLookSheets;
- (struct CGRect)rectForAddendumContentOfAnnotationPrintingHelper:(id)arg1;
- (struct CGRect)rectForFlagContentOfAnnotationPrintingHelper:(id)arg1;
- (void)setSheetIndex:(unsigned long long)arg1 andPageIndex:(unsigned long long)arg2;
- (void)setSheetIndex:(unsigned long long)arg1 pageIndex:(unsigned long long)arg2 addendumPageIndex:(unsigned long long)arg3;
- (void)setup;
- (unsigned long long)sheetIndexForPage:(unsigned long long)arg1;
- (BOOL)shouldPrintComments;
- (BOOL)shouldPrintCommentsOfAnnotationPrintingHelper:(id)arg1;
- (BOOL)shouldSuppressBackgroundsForCurrentPage;
- (void)teardown;
- (double)totalProgess;
- (struct CGRect)unscaledClipRect;

@end
