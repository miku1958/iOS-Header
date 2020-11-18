//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaPlaybackCore/MFExternalPlaybackController-Protocol.h>
#import <MediaPlaybackCore/MPAVRoutingControllerDelegate-Protocol.h>
#import <MediaPlaybackCore/MPCExternalPlaybackRouter-Protocol.h>

@class MPAVRoutingController, MPCMediaFoundationTranslator, MPCPlaybackEngine, NSString;

@interface MPCExternalPlaybackControllerImplementation : NSObject <MPAVRoutingControllerDelegate, MFExternalPlaybackController, MPCExternalPlaybackRouter>
{
    MPAVRoutingController *_routingController;
    MPCPlaybackEngine *_playbackEngine;
    MPCMediaFoundationTranslator *_translator;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, weak, nonatomic) MPCPlaybackEngine *playbackEngine; // @synthesize playbackEngine=_playbackEngine;
@property (readonly, nonatomic) MPAVRoutingController *routingController; // @synthesize routingController=_routingController;
@property (readonly) Class superclass;
@property (readonly, nonatomic) MPCMediaFoundationTranslator *translator; // @synthesize translator=_translator;

- (void).cxx_destruct;
- (void)configureExternalPlaybackForPlayer:(id)arg1 queueItem:(id)arg2;
- (id)initWithPlaybackEngine:(id)arg1 translator:(id)arg2;
- (void)pickBestDeviceRoute;
- (void)routingControllerExternalScreenTypeDidChange:(id)arg1;

@end
