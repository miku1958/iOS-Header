//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSMutableArray, NSString, SKUIClientContext, SKUIItemState, SSLookupItemOffer, UIButton, UIControl, UIImage, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface SKUIBannerView : UIView
{
    UILabel *_artistNameLabel;
    UIView *_bottomBorderView;
    SKUIClientContext *_clientContext;
    UIButton *_closeButton;
    UIImageView *_iconImageView;
    SSLookupItemOffer *_itemOffer;
    UIButton *_itemOfferButton;
    SKUIItemState *_itemState;
    UILabel *_itemStateLabel;
    NSMutableArray *_screenshotImageViews;
    UIView *_separatorView;
    UILabel *_titleLabel;
    float _userRating;
    UIImageView *_userRatingStarImageView;
}

@property (copy, nonatomic) NSString *artistName;
@property (strong, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
@property (readonly, nonatomic) UIControl *closeButton; // @synthesize closeButton=_closeButton;
@property (strong, nonatomic) UIImage *iconImage;
@property (strong, nonatomic) SSLookupItemOffer *itemOffer; // @synthesize itemOffer=_itemOffer;
@property (readonly, nonatomic) UIControl *itemOfferButton;
@property (strong, nonatomic) SKUIItemState *itemState; // @synthesize itemState=_itemState;
@property (copy, nonatomic) NSArray *screenshotImages;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) float userRating; // @synthesize userRating=_userRating;

- (void).cxx_destruct;
- (id)_newDefaultLabel;
- (void)_reloadItemState;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end

