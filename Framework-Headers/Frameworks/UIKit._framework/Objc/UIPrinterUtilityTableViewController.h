//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewController.h>

@class NSArray, PKPrinter;

__attribute__((visibility("hidden")))
@interface UIPrinterUtilityTableViewController : UITableViewController
{
    PKPrinter *_printer;
    BOOL _showSupplyDataUnderPrinterName;
    NSArray *_supplyData;
}

@property (strong, nonatomic) NSArray *supplyData; // @synthesize supplyData=_supplyData;

- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (id)initWithPrinter:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)setShowContactingPrinter:(BOOL)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (void)viewWillAppear:(BOOL)arg1;

@end

