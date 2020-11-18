//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SilexVideo/SVVideoPlaybackController-Protocol.h>

@class NSString, SVVideoPlaybackManager;

@interface SVVideoPlaybackController : NSObject <SVVideoPlaybackController>
{
    SVVideoPlaybackManager *_playbackManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, weak, nonatomic) SVVideoPlaybackManager *playbackManager; // @synthesize playbackManager=_playbackManager;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithPlaybackManager:(id)arg1;
- (void)pause;
- (void)play;

@end
