//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSListController.h>

@class SuggestedAppsController;

@interface PSUIContinuityController : PSListController
{
    SuggestedAppsController *_suggestedAppsController;
}

- (void).cxx_destruct;
- (id)init;
- (id)isContinuityEnabled:(id)arg1;
- (BOOL)isContinuityRestricted;
- (void)profileNotification:(id)arg1;
- (void)setContinuityEnabled:(id)arg1 specifier:(id)arg2;
- (id)specifiers;
- (void)updateContinuitySpecifiers;

@end
