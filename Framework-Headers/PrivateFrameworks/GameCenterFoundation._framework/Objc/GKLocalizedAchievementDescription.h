//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterFoundation/GKAchievementDescription.h>

@class GKGame, NSString;

@interface GKLocalizedAchievementDescription : GKAchievementDescription
{
    GKGame *_game;
    NSString *_iconImageName;
}

@property (strong) GKGame *game; // @synthesize game=_game;
@property (copy) NSString *iconImageName; // @synthesize iconImageName=_iconImageName;

- (id)_localizedStringFromKey:(id)arg1;
- (id)achievedDescription;
- (void)dealloc;
- (id)imageNameForIcon;
- (id)title;
- (id)unachievedDescription;

@end

