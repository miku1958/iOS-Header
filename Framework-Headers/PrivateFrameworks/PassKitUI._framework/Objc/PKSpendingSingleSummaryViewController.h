//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewController.h>

#import <PassKitUI/PKAccountServiceAccountResolutionControllerDelegate-Protocol.h>
#import <PassKitUI/PKPaymentDataProviderDelegate-Protocol.h>
#import <PassKitUI/PKSpendingSummaryFooterViewDelegate-Protocol.h>
#import <PassKitUI/PKSpendingSummaryResponder-Protocol.h>
#import <PassKitUI/UICollectionViewDelegateFlowLayout-Protocol.h>
#import <PassKitUI/UIGestureRecognizerDelegate-Protocol.h>

@class NSArray, NSCalendar, NSDate, NSDateFormatter, NSString, PKAccount, PKAccountService, PKAccountServiceAccountResolutionController, PKDashboardTitleHeaderView, PKPaymentPass, PKSpendingSummary, PKSpendingSummaryFooterView, PKSpendingSummaryLayout, PKSpendingSummaryPresenter, PKTransactionGroupItemPresenter, UIGestureRecognizer;
@protocol PKSpendingSingleSummaryViewControllerDelegate;

@interface PKSpendingSingleSummaryViewController : UICollectionViewController <PKPaymentDataProviderDelegate, UICollectionViewDelegateFlowLayout, UIGestureRecognizerDelegate, PKSpendingSummaryFooterViewDelegate, PKAccountServiceAccountResolutionControllerDelegate, PKSpendingSummaryResponder>
{
    PKPaymentPass *_paymentPass;
    PKAccount *_account;
    PKAccountService *_accountService;
    unsigned long long _feature;
    PKSpendingSummaryFooterView *_currentFooter;
    BOOL _footerNeedsConfiguration;
    PKSpendingSummary *_summary;
    unsigned long long _summaryType;
    NSDate *_startDate;
    NSDate *_endDate;
    BOOL _hasTransactions;
    NSCalendar *_currentCalendar;
    NSString *_navTitle;
    double _transitionAlpha;
    NSArray *_currentMonthTransactions;
    NSArray *_upcomingScheduledPayments;
    NSDateFormatter *_formatterMonth;
    NSDateFormatter *_formatterFullMonth;
    NSDateFormatter *_formatterMonthNoYear;
    NSDateFormatter *_formatterDay;
    NSDateFormatter *_formatterShortMonthNoYear;
    PKTransactionGroupItemPresenter *_transactionGroupPresenter;
    PKSpendingSummaryPresenter *_summaryPresenter;
    PKDashboardTitleHeaderView *_sampleView;
    PKAccountServiceAccountResolutionController *_resolutionController;
    PKSpendingSummaryLayout *_layout;
    BOOL _isLowEndDevice;
    BOOL _visible;
    id<PKSpendingSingleSummaryViewControllerDelegate> _scrollingDelegate;
    UIGestureRecognizer *_gestureRecognizerRequiredToFail;
    long long _contentInsetAdjustmentBehavior;
    unsigned long long _selectionType;
    struct UIEdgeInsets _contentInset;
}

@property (nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
@property (nonatomic) long long contentInsetAdjustmentBehavior; // @synthesize contentInsetAdjustmentBehavior=_contentInsetAdjustmentBehavior;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) UIGestureRecognizer *gestureRecognizerRequiredToFail; // @synthesize gestureRecognizerRequiredToFail=_gestureRecognizerRequiredToFail;
@property (readonly) unsigned long long hash;
@property (weak, nonatomic) id<PKSpendingSingleSummaryViewControllerDelegate> scrollingDelegate; // @synthesize scrollingDelegate=_scrollingDelegate;
@property (nonatomic) unsigned long long selectionType; // @synthesize selectionType=_selectionType;
@property (readonly, nonatomic) PKSpendingSummary *summary; // @synthesize summary=_summary;
@property (readonly) Class superclass;
@property (nonatomic, getter=isVisible) BOOL visible; // @synthesize visible=_visible;

- (void).cxx_destruct;
- (void)_accountsChanged:(id)arg1;
- (unsigned long long)_aggregateCellAtIndex:(unsigned long long)arg1;
- (void)_applyMaskToCell:(id)arg1 firstInSection:(BOOL)arg2 lastInSection:(BOOL)arg3;
- (void)_configureFooter;
- (void)_configureHeaderView:(id)arg1 inSection:(unsigned long long)arg2;
- (BOOL)_hasHeaderForSection:(unsigned long long)arg1;
- (void)accountServiceAccountResolutionController:(id)arg1 requestsDismissCurrentViewControllerAnimated:(BOOL)arg2;
- (void)accountServiceAccountResolutionController:(id)arg1 requestsPresentViewController:(id)arg2 animated:(BOOL)arg3;
- (void)buttonTappedInFooterView:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (BOOL)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)dealloc;
- (id)footer;
- (BOOL)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (id)indexPathForSummary;
- (id)initWithPaymentPass:(id)arg1 account:(id)arg2 transactionGroupPresenter:(id)arg3 summaryPresenter:(id)arg4 currentMonthTransactions:(id)arg5 upcomingScheduledPayments:(id)arg6;
- (id)navigationTitle;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setAlphaForTransition:(double)arg1;
- (void)setSummary:(id)arg1 swap:(BOOL)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLoad;

@end

