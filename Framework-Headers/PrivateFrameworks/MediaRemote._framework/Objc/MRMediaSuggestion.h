//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class INPlayMediaIntent, MRArtwork, NSString;

@interface MRMediaSuggestion : NSObject
{
    NSString *_bundleID;
    MRArtwork *_artwork;
    INPlayMediaIntent *_intent;
}

@property (readonly, nonatomic) NSString *artist;
@property (strong, nonatomic) MRArtwork *artwork; // @synthesize artwork=_artwork;
@property (strong, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property (readonly, nonatomic) NSString *identifier;
@property (strong, nonatomic) INPlayMediaIntent *intent; // @synthesize intent=_intent;
@property (readonly, nonatomic) NSString *title;

- (void).cxx_destruct;
- (id)_callbackQueue;
- (void)_confirmIntent:(id)arg1 intentHandler:(CDUnknownBlockType)arg2;
- (void)_handleIntentWithProxy:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_identifierForQueuePlayback;
- (id)_intentForQueuePlayback;
- (BOOL)_originatedFromSystemMediaApp;
- (void)_playIntent:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_playIntent:(id)arg1 onEndpoint:(id)arg2 queue:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_playIntentRemotelyAsPlaybackQueue:(id)arg1 endpoint:(id)arg2 queue:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_playIntentRemotelyWithAirPlay:(id)arg1 destinationDevices:(id)arg2 queue:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)_processedIntent;
- (void)_updateActiveEndpointAndPlayIntent:(id)arg1 endpoint:(id)arg2 queue:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)description;
- (unsigned long long)hash;
- (id)initWithIntent:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)playOnDeviceWithUID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)playOnEndpoint:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)playWithCompletion:(CDUnknownBlockType)arg1;

@end

