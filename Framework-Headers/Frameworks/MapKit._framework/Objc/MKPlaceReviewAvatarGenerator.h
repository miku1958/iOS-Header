//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CNAvatarImageRenderer, NSMutableDictionary;
@protocol MKInfoCardTheme, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MKPlaceReviewAvatarGenerator : NSObject
{
    NSObject<OS_dispatch_queue> *_workQueue;
    NSMutableDictionary *_cachedMaskedImages;
    id<MKInfoCardTheme> _theme;
    CNAvatarImageRenderer *_monogrammer;
}

@property (strong, nonatomic) CNAvatarImageRenderer *monogrammer; // @synthesize monogrammer=_monogrammer;
@property (weak, nonatomic) id<MKInfoCardTheme> theme; // @synthesize theme=_theme;

- (void).cxx_destruct;
- (void)avatarForReview:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)init;
- (void)monogramForReviewerName:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
