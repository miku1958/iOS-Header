//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSListController.h>

@class ASTLockScreenSuggestionSpecifier, ASTLockScreenSuggestionsGlobalController, NSArray, PSSpecifier;

@interface ASTLockScreenSuggestionsDetailListController : PSListController
{
    ASTLockScreenSuggestionSpecifier *_lockScreenSpecifier;
    PSSpecifier *_perAppGroup;
    NSArray *_perAppSpecifiers;
    ASTLockScreenSuggestionsGlobalController *_globalController;
    PSSpecifier *_globalSpecifier;
}

- (void).cxx_destruct;
- (void)_handleGlobalToggleChangeWithEnabled:(BOOL)arg1;
- (id)init;
- (id)specifiers;

@end

