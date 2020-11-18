//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXPlaybackCoordinatorFactory-Protocol.h>

@class NSString;
@protocol SXAVPlayerFactoryProviding, SXVideoProviderProviding, SXVolumeProviding;

@interface SXPlaybackCoordinatorFactory : NSObject <SXPlaybackCoordinatorFactory>
{
    id<SXVolumeProviding> _volumeProvider;
    id<SXVideoProviderProviding> _videoProviderProvider;
    id<SXAVPlayerFactoryProviding> _playerFactoryProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) id<SXAVPlayerFactoryProviding> playerFactoryProvider; // @synthesize playerFactoryProvider=_playerFactoryProvider;
@property (readonly) Class superclass;
@property (readonly, nonatomic) id<SXVideoProviderProviding> videoProviderProvider; // @synthesize videoProviderProvider=_videoProviderProvider;
@property (readonly, nonatomic) id<SXVolumeProviding> volumeProvider; // @synthesize volumeProvider=_volumeProvider;

- (void).cxx_destruct;
- (id)createPlaybackCoordinatorForVideo:(id)arg1;
- (id)initWithVolumeProvider:(id)arg1 videoProviderProvider:(id)arg2 playerFactoryProvider:(id)arg3;

@end

