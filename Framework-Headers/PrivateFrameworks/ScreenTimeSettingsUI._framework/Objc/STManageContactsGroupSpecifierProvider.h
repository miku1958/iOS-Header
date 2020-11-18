//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ScreenTimeSettingsUI/STRootGroupSpecifierProvider.h>

@class PSSpecifier;

__attribute__((visibility("hidden")))
@interface STManageContactsGroupSpecifierProvider : STRootGroupSpecifierProvider
{
    PSSpecifier *_manageContactsRequestSpecifier;
}

@property (strong) PSSpecifier *manageContactsRequestSpecifier; // @synthesize manageContactsRequestSpecifier=_manageContactsRequestSpecifier;

- (void).cxx_destruct;
- (void)_communicationLimitsDidChange:(id)arg1;
- (void)_showManageContactsRequestAlert:(id)arg1;
- (void)_updateContactManagementState:(long long)arg1;
- (id)init;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setCoordinator:(id)arg1;

@end
