//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class MPCPlayerResponse, MediaControlsTransportButton, NSBundle, UIColor;
@protocol MediaControlsRatingActionSheet;

@interface MediaControlsTransportStackView : UIView
{
    BOOL _empty;
    long long _style;
    MPCPlayerResponse *_response;
    MediaControlsTransportButton *_leftButton;
    id<MediaControlsRatingActionSheet> _ratingActionSheetDelegate;
    MediaControlsTransportButton *_middleButton;
    MediaControlsTransportButton *_rightButton;
    NSBundle *_mediaControlsBundle;
    UIColor *_tintColorForCurrentStyle;
}

@property (nonatomic, getter=isEmpty) BOOL empty; // @synthesize empty=_empty;
@property (strong, nonatomic) MediaControlsTransportButton *leftButton; // @synthesize leftButton=_leftButton;
@property (strong, nonatomic) NSBundle *mediaControlsBundle; // @synthesize mediaControlsBundle=_mediaControlsBundle;
@property (strong, nonatomic) MediaControlsTransportButton *middleButton; // @synthesize middleButton=_middleButton;
@property (weak, nonatomic) id<MediaControlsRatingActionSheet> ratingActionSheetDelegate; // @synthesize ratingActionSheetDelegate=_ratingActionSheetDelegate;
@property (strong, nonatomic) MPCPlayerResponse *response; // @synthesize response=_response;
@property (strong, nonatomic) MediaControlsTransportButton *rightButton; // @synthesize rightButton=_rightButton;
@property (nonatomic) long long style; // @synthesize style=_style;
@property (strong, nonatomic) UIColor *tintColorForCurrentStyle; // @synthesize tintColorForCurrentStyle=_tintColorForCurrentStyle;

- (void).cxx_destruct;
- (void)_resetTransportButton:(id)arg1;
- (void)_updateButtonBlendMode:(id)arg1;
- (void)_updateButtonImage:(id)arg1 button:(id)arg2;
- (void)buttonHoldBegan:(id)arg1;
- (void)buttonHoldReleased:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)touchUpInsideLeftButton:(id)arg1;
- (void)touchUpInsideMiddleButton:(id)arg1;
- (void)touchUpInsideRightButton:(id)arg1;

@end

