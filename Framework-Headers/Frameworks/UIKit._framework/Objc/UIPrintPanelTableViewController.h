//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import <UIKit/UITextFieldDelegate-Protocol.h>

@class NSString, UIPrintPanelViewController, UIPrintPreviewViewController, UIPrinterBrowserViewController;

__attribute__((visibility("hidden")))
@interface UIPrintPanelTableViewController : UITableViewController <UITextFieldDelegate>
{
    UIPrintPanelViewController *_printPanelViewController;
    long long _settingsRow;
    long long _rangeRow;
    long long _copiesRow;
    long long _duplexRow;
    long long _grayscaleRow;
    long long _stapleRow;
    long long _punchRow;
    long long _paperRow;
    long long _jobAccountIDRow;
    long long _settingsSection;
    BOOL _contactingPrinter;
    BOOL _printerWarningWasShown;
    BOOL _settingsExpanded;
    UIPrintPreviewViewController *_printPreviewViewController;
    long long _previousPageIndexInCenterOfPreview;
    UIPrinterBrowserViewController *_browserController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_update:(BOOL)arg1;
- (void)_updateSize;
- (BOOL)accessibilityPerformMagicTap;
- (void)cancelButtonPressed:(id)arg1;
- (void)clearPrintPanelViewController;
- (void)dismissKeyboardIfNeccessary;
- (double)heightOfPreviewView;
- (id)initWithPrintPanelViewController:(id)arg1;
- (id)jobAccountTextField;
- (id)keyCommands;
- (void)moreButtonPushed:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)pdfFileURL;
- (void)printButtonPressed:(id)arg1;
- (void)promptForJobAccountID;
- (void)selectJobAccountID;
- (void)setPdfFileURL:(id)arg1 destinationPaper:(id)arg2 pdfPassword:(id)arg3;
- (void)setShowContactingPrinter:(BOOL)arg1;
- (void)setShowPreviewGenerating:(BOOL)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (BOOL)shouldEnablePrintButton;
- (void)showCancelButton;
- (void)showContacting;
- (void)showPreviewGenerating;
- (unsigned long long)supportedInterfaceOrientations;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (id)textForSettings;
- (void)updateCopies:(id)arg1;
- (void)updateDuplex:(id)arg1;
- (void)updateGrayscale:(id)arg1;
- (void)updateJobAccountID:(id)arg1;
- (void)updatePageRange:(struct _NSRange)arg1;
- (void)updatePageRangeText;
- (void)updatePunch:(id)arg1;
- (void)updateSettingsSummaryText;
- (void)updateStaple:(id)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;

@end
