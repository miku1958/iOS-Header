//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class MPButton, MPCPlayerPath, MPRouteLabel, MPUMarqueeView, MTMaterialView, MTVisualStylingProvider, MediaControlsRoutingButtonView, NSString, UIButton, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface MediaControlsHeaderView : UIView
{
    BOOL _transitioning;
    BOOL _showPlaceholderString;
    BOOL _marqueeEnabled;
    BOOL _routing;
    BOOL _shouldUseOverrideSize;
    MPCPlayerPath *_playerPath;
    UIImageView *_artworkView;
    UIImageView *_placeholderArtworkView;
    long long _style;
    MPRouteLabel *_routeLabel;
    NSString *_primaryString;
    NSString *_secondaryString;
    NSString *_placeholderString;
    MediaControlsRoutingButtonView *_routingButton;
    MPButton *_doneButton;
    UIButton *_launchNowPlayingAppButton;
    long long _buttonType;
    MTVisualStylingProvider *_visualStylingProvider;
    MTMaterialView *_artworkBackground;
    UIView *_shadow;
    MPUMarqueeView *_primaryMarqueeView;
    UILabel *_primaryLabel;
    MPUMarqueeView *_secondaryMarqueeView;
    UILabel *_secondaryLabel;
    UILabel *_placeholderLabel;
    struct CGSize _overrideSize;
}

@property (strong, nonatomic) MTMaterialView *artworkBackground; // @synthesize artworkBackground=_artworkBackground;
@property (strong, nonatomic) UIImageView *artworkView; // @synthesize artworkView=_artworkView;
@property (nonatomic) long long buttonType; // @synthesize buttonType=_buttonType;
@property (strong, nonatomic) MPButton *doneButton; // @synthesize doneButton=_doneButton;
@property (strong, nonatomic) UIButton *launchNowPlayingAppButton; // @synthesize launchNowPlayingAppButton=_launchNowPlayingAppButton;
@property (nonatomic) BOOL marqueeEnabled; // @synthesize marqueeEnabled=_marqueeEnabled;
@property (nonatomic) struct CGSize overrideSize; // @synthesize overrideSize=_overrideSize;
@property (strong, nonatomic) UIImageView *placeholderArtworkView; // @synthesize placeholderArtworkView=_placeholderArtworkView;
@property (strong, nonatomic) UILabel *placeholderLabel; // @synthesize placeholderLabel=_placeholderLabel;
@property (copy, nonatomic) NSString *placeholderString; // @synthesize placeholderString=_placeholderString;
@property (copy, nonatomic) MPCPlayerPath *playerPath; // @synthesize playerPath=_playerPath;
@property (strong, nonatomic) UILabel *primaryLabel; // @synthesize primaryLabel=_primaryLabel;
@property (strong, nonatomic) MPUMarqueeView *primaryMarqueeView; // @synthesize primaryMarqueeView=_primaryMarqueeView;
@property (copy, nonatomic) NSString *primaryString; // @synthesize primaryString=_primaryString;
@property (strong, nonatomic) MPRouteLabel *routeLabel; // @synthesize routeLabel=_routeLabel;
@property (nonatomic, getter=isRouting) BOOL routing; // @synthesize routing=_routing;
@property (strong, nonatomic) MediaControlsRoutingButtonView *routingButton; // @synthesize routingButton=_routingButton;
@property (strong, nonatomic) UILabel *secondaryLabel; // @synthesize secondaryLabel=_secondaryLabel;
@property (strong, nonatomic) MPUMarqueeView *secondaryMarqueeView; // @synthesize secondaryMarqueeView=_secondaryMarqueeView;
@property (copy, nonatomic) NSString *secondaryString; // @synthesize secondaryString=_secondaryString;
@property (strong, nonatomic) UIView *shadow; // @synthesize shadow=_shadow;
@property (nonatomic) BOOL shouldUseOverrideSize; // @synthesize shouldUseOverrideSize=_shouldUseOverrideSize;
@property (nonatomic) BOOL showPlaceholderString; // @synthesize showPlaceholderString=_showPlaceholderString;
@property (nonatomic) long long style; // @synthesize style=_style;
@property (nonatomic, getter=isTransitioning) BOOL transitioning; // @synthesize transitioning=_transitioning;
@property (strong, nonatomic) MTVisualStylingProvider *visualStylingProvider; // @synthesize visualStylingProvider=_visualStylingProvider;

- (void).cxx_destruct;
- (void)_handleContentSizeCategoryDidChangeNotification:(id)arg1;
- (void)_updateRTL;
- (void)_updateStyle;
- (void)clearOverrideSize;
- (void)dealloc;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (struct CGSize)layoutTextInAvailableBounds:(struct CGRect)arg1 setFrames:(BOOL)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)tintColorDidChange;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateArtworkStyle;

@end
