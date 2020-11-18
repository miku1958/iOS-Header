//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardHome/SBHLegibility-Protocol.h>
#import <SpringBoardHome/SBIconLocationPresenting-Protocol.h>
#import <SpringBoardHome/SBIconViewQuerying-Protocol.h>

@class SBFolderController, SBHIconImageCache, SBHIconModel, UIView;
@protocol SBHomeScreenIconTransitionAnimatorDelegate, SBIconListLayoutProvider, SBIconViewProviding;

@protocol SBHLibraryProvider <SBHLegibility, SBIconLocationPresenting, SBIconViewQuerying>

@property (readonly, nonatomic) SBFolderController *folderController;
@property (weak, nonatomic) id<SBHomeScreenIconTransitionAnimatorDelegate> homeScreenIconTransitionAnimatorDelegate;
@property (strong, nonatomic) SBHIconImageCache *iconImageCache;
@property (strong, nonatomic) SBHIconModel *iconModel;
@property (weak, nonatomic) id<SBIconViewProviding> iconViewProvider;
@property (weak, nonatomic) id<SBIconListLayoutProvider> listLayoutProvider;
@property (strong, nonatomic) UIView *searchDimmingView;

@end
