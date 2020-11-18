//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class GKNetworkImageSource, NSCache, UIImage;

@interface GKUITheme : NSObject
{
    NSCache *_resourceCache;
}

@property (readonly, nonatomic) double formSheetCornerRadius;
@property (readonly, nonatomic) struct CGSize formSheetSize;
@property (readonly, strong, nonatomic) GKNetworkImageSource *iconLeaderboardListSource;
@property (readonly, strong, nonatomic) GKNetworkImageSource *iconLeaderboardSetListSource;
@property (readonly, strong, nonatomic) UIImage *interactiveRatingStarsBackground;
@property (readonly, strong, nonatomic) UIImage *interactiveRatingStarsForeground;
@property (readonly, strong, nonatomic) GKNetworkImageSource *macGameIconSource;
@property (readonly, strong, nonatomic) GKNetworkImageSource *photoDetailSource;
@property (readonly, strong, nonatomic) GKNetworkImageSource *photoListSource;
@property (readonly, strong, nonatomic) UIImage *ratingStarsBackgroundImage;
@property (readonly, strong, nonatomic) UIImage *ratingStarsForegroundImage;
@property (strong, nonatomic) NSCache *resourceCache; // @synthesize resourceCache=_resourceCache;
@property (readonly, nonatomic) GKNetworkImageSource *untreatedAchievementImageDetailSource;
@property (readonly, nonatomic) GKNetworkImageSource *untreatedAchievementImageSource;

+ (id)sharedTheme;
- (id)achievementsDefaultIcon;
- (id)achievementsNotStartedIcon;
- (id)addPlayerButtonImage;
- (id)bubbleAccept;
- (id)bubbleChallenges;
- (id)bubbleDecline;
- (id)bubbleFriends;
- (id)bubbleGames;
- (id)bubbleHighlight;
- (id)bubbleInvite;
- (id)bubblePlay;
- (id)bubblePoints;
- (id)bubbleRequests;
- (id)bubbleShare;
- (id)bubbleSignin;
- (id)bubbleTurns;
- (void)clearResourceCache;
- (void)dealloc;
- (id)defaultLeaderboardIcon;
- (id)defaultPlayerPhoto;
- (id)eventIconImage;
- (id)imageNamed:(id)arg1;
- (id)init;
- (id)navbarActionButtonIcon;
- (id)playerPickerSelectedImage;
- (id)playerPickerUnselectedImage;
- (id)removePlayerButtonImage;
- (id)resourceForSelector:(SEL)arg1 missingHandler:(CDUnknownBlockType)arg2;
- (id)resourceWithName:(id)arg1 missingHandler:(CDUnknownBlockType)arg2;
- (id)statusDotImage;

@end

