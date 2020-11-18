//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKit/HMObjectMerge-Protocol.h>
#import <HomeKit/NSSecureCoding-Protocol.h>
#import <HomeKit/_HMMediaSessionDelegate-Protocol.h>

@class HMAudioControl, HMMediaProfile, NSString, NSUUID, _HMMediaSession;
@protocol HMMediaSessionDelegate;

@interface HMMediaSession : NSObject <_HMMediaSessionDelegate, HMObjectMerge, NSSecureCoding>
{
    NSUUID *_uuid;
    long long _playbackState;
    HMAudioControl *_audioControl;
    NSString *_routeUID;
    id<HMMediaSessionDelegate> _delegate;
    _HMMediaSession *_mediaSession;
    HMMediaProfile *_mediaProfile;
}

@property (readonly) HMAudioControl *audioControl; // @synthesize audioControl=_audioControl;
@property (readonly, copy) NSString *debugDescription;
@property (weak) id<HMMediaSessionDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (weak) HMMediaProfile *mediaProfile; // @synthesize mediaProfile=_mediaProfile;
@property (strong, nonatomic) _HMMediaSession *mediaSession; // @synthesize mediaSession=_mediaSession;
@property (readonly) long long playbackState; // @synthesize playbackState=_playbackState;
@property (readonly, nonatomic) NSString *routeUID; // @synthesize routeUID=_routeUID;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSUUID *uniqueIdentifier;
@property (strong, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (void)configure:(id)arg1 messageTargetUUID:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUUID:(id)arg1 routeUID:(id)arg2 playbackState:(long long)arg3;
- (BOOL)isEqual:(id)arg1;
- (void)mediaSession:(id)arg1 didUpdatePlaybackState:(long long)arg2;
- (void)mediaSession:(id)arg1 didUpdateRouteUID:(id)arg2;
- (id)messageTargetUUID;
- (void)pauseWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)playbackStateDescription;
- (void)refreshPlaybackStateWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)resumeWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)updatePlaybackState:(id)arg1;

@end
