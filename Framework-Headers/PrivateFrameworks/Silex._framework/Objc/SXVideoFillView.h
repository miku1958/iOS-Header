//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Silex/SXFillView.h>

#import <Silex/SXViewportChangeListener-Protocol.h>

@class NSString, SXClippingView, SXImageResource, SXVideoFill, SXVideoFillPlayerView;

@interface SXVideoFillView : SXFillView <SXViewportChangeListener>
{
    SXVideoFill *_videoFill;
    SXClippingView *_clippingView;
    SXVideoFillPlayerView *_playerView;
    SXImageResource *_imageResource;
}

@property (strong, nonatomic) SXClippingView *clippingView; // @synthesize clippingView=_clippingView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) SXImageResource *imageResource; // @synthesize imageResource=_imageResource;
@property (strong, nonatomic) SXVideoFillPlayerView *playerView; // @synthesize playerView=_playerView;
@property (readonly) Class superclass;
@property (readonly, nonatomic) SXVideoFill *videoFill; // @synthesize videoFill=_videoFill;

- (void).cxx_destruct;
- (struct CGRect)contentFrame;
- (struct CGRect)fillFrameWithBoundingSize:(struct CGSize)arg1;
- (id)initWithVideoFill:(id)arg1 DOMObjectProvider:(id)arg2 imageViewFactory:(id)arg3;
- (void)layoutSubviews;
- (void)pause;
- (void)play;
- (void)reset;
- (void)setContentFrame:(struct CGRect)arg1;

@end

