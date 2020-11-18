//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface MPRemotePlaybackQueue : NSObject
{
    struct _MRSystemAppPlaybackQueue *_mediaRemotePlaybackQueue;
}

@property (nonatomic) long long replaceIntent;
@property (nonatomic, getter=isRequestingImmediatePlayback) BOOL requestingImmediatePlayback;
@property (nonatomic) BOOL shouldOverrideManuallyCuratedQueue;
@property (copy, nonatomic) NSString *siriRecommendationIdentifier;
@property (copy, nonatomic) NSDictionary *userInfo;

+ (id)queueWithMediaRemotePlaybackQueue:(struct _MRSystemAppPlaybackQueue *)arg1;
+ (void)registerRemotePlaybackQueueClass:(Class)arg1 forPlaybackQueueType:(int)arg2;
- (struct _MRSystemAppPlaybackQueue *)_mediaRemotePlaybackQueue;
- (void)dealloc;
- (id)init;
- (id)initWithMediaRemotePlaybackQueue:(struct _MRSystemAppPlaybackQueue *)arg1;
- (BOOL)verifyWithError:(id *)arg1;

@end

