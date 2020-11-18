//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXVideoInteractionHandlerFactory-Protocol.h>

@class NSString;
@protocol SXPlaybackCoordinatorProviding, SXVideoPlaybackController;

@interface SXPrivacyStatementInteractionHandlerFactory : NSObject <SXVideoInteractionHandlerFactory>
{
    id<SXPlaybackCoordinatorProviding> _playbackCoordinatorProvider;
    id<SXVideoPlaybackController> _playbackController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) id<SXVideoPlaybackController> playbackController; // @synthesize playbackController=_playbackController;
@property (readonly, nonatomic) id<SXPlaybackCoordinatorProviding> playbackCoordinatorProvider; // @synthesize playbackCoordinatorProvider=_playbackCoordinatorProvider;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)createInteractionHandlerForVideo:(id)arg1;
- (id)initWithPlaybackCoordinatorProvider:(id)arg1 playbackController:(id)arg2;

@end

