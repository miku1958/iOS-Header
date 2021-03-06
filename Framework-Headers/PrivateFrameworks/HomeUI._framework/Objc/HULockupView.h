//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <HomeUI/HUCellProtocol-Protocol.h>
#import <HomeUI/HUExpandableTextViewDelegate-Protocol.h>

@class HFItem, HUDownloadControl, HUExpandableTextView, NSLayoutConstraint, NSString, UILabel, UIStackView;
@protocol HULockupInternalResizingDelegate, HULockupViewDelegate, HUResizableCellDelegate;

@interface HULockupView : UIView <HUCellProtocol, HUExpandableTextViewDelegate>
{
    HFItem *_item;
    id<HULockupViewDelegate> _delegate;
    HUExpandableTextView *_descriptionExpandableTextView;
    id<HULockupInternalResizingDelegate> _internalViewResizingDelegate;
    UILabel *_titleLabel;
    UILabel *_detailLabel;
    UILabel *_secondaryDetailLabel;
    UIStackView *_labelStackView;
    unsigned long long _iconSize;
    UIView *_iconView;
    HUDownloadControl *_downloadControl;
    UIStackView *_stackView;
    NSLayoutConstraint *_downloadControlTopConstraint;
    NSLayoutConstraint *_downloadControlCenterYConstraint;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<HULockupViewDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) HUExpandableTextView *descriptionExpandableTextView; // @synthesize descriptionExpandableTextView=_descriptionExpandableTextView;
@property (strong, nonatomic) UILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property (strong, nonatomic) HUDownloadControl *downloadControl; // @synthesize downloadControl=_downloadControl;
@property (strong, nonatomic) NSLayoutConstraint *downloadControlCenterYConstraint; // @synthesize downloadControlCenterYConstraint=_downloadControlCenterYConstraint;
@property (strong, nonatomic) NSLayoutConstraint *downloadControlTopConstraint; // @synthesize downloadControlTopConstraint=_downloadControlTopConstraint;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long iconSize; // @synthesize iconSize=_iconSize;
@property (strong, nonatomic) UIView *iconView; // @synthesize iconView=_iconView;
@property (weak, nonatomic) id<HULockupInternalResizingDelegate> internalViewResizingDelegate; // @synthesize internalViewResizingDelegate=_internalViewResizingDelegate;
@property (strong, nonatomic) HFItem *item; // @synthesize item=_item;
@property (strong, nonatomic) UIStackView *labelStackView; // @synthesize labelStackView=_labelStackView;
@property (weak, nonatomic) id<HUResizableCellDelegate> resizingDelegate;
@property (strong, nonatomic) UILabel *secondaryDetailLabel; // @synthesize secondaryDetailLabel=_secondaryDetailLabel;
@property (strong, nonatomic) UIStackView *stackView; // @synthesize stackView=_stackView;
@property (readonly) Class superclass;
@property (strong, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;

- (void).cxx_destruct;
- (void)_buttonTapped:(id)arg1;
- (double)_maxPossibleTextLengthForDownloadControl;
- (void)expandableTextViewDidCollapse:(id)arg1;
- (void)expandableTextViewDidExpand:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initializeIconViewWithSize:(unsigned long long)arg1;
- (void)resetDownloadControlVerticalConstraint;
- (void)updateIconView:(id)arg1 animate:(BOOL)arg2;
- (void)updateUIWithAnimation:(BOOL)arg1;

@end

