//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXVideoPrefetcherFactory-Protocol.h>

@class NSString;
@protocol SXPlaybackCoordinatorProviding, SXVideoBufferObserverFactory, SXVideoLoadingProgressObserverFactory, SXVideoLoadingStateObserverFactory, SXVideoPlaybackProgressObserverFactory, SXVideoPrefetchPolicyHandler;

@interface SXVideoPrefetcherFactory : NSObject <SXVideoPrefetcherFactory>
{
    id<SXVideoBufferObserverFactory> _bufferObserverFactory;
    id<SXVideoPrefetchPolicyHandler> _prefetchPolicyHandler;
    id<SXPlaybackCoordinatorProviding> _playbackCoordinatorProvider;
    id<SXVideoLoadingStateObserverFactory> _loadingStateObserverFactory;
    id<SXVideoLoadingProgressObserverFactory> _loadingProgressObserverFactory;
    id<SXVideoPlaybackProgressObserverFactory> _playbackProgressObserverFactory;
}

@property (readonly, nonatomic) id<SXVideoBufferObserverFactory> bufferObserverFactory; // @synthesize bufferObserverFactory=_bufferObserverFactory;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) id<SXVideoLoadingProgressObserverFactory> loadingProgressObserverFactory; // @synthesize loadingProgressObserverFactory=_loadingProgressObserverFactory;
@property (readonly, nonatomic) id<SXVideoLoadingStateObserverFactory> loadingStateObserverFactory; // @synthesize loadingStateObserverFactory=_loadingStateObserverFactory;
@property (readonly, nonatomic) id<SXPlaybackCoordinatorProviding> playbackCoordinatorProvider; // @synthesize playbackCoordinatorProvider=_playbackCoordinatorProvider;
@property (readonly, nonatomic) id<SXVideoPlaybackProgressObserverFactory> playbackProgressObserverFactory; // @synthesize playbackProgressObserverFactory=_playbackProgressObserverFactory;
@property (readonly, nonatomic) id<SXVideoPrefetchPolicyHandler> prefetchPolicyHandler; // @synthesize prefetchPolicyHandler=_prefetchPolicyHandler;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)createPrefetcherForVideo:(id)arg1 afterVideo:(id)arg2;
- (id)initWithPrefetchPolicyHandler:(id)arg1 bufferObserverFactory:(id)arg2 playbackCoordinatorProvider:(id)arg3 loadingStateObserverFactory:(id)arg4 loadingProgressObserverFactory:(id)arg5 playbackProgressObserverFactory:(id)arg6;

@end

