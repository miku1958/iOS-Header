//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AvatarUI/AVTInMemoryResourceCache.h>

#import <AvatarUI/AVTImageCache-Protocol.h>

@class NSString;

@interface AVTInMemoryImageCache : AVTInMemoryResourceCache <AVTImageCache>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)imageForItem:(id)arg1 scope:(id)arg2;
- (id)imageForItem:(id)arg1 scope:(id)arg2 cacheMissHandler:(CDUnknownBlockType)arg3;
- (id)initWithLockProvider:(CDUnknownBlockType)arg1 logger:(id)arg2;

@end
