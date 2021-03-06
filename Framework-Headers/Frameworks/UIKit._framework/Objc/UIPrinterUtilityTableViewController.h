//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UITableViewController.h>

@class NSArray, NSString, PKPrinter, UIPrinterAttributesService;

__attribute__((visibility("hidden")))
@interface UIPrinterUtilityTableViewController : UITableViewController
{
    PKPrinter *_printer;
    NSString *_printerWarning;
    UIPrinterAttributesService *_printerAttributesService;
    BOOL _showSupplyDataUnderPrinterName;
    long long _mainPrinterCellSection;
    long long _printerNameAndLocationSection;
    long long _identifyPrinterSection;
    long long _removeKeychainItemSection;
    NSArray *_supplyData;
}

@property (strong, nonatomic) NSArray *supplyData; // @synthesize supplyData=_supplyData;

- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (id)initWithPrinter:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)setShowContactingPrinter:(BOOL)arg1;
- (void)startPrinterWarningPoll;
- (void)stopPrinterWarningPolling;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;

@end

