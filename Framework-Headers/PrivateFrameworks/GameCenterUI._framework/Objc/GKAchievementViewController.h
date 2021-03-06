//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterUI/GKGameCenterViewController.h>

@protocol GKAchievementViewControllerDelegate;

@interface GKAchievementViewController : GKGameCenterViewController
{
    id<GKAchievementViewControllerDelegate> _achievementDelegate;
}

@property (weak, nonatomic) id<GKAchievementViewControllerDelegate> achievementDelegate; // @synthesize achievementDelegate=_achievementDelegate;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (void)notifyDelegateOnWillFinish;

@end

