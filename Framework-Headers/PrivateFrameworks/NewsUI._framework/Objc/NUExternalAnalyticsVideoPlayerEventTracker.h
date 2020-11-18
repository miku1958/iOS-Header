//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsUI/NUVideoPlayerEventTracker-Protocol.h>

@class NSString;
@protocol NSSNewsAnalyticsSessionManager, NUExternalAnalyticsEventStreamObserver;

@interface NUExternalAnalyticsVideoPlayerEventTracker : NSObject <NUVideoPlayerEventTracker>
{
    id<NSSNewsAnalyticsSessionManager> _sessionManager;
    id<NUExternalAnalyticsEventStreamObserver> _observer;
    NSString *_referrer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, weak, nonatomic) id<NUExternalAnalyticsEventStreamObserver> observer; // @synthesize observer=_observer;
@property (readonly, copy, nonatomic) NSString *referrer; // @synthesize referrer=_referrer;
@property (readonly, nonatomic) id<NSSNewsAnalyticsSessionManager> sessionManager; // @synthesize sessionManager=_sessionManager;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_articleViewEventWithQueryParametersForVideoItem:(id)arg1;
- (id)_defaultQueryParametersWithEventType:(id)arg1;
- (id)_eventWithQueryParameters:(id)arg1;
- (void)_populateQueryParameters:(id)arg1 withVideoItem:(id)arg2;
- (void)_submitEventWithQueryParameters:(id)arg1;
- (id)_videoPlaybackEventQueryParametersForVideoItem:(id)arg1 streamUserAction:(id)arg2;
- (id)init;
- (id)initWithSessionManager:(id)arg1 observer:(id)arg2 referrer:(id)arg3;
- (void)playbackFinishedWithVideoItem:(id)arg1 metadata:(id)arg2;
- (void)playbackInitiatedWithVideoItem:(id)arg1 metadata:(id)arg2;
- (void)playbackPausedWithVideoItem:(id)arg1 metadata:(id)arg2;
- (void)playbackResumedWithVideoItem:(id)arg1 metadata:(id)arg2;
- (void)playbackStartedWithVideoItem:(id)arg1 metadata:(id)arg2;

@end

