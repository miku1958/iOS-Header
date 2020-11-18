//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSListController.h>

#import <PreferencesUI/PSUIWirelessDataOptionsDelegate-Protocol.h>

@class AppWirelessDataUsageManager, NSString, WirelessDataUsageWorkspace;

@interface PSUIWirelessDataOptionsController : PSListController <PSUIWirelessDataOptionsDelegate>
{
    BOOL _cancelled;
    BOOL _loading;
    WirelessDataUsageWorkspace *_workspace;
    AppWirelessDataUsageManager *_wirelessManager;
}

@property (getter=isCancelled) BOOL cancelled; // @synthesize cancelled=_cancelled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL loading; // @synthesize loading=_loading;
@property (readonly) Class superclass;
@property (strong, nonatomic) AppWirelessDataUsageManager *wirelessManager; // @synthesize wirelessManager=_wirelessManager;
@property (strong, nonatomic) WirelessDataUsageWorkspace *workspace; // @synthesize workspace=_workspace;

- (void).cxx_destruct;
- (void)_createAppSpecifiersForVisibleApps:(id)arg1 hiddenApps:(id)arg2 unknownApps:(id)arg3 internalProcesses:(id)arg4;
- (id)_dataUsageForApplicationSpecifier:(id)arg1;
- (id)_dataUsageStringForAppSpecifier:(id)arg1 includeHeader:(BOOL)arg2;
- (id)_dataUsageWithHeaderForApplicationSpecifier:(id)arg1;
- (id)_groupSpecifier;
- (void)_handleCellularPlanChangedNotification:(id)arg1;
- (void)_handleNewCarrierNotification:(id)arg1;
- (void)_handleSIMStatusReadyNotification:(id)arg1;
- (void)_handleWirelessDataUsageChangedNotification:(id)arg1;
- (id)_specifierForApp:(id)arg1 enabled:(BOOL)arg2;
- (void)cancel;
- (void)dealloc;
- (id)init;
- (BOOL)shouldReloadSpecifiersOnResume;
- (id)specifierForSpecialCategory:(id)arg1 bytesUsed:(id)arg2;
- (id)specifierForSystemApp:(id)arg1 bytesUsed:(id)arg2;
- (id)specifiers;

@end

