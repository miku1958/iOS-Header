//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSURL;

__attribute__((visibility("hidden")))
@interface SLOpenGraphNode : NSObject
{
    BOOL _likedByMe;
    unsigned long long _numberOfLikes;
    unsigned long long _numberOfFriendLikes;
    int _fetchState;
    NSURL *_URL;
    NSArray *_likedByFriends;
}

@property (readonly) NSURL *URL; // @synthesize URL=_URL;
@property (nonatomic) int fetchState; // @synthesize fetchState=_fetchState;
@property (readonly) unsigned long long friendLikeCount;
@property (readonly) unsigned long long globalLikeCount;
@property (readonly) NSArray *likedByFriends; // @synthesize likedByFriends=_likedByFriends;
@property (readonly) BOOL likedByMe;

- (void).cxx_destruct;
- (void)_startUpdateIfNeeded;
- (id)cache;
- (id)initWithURL:(id)arg1;
- (void)invalidate;
- (void)likeWithCompletion:(CDUnknownBlockType)arg1;
- (void)unlikeWithCompletion:(CDUnknownBlockType)arg1;

@end
