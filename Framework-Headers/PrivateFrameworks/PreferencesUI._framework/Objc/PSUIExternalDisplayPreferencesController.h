//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSListController.h>

@interface PSUIExternalDisplayPreferencesController : PSListController
{
}

- (void)connectedDisplayDidUpdate:(id)arg1;
- (void)dealloc;
- (id)displayModeSpecifiers;
- (void)externalBrightnessDidUpdate:(id)arg1;
- (id)externalBrightnessSpecifier;
- (id)externalBrightnessValueForSpecifier:(id)arg1;
- (void)handlePSUIExternalDisplayManagerExternalBrightnessAvailablityDidChangeNotification:(id)arg1;
- (id)init;
- (void)insertExternalBrightnessSpecifiers;
- (id)matchContentEnabled:(id)arg1;
- (void)removeExternalBrightnessSpecifiers;
- (void)setExternalBrightnessValue:(id)arg1 specifier:(id)arg2;
- (void)setMatchContentEnabled:(id)arg1 specifier:(id)arg2;
- (id)specifiers;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)valueForSpecifier:(id)arg1;
- (void)viewDidLoad;

@end

