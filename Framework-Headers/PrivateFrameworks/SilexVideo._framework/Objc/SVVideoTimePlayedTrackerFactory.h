//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SilexVideo/SVVideoTimePlayedTrackerFactory-Protocol.h>

@class NSString;
@protocol SVVideoPeriodicTimeObserverFactory, SVVideoPlaybackStateObserverFactory, SVVideoTimeJumpObserverFactory, SVVideoTimeProviderFactory;

@interface SVVideoTimePlayedTrackerFactory : NSObject <SVVideoTimePlayedTrackerFactory>
{
    id<SVVideoPeriodicTimeObserverFactory> _timeObserverFactory;
    id<SVVideoTimeProviderFactory> _timeProviderFactory;
    id<SVVideoPlaybackStateObserverFactory> _playbackStateObserverFactory;
    id<SVVideoTimeJumpObserverFactory> _timeJumpObserverFactory;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) id<SVVideoPlaybackStateObserverFactory> playbackStateObserverFactory; // @synthesize playbackStateObserverFactory=_playbackStateObserverFactory;
@property (readonly) Class superclass;
@property (readonly, nonatomic) id<SVVideoTimeJumpObserverFactory> timeJumpObserverFactory; // @synthesize timeJumpObserverFactory=_timeJumpObserverFactory;
@property (readonly, nonatomic) id<SVVideoPeriodicTimeObserverFactory> timeObserverFactory; // @synthesize timeObserverFactory=_timeObserverFactory;
@property (readonly, nonatomic) id<SVVideoTimeProviderFactory> timeProviderFactory; // @synthesize timeProviderFactory=_timeProviderFactory;

- (void).cxx_destruct;
- (id)createTimePlayedTrackerForVideo:(id)arg1;
- (id)initWithTimeObserverFactory:(id)arg1 timeProviderFactory:(id)arg2 playbackStateObserverFactory:(id)arg3 timeJumpObserverFactory:(id)arg4;

@end
