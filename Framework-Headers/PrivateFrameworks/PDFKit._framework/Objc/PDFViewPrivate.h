//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSMutableArray, NSTimer, PDFDocument, PDFPage, PDFPasswordViewController, PDFScrollView, PDFSelection, PDFViewController, PDFViewLayout, UILongPressGestureRecognizer, UIPanGestureRecognizer, UISwipeGestureRecognizer, UITapGestureRecognizer, UITextField;
@protocol PDFViewDelegate, PDFViewPopupManager;

@interface PDFViewPrivate : NSObject
{
    PDFDocument *document;
    PDFScrollView *scrollView;
    PDFViewController *controller;
    PDFSelection *currentSelection;
    BOOL autoScale;
    BOOL scaling;
    double zoomIncrement;
    id<PDFViewDelegate> delegate;
    BOOL delegateWillScale;
    BOOL delegateOrdersPageDrawing;
    double gutterWide;
    BOOL displaysPageBreaks;
    long long displayMode;
    PDFViewLayout *viewLayout;
    BOOL displaysSoloPagesCentered;
    BOOL disableInterPageSpacing;
    BOOL scrollingChangesPages;
    BOOL displaysAsBook;
    BOOL antiAliasing;
    double greekingThreshold;
    double lineWidthThreshold;
    long long interpolationQuality;
    long long displayBox;
    unsigned long long scrollEntry;
    unsigned long long currentPageIndex;
    unsigned long long firstVisiblePage;
    unsigned long long lastVisiblePage;
    BOOL inhibitAutoScroll;
    PDFPage *fromPage;
    BOOL scheduledPageSync;
    NSDate *pageSyncDate;
    NSMutableArray *destinationHistory;
    long long historyIndex;
    NSArray *highlights;
    PDFPasswordViewController *passwordViewController;
    BOOL hasInstalledTileStats;
    UITextField *tileStatsLabel;
    NSTimer *tileStatsTimer;
    NSObject<PDFViewPopupManager> *popupManager;
    UILongPressGestureRecognizer *longPressGestureRecognizer;
    UIPanGestureRecognizer *panGestureRecognizer;
    UITapGestureRecognizer *tapGestureRecognizer;
    UISwipeGestureRecognizer *swipeGestureRecognizer;
    BOOL needsRotationZoomFix;
    BOOL forceUseMainThread;
}

- (void).cxx_destruct;

@end

