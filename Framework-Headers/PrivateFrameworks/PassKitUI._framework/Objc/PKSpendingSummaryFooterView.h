//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <PassKitUI/PKSpendingSummaryFooter-Protocol.h>

@class NSString, PKContinuousButton, UIColor, UIImage, UILabel;
@protocol PKSpendingSummaryFooterViewDelegate;

@interface PKSpendingSummaryFooterView : UIView <PKSpendingSummaryFooter>
{
    UIView *_separatorView;
    UIView *_topSeparatorView;
    PKContinuousButton *_payButton;
    BOOL _usingCircleButton;
    UIColor *_buttonTitleColor;
    UIColor *_buttonTintColor;
    UIImage *_payButtonImage;
    id<PKSpendingSummaryFooterViewDelegate> _delegate;
    UILabel *_leadingTitle;
    UILabel *_leadingDetail;
    UILabel *_trailingTitle;
    UILabel *_trailingDetail;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<PKSpendingSummaryFooterViewDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) UILabel *leadingDetail; // @synthesize leadingDetail=_leadingDetail;
@property (readonly, nonatomic) UILabel *leadingTitle; // @synthesize leadingTitle=_leadingTitle;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UILabel *trailingDetail; // @synthesize trailingDetail=_trailingDetail;
@property (readonly, nonatomic) UILabel *trailingTitle; // @synthesize trailingTitle=_trailingTitle;

- (void).cxx_destruct;
- (void)_buttonTapped:(id)arg1;
- (void)_createSubviews;
- (id)_payButtonWithCircleLayout:(BOOL)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (BOOL)isEqualToFooter:(id)arg1;
- (void)layoutSubviews;
- (void)setButtonTintColor:(id)arg1;
- (void)setButtonTitle:(id)arg1;
- (void)setButtonTitleColor:(id)arg1;
- (void)setPayButtonImage:(id)arg1;

@end

