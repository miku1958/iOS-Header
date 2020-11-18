//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FamilyCircleUI/NSObject-Protocol.h>

@class NSArray;

@protocol LSApplicationWorkspaceObserverProtocol <NSObject>

@optional
- (void)applicationIconDidChange:(NSArray *)arg1;
- (void)applicationInstallsArePrioritized:(NSArray *)arg1 arePaused:(NSArray *)arg2;
- (void)applicationInstallsDidCancel:(NSArray *)arg1;
- (void)applicationInstallsDidChange:(NSArray *)arg1;
- (void)applicationInstallsDidPause:(NSArray *)arg1;
- (void)applicationInstallsDidPrioritize:(NSArray *)arg1;
- (void)applicationInstallsDidResume:(NSArray *)arg1;
- (void)applicationInstallsDidStart:(NSArray *)arg1;
- (void)applicationInstallsDidUpdateIcon:(NSArray *)arg1;
- (void)applicationStateDidChange:(NSArray *)arg1;
- (void)applicationsDidFailToInstall:(NSArray *)arg1;
- (void)applicationsDidFailToUninstall:(NSArray *)arg1;
- (void)applicationsDidInstall:(NSArray *)arg1;
- (void)applicationsDidUninstall:(NSArray *)arg1;
- (void)applicationsWillInstall:(NSArray *)arg1;
- (void)applicationsWillUninstall:(NSArray *)arg1;
- (void)deviceManagementPolicyDidChange:(NSArray *)arg1;
- (void)networkUsageChanged:(BOOL)arg1;
- (BOOL)observeLaunchProhibitedApps;
- (void)pluginsDidInstall:(NSArray *)arg1;
- (void)pluginsDidUninstall:(NSArray *)arg1;
- (void)pluginsWillUninstall:(NSArray *)arg1;
@end

