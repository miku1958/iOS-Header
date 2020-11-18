//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SilexVideo/SVVideoTransitionObserver-Protocol.h>

@class NSString, SVTimeline;
@protocol SVVideoPlaybackProgressObserverFactory, SVVideoPlaybackProgressObserving;

@interface SVTimelineManager : NSObject <SVVideoTransitionObserver>
{
    SVTimeline *_timeline;
    id<SVVideoPlaybackProgressObserverFactory> _playbackProgressObserverFactory;
    id<SVVideoPlaybackProgressObserving> _playbackProgressObserver;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) id<SVVideoPlaybackProgressObserving> playbackProgressObserver; // @synthesize playbackProgressObserver=_playbackProgressObserver;
@property (readonly, nonatomic) id<SVVideoPlaybackProgressObserverFactory> playbackProgressObserverFactory; // @synthesize playbackProgressObserverFactory=_playbackProgressObserverFactory;
@property (readonly) Class superclass;
@property (readonly, nonatomic) SVTimeline *timeline; // @synthesize timeline=_timeline;

- (void).cxx_destruct;
- (id)initWithTimeline:(id)arg1 playbackProgressObserverFactory:(id)arg2;
- (void)willTransitionToVideo:(id)arg1 withTransitionCoordinator:(id)arg2;

@end

