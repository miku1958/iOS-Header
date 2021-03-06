//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSLayoutConstraint, UITableView;

@interface HKStickyHeaderFooterTableWrapperView : UIView
{
    UIView *_headerView;
    long long _headerBehavior;
    UIView *_footerView;
    long long _footerBehavior;
    UITableView *_tableView;
    NSArray *_headerConstraints;
    NSArray *_footerConstraints;
    NSLayoutConstraint *_headerPinningConstraint;
    NSLayoutConstraint *_footerPinningConstraint;
    struct CGSize _previousHeaderSize;
    struct CGSize _previousFooterSize;
}

@property (nonatomic) long long footerBehavior; // @synthesize footerBehavior=_footerBehavior;
@property (strong, nonatomic) NSArray *footerConstraints; // @synthesize footerConstraints=_footerConstraints;
@property (strong, nonatomic) NSLayoutConstraint *footerPinningConstraint; // @synthesize footerPinningConstraint=_footerPinningConstraint;
@property (strong, nonatomic) UIView *footerView; // @synthesize footerView=_footerView;
@property (nonatomic) long long headerBehavior; // @synthesize headerBehavior=_headerBehavior;
@property (strong, nonatomic) NSArray *headerConstraints; // @synthesize headerConstraints=_headerConstraints;
@property (strong, nonatomic) NSLayoutConstraint *headerPinningConstraint; // @synthesize headerPinningConstraint=_headerPinningConstraint;
@property (strong, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property (nonatomic) struct CGSize previousFooterSize; // @synthesize previousFooterSize=_previousFooterSize;
@property (nonatomic) struct CGSize previousHeaderSize; // @synthesize previousHeaderSize=_previousHeaderSize;
@property (readonly, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;

- (void).cxx_destruct;
- (void)_addFooterConstraintsForBehavior:(long long)arg1;
- (void)_addHeaderConstraintsForBehavior:(long long)arg1;
- (id)_createFooterConstraintsForBehavior:(long long)arg1;
- (id)_createHeaderConstraintsForBehavior:(long long)arg1;
- (void)_setUpConstraints;
- (void)_setUpSubviews;
- (void)_updateFooterConstraintsWithPreviousBehavior:(long long)arg1;
- (void)_updateHeaderConstraintsWithPreviousBehavior:(long long)arg1;
- (void)_updatePinningConstraintConstantsForCurrentSafeArea;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)safeAreaInsetsDidChange;

@end

