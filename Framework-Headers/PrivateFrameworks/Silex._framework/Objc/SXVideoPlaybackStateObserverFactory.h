//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXVideoPlaybackStateObserverFactory-Protocol.h>

@class NSString;
@protocol SXPlaybackCoordinatorProviding;

@interface SXVideoPlaybackStateObserverFactory : NSObject <SXVideoPlaybackStateObserverFactory>
{
    id<SXPlaybackCoordinatorProviding> _playbackCoordinatorProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) id<SXPlaybackCoordinatorProviding> playbackCoordinatorProvider; // @synthesize playbackCoordinatorProvider=_playbackCoordinatorProvider;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)createPlaybackStateObserverForVideo:(id)arg1;
- (id)initWithPlaybackCoordinatorProvider:(id)arg1;

@end

