//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardServices/SBSServiceFacilityClient.h>

@interface SBSApplicationClient : SBSServiceFacilityClient
{
}

+ (id)serviceFacilityIdentifier;
- (id)applicationShortcutItemsOfTypes:(unsigned long long)arg1 forBundleIdentifier:(id)arg2;
- (void)deleteSnapshotsForApplicationIdentifier:(id)arg1;
- (void)fetchApplicationShortcutItemsOfTypes:(unsigned long long)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)fetchWhitePointAdaptivityStyleForDisplayId:(unsigned int)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)triggerShowAllWindowsForApplicationBundleIdentifier:(id)arg1;
- (void)updateDynamicApplicationShortcutItems:(id)arg1 bundleIdentifier:(id)arg2;

@end

