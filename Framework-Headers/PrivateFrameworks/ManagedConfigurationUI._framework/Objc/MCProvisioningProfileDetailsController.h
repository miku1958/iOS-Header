//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ManagedConfigurationUI/MCURLListenerListController.h>

@class MCDetailsDescriptionTableCell, MCDetailsHeaderCell, NSString, UIAlertView, UITableViewCell;

@interface MCProvisioningProfileDetailsController : MCURLListenerListController
{
    MCDetailsHeaderCell *_configHeader;
    MCDetailsDescriptionTableCell *_configMiddle;
    UITableViewCell *_configBottom;
    NSString *_displayName;
    NSString *_organizationName;
    BOOL _isExpired;
    void *_profile;
    BOOL _profileIsSigned;
    BOOL _isInstallMode;
    BOOL _installSucceeded;
    UIAlertView *_activeAlert;
}

+ (id)_formattedStringForDate:(id)arg1;
+ (void *)createProfileFromProfileData:(id)arg1;
+ (id)displayNameForUserInfo:(id)arg1;
+ (BOOL)isNearExpirationForUserInfo:(id)arg1;
+ (id)organizationForUserInfo:(id)arg1;
+ (void)updateUserInfo:(id)arg1 withProfile:(void *)arg2;
+ (void)updateUserInfoForUseWithProfileInfoCell:(id)arg1 withProfile:(void *)arg2;
- (void).cxx_destruct;
- (id)_configDataForProfile:(void *)arg1;
- (BOOL)_displayedAsSheet;
- (void)_finishInstallWithSuccess:(BOOL)arg1;
- (void)_hideNavBarButtons:(BOOL)arg1;
- (void)_prepareForInstall;
- (void)_prepareForRemove;
- (void)_profileListChanged:(id)arg1;
- (void)_showInstallWarning;
- (void)_showMISError:(int)arg1 withTitle:(id)arg2;
- (void)_showNavBarButtonsForSuccess:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_showProgressIndicator;
- (void)_showRemovalWarning;
- (void)_takeMeBack;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)installPayload;
- (void)performInstall;
- (void)performRemove;
- (void)removePayload;
- (id)specifiers;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)viewWillAppear:(BOOL)arg1;

@end

