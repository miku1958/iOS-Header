//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class MCDPlayModeButton, MCDRepeatButton, NSArray, UIStackView;

@interface MCDPlayModeControlView : UIView
{
    BOOL _fuseSubscriberLayout;
    BOOL _showsArtwork;
    MCDRepeatButton *_repeatButton;
    MCDPlayModeButton *_moreButton;
    MCDPlayModeButton *_shuffleButton;
    MCDPlayModeButton *_addToLibraryButton;
    MCDPlayModeButton *_playbackRateButton;
    UIStackView *_stackView;
    NSArray *_activeButtonLayoutConstraints;
}

@property (strong, nonatomic) NSArray *activeButtonLayoutConstraints; // @synthesize activeButtonLayoutConstraints=_activeButtonLayoutConstraints;
@property (readonly, nonatomic) MCDPlayModeButton *addToLibraryButton; // @synthesize addToLibraryButton=_addToLibraryButton;
@property (nonatomic) BOOL fuseSubscriberLayout; // @synthesize fuseSubscriberLayout=_fuseSubscriberLayout;
@property (readonly, nonatomic) double maximumButtonWidth;
@property (readonly, nonatomic) MCDPlayModeButton *moreButton; // @synthesize moreButton=_moreButton;
@property (readonly, nonatomic) MCDPlayModeButton *playbackRateButton; // @synthesize playbackRateButton=_playbackRateButton;
@property (readonly, nonatomic) MCDRepeatButton *repeatButton; // @synthesize repeatButton=_repeatButton;
@property (nonatomic) BOOL showsArtwork; // @synthesize showsArtwork=_showsArtwork;
@property (readonly, nonatomic) MCDPlayModeButton *shuffleButton; // @synthesize shuffleButton=_shuffleButton;
@property (readonly, nonatomic) UIStackView *stackView; // @synthesize stackView=_stackView;

- (void).cxx_destruct;
- (void)_updateButtonLayouts;
- (id)_visibleControlButtons;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;

@end
