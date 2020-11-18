//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/UIPrinterBrowserOwner-Protocol.h>

@class NSArray, NSString, PKPrinter, UINavigationController, UIPopoverController, UIPrintInteractionController, UIPrintPanelTableViewController, UIPrintPaper, UIViewController, UIWindow;

__attribute__((visibility("hidden")))
@interface UIPrintPanelViewController : NSObject <UIPrinterBrowserOwner>
{
    UIPrintInteractionController *_printInteractionController;
    int _lastUsedPrinterIndex;
    UINavigationController *_navigationController;
    UIPrintPanelTableViewController *_tableViewController;
    UIViewController *_parentController;
    UIPopoverController *_poverController;
    UIWindow *_window;
    PKPrinter *_printer;
    BOOL _dismissed;
    BOOL _animated;
    BOOL _observingRotation;
    BOOL _canShowColor;
    CDUnknownBlockType _previewCompletionHandler;
    BOOL _contentLargerThanRollPaper;
    NSArray *_lastUsedPrinterArray;
}

@property (nonatomic) BOOL annotationsImaged;
@property (readonly, nonatomic) BOOL contentLargerThanRollPaper; // @synthesize contentLargerThanRollPaper=_contentLargerThanRollPaper;
@property (nonatomic) long long copies;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL duplex;
@property (nonatomic) BOOL grayscale;
@property (readonly, nonatomic) BOOL hasJobAccountID;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL isJobAccountIDRequired;
@property (strong, nonatomic) NSString *jobAccountID;
@property (strong) NSArray *lastUsedPrinterArray; // @synthesize lastUsedPrinterArray=_lastUsedPrinterArray;
@property (readonly, nonatomic) long long pageCount;
@property (strong, nonatomic) NSArray *pageRanges;
@property (strong, nonatomic) UIPrintPaper *paper;
@property (readonly, nonatomic) NSArray *paperList;
@property (strong, nonatomic) PKPrinter *printer; // @synthesize printer=_printer;
@property (nonatomic) BOOL punch;
@property (nonatomic) BOOL scaleUpDocument;
@property (readonly, nonatomic) BOOL showAnnotationSwitch;
@property (readonly, nonatomic) BOOL showColor;
@property (readonly, nonatomic) BOOL showCopies;
@property (readonly, nonatomic) BOOL showDuplex;
@property (readonly, nonatomic) BOOL showJobAccountID;
@property (readonly, nonatomic) BOOL showMoreOptions;
@property (readonly, nonatomic) BOOL showPageRange;
@property (readonly, nonatomic) BOOL showPaper;
@property (readonly, nonatomic) BOOL showPaperSelection;
@property (readonly, nonatomic) BOOL showPreview;
@property (readonly, nonatomic) BOOL showPrinterWarning;
@property (readonly, nonatomic) BOOL showPunch;
@property (readonly, nonatomic) BOOL showScaleUp;
@property (readonly, nonatomic) BOOL showStaple;
@property (nonatomic) BOOL staple;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (struct CGSize)_getPreferredContentSize:(struct CGRect)arg1 windowFrame:(struct CGRect)arg2;
- (void)_keyWindowWillRotate:(id)arg1;
- (struct CGSize)_makeContentSizeeWithLongSize:(double)arg1 shortSize:(double)arg2;
- (void)_presentInParentAnimated:(BOOL)arg1;
- (void)_printNavigationConrollerDidDismiss;
- (id)_removeRollsFrom:(id)arg1;
- (void)cancelPrinting;
- (void)dealloc;
- (void)dismissAnimated:(BOOL)arg1;
- (void)dismissPrintPanel:(BOOL)arg1 animated:(BOOL)arg2;
- (BOOL)filtersPrinters;
- (id)initWithPrintInterationController:(id)arg1 inParentController:(id)arg2;
- (id)localizedPageRangeText;
- (void)lookupLastUsedPrinter;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)presentPrintPanelAnimated:(BOOL)arg1 hostingScene:(id)arg2;
- (void)presentPrintPanelFromBarButtonItem:(id)arg1 animated:(BOOL)arg2;
- (void)presentPrintPanelFromRect:(struct CGRect)arg1 inView:(id)arg2 animated:(BOOL)arg3;
- (id)printInfo;
- (void)printMoreOptionsViewDidDisappear;
- (void)printPanelDidDisappear;
- (void)printPaperViewDidDisappear;
- (void)printRangeViewDidDisappear;
- (void)printerBrowserViewDidDisappear;
- (BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)startPrinting;
- (unsigned long long)supportedInterfaceOrientations;
- (BOOL)testIfContentLargerThanRollPaper:(id)arg1;

@end

