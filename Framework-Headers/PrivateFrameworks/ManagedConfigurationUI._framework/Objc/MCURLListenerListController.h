//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSListController.h>

@interface MCURLListenerListController : PSListController
{
}

+ (id)currentInstallationController;
+ (id)originalURLSender;
+ (void)setCurrentInstallationController:(id)arg1;
+ (void)setOriginalURLSender:(id)arg1;
+ (void)setShowingProfileInstallation:(BOOL)arg1;
+ (BOOL)showingProfileInstallation;
- (void)_pushProfileDetailsForProfileWithID:(id)arg1;
- (void)_showSheetToInstallConfigurationProfile;
- (void)_showSheetToInstallProvisioningProfile;
- (void)handleURL:(id)arg1;

@end
