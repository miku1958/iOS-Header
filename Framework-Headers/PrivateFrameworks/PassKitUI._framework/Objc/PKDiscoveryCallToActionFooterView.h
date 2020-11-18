//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class PKContinuousButton, PKDiscoveryCallToAction, PKDiscoveryMedia, UIImageView, UILabel;
@protocol PKDiscoveryCardViewDelegate;

@interface PKDiscoveryCallToActionFooterView : UIView
{
    PKDiscoveryCallToAction *_callToAction;
    PKDiscoveryMedia *_media;
    UILabel *_titleLabel;
    UILabel *_editorialDescriptionLabel;
    UIImageView *_iconImageView;
    PKContinuousButton *_button;
    long long _displayType;
    BOOL _hasIcon;
    BOOL _hasButton;
    CDUnknownBlockType _callToActionTappedOverride;
    BOOL _showActivityIndicator;
    id<PKDiscoveryCardViewDelegate> _delegate;
}

@property (weak, nonatomic) id<PKDiscoveryCardViewDelegate> delegate; // @synthesize delegate=_delegate;
@property (nonatomic) long long displayType; // @synthesize displayType=_displayType;
@property (nonatomic) BOOL showActivityIndicator; // @synthesize showActivityIndicator=_showActivityIndicator;

- (void).cxx_destruct;
- (void)_buttonPressed:(id)arg1;
- (id)_descriptionLabelColor;
- (id)_editorialDescriptionLabelFont;
- (struct CGSize)_iconSize;
- (void)_loadImageData;
- (double)_maxButtonWidth;
- (id)_titleLabelColor;
- (id)_titleLabelFont;
- (id)initWithCallToAction:(id)arg1 displayType:(long long)arg2;
- (void)layoutSubviews;
- (void)setCallToActionTappedOverride:(CDUnknownBlockType)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end

