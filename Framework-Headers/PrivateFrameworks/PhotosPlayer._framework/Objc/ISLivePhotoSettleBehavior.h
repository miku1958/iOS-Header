//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosPlayer/ISBehavior.h>

@protocol ISLivePhotoSettleBehaviorDelegate;

__attribute__((visibility("hidden")))
@interface ISLivePhotoSettleBehavior : ISBehavior
{
}

@property (weak, nonatomic) id<ISLivePhotoSettleBehaviorDelegate> delegate; // @dynamic delegate;

- (void)_didFinish;
- (long long)behaviorType;
- (void)settle:(BOOL)arg1;

@end

