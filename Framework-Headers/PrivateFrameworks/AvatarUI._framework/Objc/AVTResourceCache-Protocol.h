//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AvatarUI/NSObject-Protocol.h>

@protocol AVTCacheableResource, AVTCacheableResourceScope, AVTCachedResource;

@protocol AVTResourceCache <NSObject>
- (id<AVTCachedResource>)resourceForItem:(id<AVTCacheableResource>)arg1 scope:(id<AVTCacheableResourceScope>)arg2;
- (id<AVTCachedResource>)resourceForItem:(id<AVTCacheableResource>)arg1 scope:(id<AVTCacheableResourceScope>)arg2 cacheMissHandler:(id<AVTCachedResource> (^)(id<AVTCacheableResource>, id<AVTCacheableResourceScope>))arg3;

@optional
- (void)clearCache;
@end

