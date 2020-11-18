//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface GKContentPropertyList : NSObject
{
    NSDictionary *_root;
    NSString *_bundleID;
    NSDictionary *_achievementsByIdentifier;
    NSDictionary *_leaderboardsByIdentifier;
    NSDictionary *_leaderboardSetsByIdentifier;
}

@property (strong) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property (strong) NSDictionary *root; // @synthesize root=_root;

+ (id)localPropertyListForGameDescriptor:(id)arg1;
- (id)_mainBundle;
- (id)_rootDictionary;
- (id)achievementDescriptionForIdentifier:(id)arg1;
- (id)achievementDescriptions;
- (void)dealloc;
- (id)imageNameForDashboardLogo;
- (id)leaderboardDescriptionForIdentifier:(id)arg1;
- (id)leaderboardDescriptions;
- (id)leaderboardSetDescriptionForIdentifier:(id)arg1;
- (id)leaderboardSetDescriptions;
- (id)localizedStringForKey:(id)arg1;
- (id)localizedStringForKey:(id)arg1 forLocalization:(id)arg2;

@end

