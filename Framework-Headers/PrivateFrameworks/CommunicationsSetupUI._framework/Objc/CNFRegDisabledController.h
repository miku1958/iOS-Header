//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CommunicationsSetupUI/CNFRegFirstRunController.h>

@class PSSpecifier;

@interface CNFRegDisabledController : CNFRegFirstRunController
{
    PSSpecifier *_spinner;
    PSSpecifier *_turnOnButton;
}

- (void).cxx_destruct;
- (void)_activateSpinner;
- (void)_deactivateSpinner;
- (id)_rightButtonItem;
- (void)_setupAccountHandlersForDisabledOperation;
- (id)bundle;
- (id)getAccountNameForSpecifier:(id)arg1;
- (id)specifierList;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)turnOnTapped:(id)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end

