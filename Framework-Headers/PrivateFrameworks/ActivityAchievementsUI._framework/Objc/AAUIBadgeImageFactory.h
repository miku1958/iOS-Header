//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AAUIAchievementResourceProvider, AAUIBadgeView, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface AAUIBadgeImageFactory : NSObject
{
    NSMutableDictionary *_cache;
    AAUIAchievementResourceProvider *_resourceProvider;
    AAUIBadgeView *_earnedBadgeView;
    AAUIBadgeView *_unearnedBadgeView;
    NSObject<OS_dispatch_queue> *_imageCreationQueue;
}

@property (strong, nonatomic) NSMutableDictionary *cache; // @synthesize cache=_cache;
@property (strong, nonatomic) AAUIBadgeView *earnedBadgeView; // @synthesize earnedBadgeView=_earnedBadgeView;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *imageCreationQueue; // @synthesize imageCreationQueue=_imageCreationQueue;
@property (strong, nonatomic) AAUIAchievementResourceProvider *resourceProvider; // @synthesize resourceProvider=_resourceProvider;
@property (strong, nonatomic) AAUIBadgeView *unearnedBadgeView; // @synthesize unearnedBadgeView=_unearnedBadgeView;

- (void).cxx_destruct;
- (void)clearAllCachedImages;
- (id)generateImageForConfiguration:(id)arg1 size:(struct CGSize)arg2 unearned:(BOOL)arg3;
- (BOOL)hasCachedThumbnailImageForAchievement:(id)arg1 size:(struct CGSize)arg2;
- (id)init;
- (id)thumbnailImageForAchievement:(id)arg1 size:(struct CGSize)arg2;

@end
