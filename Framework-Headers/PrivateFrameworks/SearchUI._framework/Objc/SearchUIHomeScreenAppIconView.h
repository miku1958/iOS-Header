//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardHome/SBIconView.h>

#import <SearchUI/LSApplicationWorkspaceObserverProtocol-Protocol.h>
#import <SearchUI/SBIconViewDelegate-Protocol.h>
#import <SearchUI/SBLeafIconDataSource-Protocol.h>

@class LSApplicationProxy, NSString, NSURL, SFSearchResult;
@protocol SearchUIHomeScreenEngagementDelegate;

@interface SearchUIHomeScreenAppIconView : SBIconView <SBLeafIconDataSource, SBIconViewDelegate, LSApplicationWorkspaceObserverProtocol>
{
    id<SearchUIHomeScreenEngagementDelegate> _engagementDelegate;
    unsigned long long _variant;
    LSApplicationProxy *_applicationProxy;
    SFSearchResult *_searchResult;
    NSURL *_applicationBundleURL;
    NSString *_applicationShortcutWidgetBundleIdentifier;
}

@property (copy, nonatomic) NSURL *applicationBundleURL; // @synthesize applicationBundleURL=_applicationBundleURL;
@property (strong) LSApplicationProxy *applicationProxy; // @synthesize applicationProxy=_applicationProxy;
@property (copy, nonatomic) NSString *applicationShortcutWidgetBundleIdentifier; // @synthesize applicationShortcutWidgetBundleIdentifier=_applicationShortcutWidgetBundleIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) id<SearchUIHomeScreenEngagementDelegate> engagementDelegate; // @synthesize engagementDelegate=_engagementDelegate;
@property (readonly) unsigned long long hash;
@property (strong) SFSearchResult *searchResult; // @synthesize searchResult=_searchResult;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long variant; // @synthesize variant=_variant;

+ (id)applicationShortcutService;
+ (id)cacheForVariant:(unsigned long long)arg1;
+ (struct CGPath *)shadowPathForIconFrame:(struct CGRect)arg1 cornerRadius:(double)arg2;
- (void).cxx_destruct;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)appIconsChanged:(id)arg1;
- (id)applicationBundleURLForShortcutsWithIconView:(id)arg1;
- (id)applicationShortcutWidgetBundleIdentifierForShortcutsWithIconView:(id)arg1;
- (void)dealloc;
- (void)deviceManagementPolicyDidChange:(id)arg1;
- (void)didMoveToWindow;
- (void)fetchApplicationShortcutInfoForIcon:(id)arg1;
- (void)fetchIconImageForIcon:(id)arg1;
- (id)icon:(id)arg1 displayNameForLocation:(id)arg2;
- (id)icon:(id)arg1 imageWithInfo:(struct SBIconImageInfo)arg2;
- (BOOL)icon:(id)arg1 launchFromLocation:(id)arg2 context:(id)arg3;
- (void)iconTapped:(id)arg1;
- (id)iconView:(id)arg1 applicationShortcutItemsWithProposedItems:(id)arg2;
- (long long)iconView:(id)arg1 draggingStartLocationWithProposedStartLocation:(long long)arg2;
- (BOOL)iconView:(id)arg1 shouldActivateApplicationShortcutItem:(id)arg2 atIndex:(unsigned long long)arg3;
- (BOOL)iconViewCanBeginDrags:(id)arg1;
- (BOOL)iconViewShouldBeginShortcutsPresentation:(id)arg1;
- (void)iconViewWillBeginDrag:(id)arg1 session:(id)arg2;
- (id)init;
- (BOOL)isTimedOutForIcon:(id)arg1;
- (void)launchIcon;
- (id)parallaxSettingsForShortcutsPresentationWithIconView:(id)arg1;
- (unsigned long long)priorityForIcon:(id)arg1;
- (void)resetImageWithAppIcon:(id)arg1;
- (void)setIcon:(id)arg1;
- (BOOL)shouldHideShortcutsForAppIcon:(id)arg1;
- (BOOL)shouldUseSecureWindowForShortcutsPresentationWithIconView:(id)arg1;
- (void)tlk_updateForAppearance:(id)arg1;
- (void)updateWithResult:(id)arg1;

@end
