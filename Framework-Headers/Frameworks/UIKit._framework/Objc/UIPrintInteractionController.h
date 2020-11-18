//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, PKPrinter, UIPrintFormatter, UIPrintInfo, UIPrintPageRenderer, UIPrintPaper, UIWindowScene;
@protocol OS_dispatch_queue, UIPrintInteractionControllerActivityDelegate, UIPrintInteractionControllerDelegate;

@interface UIPrintInteractionController : NSObject
{
    BOOL _hidesNumberOfCopies;
    BOOL _isContentManaged;
    CDUnknownBlockType _completionHandler;
    unsigned long long _backgroundTaskIdentifier;
    NSObject<OS_dispatch_queue> *_previewQueue;
    id _printState;
    id _temporaryRetainCycle;
    BOOL _showsPageRange;
    BOOL _showsPaperSelectionForLoadedPapers;
    UIPrintInfo *_printInfo;
    id<UIPrintInteractionControllerDelegate> _delegate;
    UIPrintPaper *_printPaper;
    UIPrintPageRenderer *_printPageRenderer;
    UIPrintFormatter *_printFormatter;
    id _printingItem;
    NSArray *_printingItems;
    UIWindowScene *_hostingWindowScene;
    id<UIPrintInteractionControllerActivityDelegate> _printActivityDelegate;
}

@property (weak, nonatomic) id<UIPrintInteractionControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (strong, nonatomic) UIWindowScene *hostingWindowScene; // @synthesize hostingWindowScene=_hostingWindowScene;
@property (nonatomic) BOOL isContentManaged; // @synthesize isContentManaged=_isContentManaged;
@property (readonly, nonatomic) long long pageCount;
@property (strong, nonatomic) NSArray *pageRanges;
@property (strong, nonatomic) UIPrintPaper *paper;
@property (weak, nonatomic) id<UIPrintInteractionControllerActivityDelegate> printActivityDelegate; // @synthesize printActivityDelegate=_printActivityDelegate;
@property (strong, nonatomic) UIPrintFormatter *printFormatter; // @synthesize printFormatter=_printFormatter;
@property (strong, nonatomic) UIPrintInfo *printInfo; // @synthesize printInfo=_printInfo;
@property (strong, nonatomic) UIPrintPageRenderer *printPageRenderer; // @synthesize printPageRenderer=_printPageRenderer;
@property (readonly, nonatomic) UIPrintPaper *printPaper; // @synthesize printPaper=_printPaper;
@property (strong, nonatomic) PKPrinter *printer;
@property (copy, nonatomic) id printingItem; // @synthesize printingItem=_printingItem;
@property (copy, nonatomic) NSArray *printingItems; // @synthesize printingItems=_printingItems;
@property (nonatomic) BOOL showsNumberOfCopies;
@property (nonatomic) BOOL showsPageRange; // @synthesize showsPageRange=_showsPageRange;
@property (nonatomic) BOOL showsPaperSelectionForLoadedPapers; // @synthesize showsPaperSelectionForLoadedPapers=_showsPaperSelectionForLoadedPapers;

+ (BOOL)canPrintData:(id)arg1;
+ (BOOL)canPrintURL:(id)arg1;
+ (BOOL)isPrintingAvailable;
+ (id)printableUTIs;
+ (id)sharedPrintController;
- (void).cxx_destruct;
- (BOOL)_canPrintPDFData:(id)arg1;
- (BOOL)_canPrintPDFURL:(id)arg1;
- (BOOL)_canShowAnnotations;
- (BOOL)_canShowColor;
- (BOOL)_canShowCopies;
- (BOOL)_canShowDuplex;
- (BOOL)_canShowPageRange;
- (BOOL)_canShowPaperList;
- (BOOL)_canShowPreview;
- (BOOL)_canShowPunch;
- (BOOL)_canShowStaple;
- (void)_cancelAllPreviewGeneration;
- (void)_cancelManualPrintPage;
- (void)_cleanPrintState;
- (id)_currentPrintInfo;
- (void)_enableManualPrintPage:(BOOL)arg1;
- (void)_endPrintJob:(BOOL)arg1 error:(id)arg2;
- (void)_ensurePDFIsUnlockedFirstAttempt:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_generatePrintPreview:(CDUnknownBlockType)arg1;
- (id)_getChosenPaperFromDelegateForPaperList:(id)arg1;
- (double)_getCutLengthFromDelegateForPaper:(id)arg1;
- (void)_manualPrintPage;
- (id)_newPDFPreviewURLWithPath:(id)arg1 isContentManaged:(BOOL)arg2;
- (struct CGContext *)_newSaveContext:(id)arg1 withMediaRect:(struct CGRect)arg2;
- (id)_paperForContentType:(long long)arg1;
- (id)_paperForPDFItem:(id)arg1 withDuplexMode:(long long)arg2;
- (void)_preparePrintInfo;
- (BOOL)_presentAnimated:(BOOL)arg1 hostingScene:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)_printItem:(id)arg1;
- (struct CGSize)_printItemContentSize;
- (void)_printPage;
- (id)_printPageRenderer:(id)arg1;
- (void)_printPanelDidDismiss;
- (void)_printPanelDidPresent;
- (void)_printPanelWillDismiss:(BOOL)arg1;
- (struct CGSize)_printablePDFDataSize:(id)arg1;
- (struct CGSize)_printablePDFURLSize:(id)arg1;
- (BOOL)_printingItemIsReallyTallPDF;
- (void)_setPrintInfoState:(int)arg1;
- (BOOL)_setupPrintPanel:(CDUnknownBlockType)arg1;
- (void)_startPrinting;
- (void)_updateCutterBehavior;
- (void)_updatePageCount;
- (void)_updatePrintPaper;
- (void)dealloc;
- (void)dismissAnimated:(BOOL)arg1;
- (id)init;
- (BOOL)presentAnimated:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)presentFromBarButtonItem:(id)arg1 animated:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (BOOL)presentFromRect:(struct CGRect)arg1 inView:(id)arg2 animated:(BOOL)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (BOOL)printToPrinter:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)savePDFToURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)savePDFToURL:(id)arg1 showProgress:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end
