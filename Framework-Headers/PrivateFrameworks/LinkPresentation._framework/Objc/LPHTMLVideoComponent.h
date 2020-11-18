//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <LinkPresentation/LPHTMLComponent.h>

#import <LinkPresentation/DOMEventListener-Protocol.h>

@class DOMElement, DOMHTMLIFrameElement, DOMHTMLVideoElement, LPVideo, NSString, WebScriptObject;

__attribute__((visibility("hidden")))
@interface LPHTMLVideoComponent : LPHTMLComponent <DOMEventListener>
{
    LPVideo *_video;
    DOMElement *_playButton;
    DOMElement *_muteButton;
    DOMElement *_muteButtonContainer;
    DOMElement *_videoPosterFrame;
    DOMElement *_videoOverlay;
    DOMHTMLVideoElement *_videoElement;
    DOMHTMLIFrameElement *_youTubeContainerElement;
    BOOL _isVisible;
    BOOL _wasPlayingWhenHidden;
    WebScriptObject *_isVisibleFunction;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, getter=isMuted) BOOL muted;
@property (readonly) Class superclass;

+ (id)ruleDictionaryForStyle:(id)arg1;
+ (id)styleSet;
- (void).cxx_destruct;
- (void)buildComponentWithPosterFrame:(id)arg1 posterFrameStyle:(id)arg2;
- (id)createVideoElement;
- (void)handleEvent:(id)arg1;
- (id)initWithVideo:(id)arg1 style:(id)arg2 posterFrame:(id)arg3 posterFrameStyle:(id)arg4 themePath:(id)arg5 generator:(id)arg6;
- (BOOL)isPlaying;
- (BOOL)isVisible;
- (void)pause;
- (void)play;
- (id)resolvedVideoElement;
- (BOOL)shouldAutoPlay;
- (void)togglePlaying;
- (void)updateVisibility;
- (id)youTubeParametersForVideoURL:(id)arg1;

@end

