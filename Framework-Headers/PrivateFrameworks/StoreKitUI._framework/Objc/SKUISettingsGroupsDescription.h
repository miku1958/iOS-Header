//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <StoreKitUI/SKUISettingsGroupControllerDelegate-Protocol.h>

@class NSMapTable, NSString, SKUIClientContext, SKUISettingsContext, SKUISettingsObjectStore;
@protocol SKUISettingsGroupsDescriptionDelegate;

__attribute__((visibility("hidden")))
@interface SKUISettingsGroupsDescription : NSObject <SKUISettingsGroupControllerDelegate>
{
    NSMapTable *_controllers;
    SKUISettingsObjectStore *_groupDescriptions;
    SKUISettingsContext *_settingsContext;
    SKUIClientContext *_clientContext;
    id<SKUISettingsGroupsDescriptionDelegate> _delegate;
}

@property (weak, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<SKUISettingsGroupsDescriptionDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addSettingsGroupWithViewElement:(id)arg1 controller:(id)arg2;
- (id)_controllerForGroupElement:(id)arg1;
- (void)_dismissViewController:(id)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_dispatchUpdateForSettingsGroupDescription:(id)arg1 atIndex:(unsigned long long)arg2 withUpdateType:(long long)arg3;
- (id)_gatherEditableSettings;
- (void)_presentViewController:(id)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_updatedEditsValid;
- (void)addSettingsGroupWithViewElement:(id)arg1;
- (id)createEditTransaction;
- (void)deleteSettingAtIndexPath:(id)arg1;
- (void)deleteSettingsGroupDescription:(id)arg1;
- (void)dispatchUpdate:(id)arg1;
- (id)footerDescriptionForGroupAtIndex:(unsigned long long)arg1;
- (BOOL)hasEditableSettingDescriptions;
- (id)headerDescriptionForGroupAtIndex:(unsigned long long)arg1;
- (void)hideSettingsGroupDescription:(id)arg1;
- (unsigned long long)indexOfSettingsGroupDescription:(id)arg1;
- (id)init;
- (id)initWithDelegate:(id)arg1 settingsContext:(id)arg2;
- (unsigned long long)numberOfGroups;
- (unsigned long long)numberOfSettingsInGroupAtIndex:(unsigned long long)arg1;
- (id)owningViewControllerForSettingsGroupController:(id)arg1;
- (void)recycle;
- (void)reloadData;
- (void)requestLayoutForWidth:(double)arg1 context:(id)arg2;
- (void)revealSettingsGroupDescription:(id)arg1;
- (id)settingDescriptionAtIndexPath:(id)arg1;
- (void)settingsGroupController:(id)arg1 reloadSettingDescription:(id)arg2;
- (id)settingsGroupController:(id)arg1 viewForSettingDescription:(id)arg2;
- (BOOL)shouldShowFooterForGroupAtIndex:(unsigned long long)arg1;
- (BOOL)shouldShowHeaderForGroupAtIndex:(unsigned long long)arg1;
- (id)viewElementForSettingAtIndexPath:(id)arg1;

@end

