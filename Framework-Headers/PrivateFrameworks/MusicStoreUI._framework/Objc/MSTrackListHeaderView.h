//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class SUItem, SUItemOfferButton, SUReflectionImageView, SUTouchCaptureView, UIImage, UILabel;
@protocol MSTrackListHeaderDelegate;

@interface MSTrackListHeaderView : UIView
{
    id<MSTrackListHeaderDelegate> _delegate;
    UIImage *_artworkImage;
    SUItem *_item;
    UILabel *_albumLabel;
    UILabel *_artistLabel;
    UILabel *_disclaimerLabel;
    UILabel *_itemCountLabel;
    UILabel *_releaseDateLabel;
    SUReflectionImageView *_artworkView;
    SUItemOfferButton *_offerButton;
    SUTouchCaptureView *_touchCaptureView;
}

@property (strong, nonatomic) UIImage *artworkImage; // @synthesize artworkImage=_artworkImage;
@property (nonatomic) id<MSTrackListHeaderDelegate> delegate; // @synthesize delegate=_delegate;
@property (strong, nonatomic) SUItem *item; // @synthesize item=_item;

- (void)_hidePurchaseConfirmation;
- (id)_newGenericSmallFontLabel;
- (void)_offerButtonAction:(id)arg1;
- (void)_performPurchaseAnimation;
- (void)_purchasesChangedNotification:(id)arg1;
- (void)_reloadAlbumLabel;
- (void)_reloadArtistLabel;
- (void)_reloadArtworkView;
- (void)_reloadDisclaimerLabel;
- (void)_reloadItemCountLabel;
- (void)_reloadOfferButton;
- (void)_reloadReleaseDateLabel;
- (void)_setShowingPurchaseConfirmation:(BOOL)arg1;
- (void)_showPurchaseConfirmation;
- (struct CGSize)_sizeThatFitsLabel:(id)arg1 size:(struct CGSize)arg2 numberOfLines:(long long)arg3;
- (void)_touchCaptureAction:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)reloadView;
- (void)setBackgroundColor:(id)arg1;
- (void)sizeToFit;

@end

