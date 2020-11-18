//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <PassKitUI/PKPassPaymentSummaryCellDelegate-Protocol.h>
#import <PassKitUI/UITableViewDataSource-Protocol.h>
#import <PassKitUI/UITableViewDelegate-Protocol.h>

@class NSNumberFormatter, NSString, PKPaymentMessage, PKPaymentPass, UITableView;
@protocol PKPassPaymentSummaryViewDelegate;

@interface PKPassPaymentSummaryView : UIView <UITableViewDataSource, UITableViewDelegate, PKPassPaymentSummaryCellDelegate>
{
    NSNumberFormatter *_numberFormatter;
    UITableView *_tableView;
    BOOL _deepLinkingEnabled;
    PKPaymentPass *_pass;
    PKPaymentMessage *_message;
    NSString *_messageAppLaunchToken;
    id<PKPassPaymentSummaryViewDelegate> _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) id<PKPassPaymentSummaryViewDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasContent;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) PKPaymentMessage *message; // @synthesize message=_message;
@property (readonly, nonatomic) NSString *messageAppLaunchToken; // @synthesize messageAppLaunchToken=_messageAppLaunchToken;
@property (readonly, nonatomic) PKPaymentPass *pass; // @synthesize pass=_pass;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_configureCell:(id)arg1 forMessage:(id)arg2;
- (BOOL)_isSectionIndexOfMessage:(long long)arg1;
- (void)_performAction:(long long)arg1 forSection:(long long)arg2 animated:(BOOL)arg3;
- (long long)_sectionIndexOfMessage;
- (void)dealloc;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithPaymentPass:(id)arg1;
- (void)layoutSubviews;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)paymentSummaryCellDetailsButtonPressed:(id)arg1;
- (void)setMessage:(id)arg1 appLaunchToken:(id)arg2 animated:(BOOL)arg3;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;

@end
