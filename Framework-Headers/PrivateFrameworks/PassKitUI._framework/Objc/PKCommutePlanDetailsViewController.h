//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitUI/PKSectionTableViewController.h>

#import <PassKitUI/PKPerformActionViewControllerDelegate-Protocol.h>

@class NSArray, NSDateComponentsFormatter, NSString, PKPaymentPass, PKPaymentPassAction, PKPaymentWebService;
@protocol PKPaymentDataProvider;

@interface PKCommutePlanDetailsViewController : PKSectionTableViewController <PKPerformActionViewControllerDelegate>
{
    long long _style;
    NSArray *_fields;
    PKPaymentPass *_pass;
    id<PKPaymentDataProvider> _paymentDataProvider;
    PKPaymentWebService *_webService;
    NSArray *_reminderIntervals;
    unsigned long long _selectedReminderIntervalsIndex;
    BOOL _shouldLoadReminderInterval;
    PKPaymentPassAction *_action;
    NSDateComponentsFormatter *_timeIntervalFormatter;
    BOOL _canShowReminders;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_handleActionSelected;
- (void)_handleReminderIntervalChanged:(long long)arg1;
- (void)_updateSelectedReminderIntervalsIndexWithInterval:(double)arg1;
- (id)initWithSuicaFields:(id)arg1 forPass:(id)arg2 associatedAction:(id)arg3 paymentDataProvider:(id)arg4 webService:(id)arg5 style:(long long)arg6;
- (void)performActionViewControllerDidCancel:(id)arg1;
- (void)performActionViewControllerDidPerformAction:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (BOOL)shouldMapSection:(unsigned long long)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillLayoutSubviews;

@end
