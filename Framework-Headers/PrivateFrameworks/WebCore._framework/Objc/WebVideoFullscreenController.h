//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface WebVideoFullscreenController : NSObject
{
    struct RefPtr<WebVideoFullscreenControllerContext> _context;
    struct RefPtr<WebCore::HTMLVideoElement> _videoElement;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)didFinishFullscreen:(struct WebVideoFullscreenControllerContext *)arg1;
- (void)enterFullscreen:(id)arg1 mode:(unsigned int)arg2;
- (void)exitFullscreen;
- (id)init;
- (void)requestHideAndExitFullscreen;
- (void)setVideoElement:(struct HTMLVideoElement *)arg1;
- (struct HTMLVideoElement *)videoElement;

@end

