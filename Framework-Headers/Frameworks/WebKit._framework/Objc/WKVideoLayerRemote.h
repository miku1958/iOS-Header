//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuartzCore/CALayer.h>

__attribute__((visibility("hidden")))
@interface WKVideoLayerRemote : CALayer
{
    struct WeakPtr<WebKit::MediaPlayerPrivateRemote, WTF::EmptyCounter> _mediaPlayerPrivateRemote;
    struct RetainPtr<CAContext> _context;
    struct unique_ptr<WebCore::Timer, std::__1::default_delete<WebCore::Timer>> _resolveBoundsTimer;
    BOOL _shouldRestartWhenTimerFires;
    struct Seconds _delay;
    struct CGRect _videoLayerFrame;
}

@property (nonatomic) struct MediaPlayerPrivateRemote *mediaPlayerPrivateRemote;
@property (nonatomic) struct CGRect videoLayerFrame; // @synthesize videoLayerFrame=_videoLayerFrame;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)init;
- (void)layoutSublayers;
- (void)resolveBounds;

@end
