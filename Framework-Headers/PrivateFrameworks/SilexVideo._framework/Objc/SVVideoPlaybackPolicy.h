//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SilexVideo/SVVideoPlaybackPolicy-Protocol.h>

@class NSString;

@interface SVVideoPlaybackPolicy : NSObject <SVVideoPlaybackPolicy>
{
    BOOL _playbackIsAllowedToStart;
    BOOL playbackRequested;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, getter=isPlaybackAllowedToStart) BOOL playbackIsAllowedToStart; // @synthesize playbackIsAllowedToStart=_playbackIsAllowedToStart;
@property (nonatomic) BOOL playbackRequested; // @synthesize playbackRequested;
@property (readonly) Class superclass;

- (id)init;

@end
