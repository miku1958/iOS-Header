//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIKBTutorialModalDisplay.h>

@class AVPlayerLayer, AVPlayerLooper, AVQueuePlayer, NSArray, NSLayoutConstraint, UIButton, UILabel, UIView;

__attribute__((visibility("hidden")))
@interface UIContinuousPathIntroductionView : UIKBTutorialModalDisplay
{
    struct CGSize _videoSize;
    double _textMargin;
    double _paddingAdjust;
    AVPlayerLooper *_playerLooper;
    AVQueuePlayer *_player;
    UIView *_textVideoContainer;
    UILabel *_landscapeTextBody;
    UIView *_keyboardView;
    UIButton *_landscapeButton;
    NSArray *_portraitConstraints;
    NSArray *_landscapeConstraints;
    AVPlayerLayer *_videoLayer;
    NSLayoutConstraint *_videoWidth;
    NSLayoutConstraint *_videoHeight;
}

@property (strong, nonatomic) UIView *keyboardView; // @synthesize keyboardView=_keyboardView;
@property (strong, nonatomic) UIButton *landscapeButton; // @synthesize landscapeButton=_landscapeButton;
@property (strong, nonatomic) NSArray *landscapeConstraints; // @synthesize landscapeConstraints=_landscapeConstraints;
@property (strong, nonatomic) UILabel *landscapeTextBody; // @synthesize landscapeTextBody=_landscapeTextBody;
@property (strong, nonatomic) NSArray *portraitConstraints; // @synthesize portraitConstraints=_portraitConstraints;
@property (strong, nonatomic) UIView *textVideoContainer; // @synthesize textVideoContainer=_textVideoContainer;
@property (strong, nonatomic) NSLayoutConstraint *videoHeight; // @synthesize videoHeight=_videoHeight;
@property (strong, nonatomic) AVPlayerLayer *videoLayer; // @synthesize videoLayer=_videoLayer;
@property (strong, nonatomic) NSLayoutConstraint *videoWidth; // @synthesize videoWidth=_videoWidth;

- (void).cxx_destruct;
- (id)_introductionMovieAssetURL;
- (void)extraButtonTapAction;
- (id)initWithKeyboardAppearance:(long long)arg1;
- (id)mediaContents;
- (double)mediaLayoutWidthAdjustment;
- (void)setupConstraintData;
- (id)textBodyDescriptions;
- (long long)textBodyMaxLines;
- (id)textTitleDescriptions;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateVideoLayerWithNewVideo:(BOOL)arg1;

@end

