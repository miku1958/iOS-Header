//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSListController.h>

@class NSObject;
@protocol STContentPrivacyViewModelCoordinator;

__attribute__((visibility("hidden")))
@interface STContentPrivacyMediaRestrictionsDetailController : PSListController
{
    NSObject<STContentPrivacyViewModelCoordinator> *_coordinator;
}

@property (strong, nonatomic) NSObject<STContentPrivacyViewModelCoordinator> *coordinator; // @synthesize coordinator=_coordinator;

- (void).cxx_destruct;
- (void)dealloc;
- (id)defaultLinkListSpecifierWithConfiguration:(id)arg1 key:(id)arg2;
- (id)defaultLinkListSpecifierWithConfiguration:(id)arg1 key:(id)arg2 titlesByValue:(id)arg3 sortByTitle:(BOOL)arg4;
- (id)defaultLinkListSpecifierWithItem:(id)arg1 titlesByValue:(id)arg2 sortByTitle:(BOOL)arg3;
- (id)defaultSwitchSpecifierWithConfiguration:(id)arg1 key:(id)arg2;
- (id)getItemSpecifierValue:(id)arg1;
- (id)init;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)radioGroupSpecifierWithName:(id)arg1 footerText:(id)arg2 item:(id)arg3;
- (void)setItemSpecifierValue:(id)arg1 specifier:(id)arg2;
- (void)showWebFilterRestrictions:(id)arg1;
- (id)specifiers;

@end

