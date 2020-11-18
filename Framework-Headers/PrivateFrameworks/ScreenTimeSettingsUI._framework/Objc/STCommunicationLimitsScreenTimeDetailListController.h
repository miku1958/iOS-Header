//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSListController.h>

@class PSSpecifier, STCommunicationLimits;

__attribute__((visibility("hidden")))
@interface STCommunicationLimitsScreenTimeDetailListController : PSListController
{
    PSSpecifier *_allowedCommunicationGroupSpecifier;
    PSSpecifier *_allowEveryoneSpecifier;
    PSSpecifier *_allowContactsOnlySpecifier;
    PSSpecifier *_allowGroupsWithOneContactSpecifier;
    STCommunicationLimits *_communicationLimits;
}

@property (strong) PSSpecifier *allowContactsOnlySpecifier; // @synthesize allowContactsOnlySpecifier=_allowContactsOnlySpecifier;
@property (strong) PSSpecifier *allowEveryoneSpecifier; // @synthesize allowEveryoneSpecifier=_allowEveryoneSpecifier;
@property (strong) PSSpecifier *allowGroupsWithOneContactSpecifier; // @synthesize allowGroupsWithOneContactSpecifier=_allowGroupsWithOneContactSpecifier;
@property (strong) PSSpecifier *allowedCommunicationGroupSpecifier; // @synthesize allowedCommunicationGroupSpecifier=_allowedCommunicationGroupSpecifier;
@property (strong) STCommunicationLimits *communicationLimits; // @synthesize communicationLimits=_communicationLimits;

+ (void)showCompatibilityAlertIfNeededWithCoordinator:(id)arg1 presentingViewController:(id)arg2 okHandler:(CDUnknownBlockType)arg3;
- (void).cxx_destruct;
- (id)_allowedCommunicationGroupFooterText:(id)arg1;
- (void)_didFinishEditingCommunicationLimit;
- (void)_updateAllowedCommunicationGroupFooterText;
- (id)specifiers;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)willResignActive;

@end
