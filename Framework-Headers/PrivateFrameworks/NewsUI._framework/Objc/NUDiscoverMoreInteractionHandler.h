//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsUI/SVDiscoverMoreInteractionHandling-Protocol.h>

@class NSString, NUDiscoverMoreVideosInfo;
@protocol NUURLHandling, SVVideoPlaybackController, SVVideoViewControllerProviding;

@interface NUDiscoverMoreInteractionHandler : NSObject <SVDiscoverMoreInteractionHandling>
{
    id<NUURLHandling> _URLHandler;
    NUDiscoverMoreVideosInfo *_discoverMoreVideosInfo;
    id<SVVideoViewControllerProviding> _videoViewControllerProvider;
    id<SVVideoPlaybackController> _playbackController;
}

@property (readonly, nonatomic) id<NUURLHandling> URLHandler; // @synthesize URLHandler=_URLHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NUDiscoverMoreVideosInfo *discoverMoreVideosInfo; // @synthesize discoverMoreVideosInfo=_discoverMoreVideosInfo;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) id<SVVideoPlaybackController> playbackController; // @synthesize playbackController=_playbackController;
@property (readonly) Class superclass;
@property (readonly, nonatomic) id<SVVideoViewControllerProviding> videoViewControllerProvider; // @synthesize videoViewControllerProvider=_videoViewControllerProvider;

- (void).cxx_destruct;
- (void)handleInteraction;
- (id)init;
- (id)initWithURLHandler:(id)arg1 discoverMoreVideosInfo:(id)arg2 videoViewControllerProvider:(id)arg3 playbackController:(id)arg4;

@end

