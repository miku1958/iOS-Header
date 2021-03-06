//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/MPVolumeSlider.h>

#import <MediaControls/MTVisualStylingProviderObservingPrivate-Protocol.h>

@class MTVisualStylingProvider, NSString;

__attribute__((visibility("hidden")))
@interface MediaControlsVolumeSlider : MPVolumeSlider <MTVisualStylingProviderObservingPrivate>
{
    MTVisualStylingProvider *_visualStylingProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (strong, nonatomic) MTVisualStylingProvider *visualStylingProvider; // @synthesize visualStylingProvider=_visualStylingProvider;

- (void).cxx_destruct;
- (id)_thumbImageForStyle:(long long)arg1;
- (id)createThumbView;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;
- (struct CGRect)maximumValueImageRectForBounds:(struct CGRect)arg1;
- (struct CGRect)minimumValueImageRectForBounds:(struct CGRect)arg1;
- (BOOL)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)providedStylesDidChangeForProvider:(id)arg1;
- (void)setMaximumTrackVisualProvider:(id)arg1;
- (void)setMinimumTrackVisualProvider:(id)arg1;
- (struct CGRect)thumbRectForBounds:(struct CGRect)arg1 trackRect:(struct CGRect)arg2 value:(float)arg3;
- (void)tintColorDidChange;
- (struct CGRect)trackRectForBounds:(struct CGRect)arg1;

@end

