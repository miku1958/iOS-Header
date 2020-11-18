//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface AVTAvatarRecordRendering : NSObject
{
}

+ (void)_castRecord:(id)arg1 andDoRecordHandlingBlock:(CDUnknownBlockType)arg2 puppetHandlingBlock:(CDUnknownBlockType)arg3;
+ (id)avatarForRecord:(id)arg1;
+ (id)configurationForRecord:(id)arg1 coreModel:(id)arg2;
+ (id)imageForRecord:(id)arg1 scope:(id)arg2;
+ (id)memojiForRecord:(id)arg1;
+ (void)preloadAllAvatarsWithStore:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (void)preloadAllAvatarsWithStore:(id)arg1 environment:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (void)preloadAvatarsWithFetchRequests:(id)arg1 store:(id)arg2 environment:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
+ (void)preloadAvatarsWithIdentifiers:(id)arg1 store:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (void)preloadAvatarsWithIdentifiers:(id)arg1 store:(id)arg2 environment:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;

@end

