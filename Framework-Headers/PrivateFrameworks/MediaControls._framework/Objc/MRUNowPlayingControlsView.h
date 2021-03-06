//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class MRUNowPlayingHeaderView, MRUNowPlayingTimeControlsView, MRUNowPlayingTransportControlsView, MRUNowPlayingVolumeControlsView, MRUVisualStylingProvider;

__attribute__((visibility("hidden")))
@interface MRUNowPlayingControlsView : UIView
{
    BOOL _showTimeControlsView;
    BOOL _showTransportControlsView;
    BOOL _supportsHorizontalLayout;
    MRUNowPlayingHeaderView *_headerView;
    MRUNowPlayingTimeControlsView *_timeControlsView;
    MRUNowPlayingTransportControlsView *_transportControlsView;
    MRUNowPlayingVolumeControlsView *_volumeControlsView;
    MRUVisualStylingProvider *_stylingProvider;
    long long _layout;
    long long _context;
}

@property (nonatomic) long long context; // @synthesize context=_context;
@property (readonly, nonatomic) MRUNowPlayingHeaderView *headerView; // @synthesize headerView=_headerView;
@property (nonatomic) long long layout; // @synthesize layout=_layout;
@property (nonatomic) BOOL showTimeControlsView; // @synthesize showTimeControlsView=_showTimeControlsView;
@property (nonatomic) BOOL showTransportControlsView; // @synthesize showTransportControlsView=_showTransportControlsView;
@property (strong, nonatomic) MRUVisualStylingProvider *stylingProvider; // @synthesize stylingProvider=_stylingProvider;
@property (nonatomic) BOOL supportsHorizontalLayout; // @synthesize supportsHorizontalLayout=_supportsHorizontalLayout;
@property (readonly, nonatomic) MRUNowPlayingTimeControlsView *timeControlsView; // @synthesize timeControlsView=_timeControlsView;
@property (readonly, nonatomic) MRUNowPlayingTransportControlsView *transportControlsView; // @synthesize transportControlsView=_transportControlsView;
@property (readonly, nonatomic) MRUNowPlayingVolumeControlsView *volumeControlsView; // @synthesize volumeControlsView=_volumeControlsView;

- (void).cxx_destruct;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)updateTimeControlVisibility:(id)arg1;
- (void)updateVisibility;

@end

