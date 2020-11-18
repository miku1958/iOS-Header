//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/HUItemTableViewController.h>

#import <HomeUI/HUPersonalRequestsDevicesModuleControllerDelegate-Protocol.h>

@class HUPersonalRequestsDevicesModuleController, HUPersonalRequestsEditorItemManager, NSString;

@interface HUPersonalRequestsEditorTableViewController : HUItemTableViewController <HUPersonalRequestsDevicesModuleControllerDelegate>
{
    HUPersonalRequestsEditorItemManager *_prEditorItemManager;
    HUPersonalRequestsDevicesModuleController *_prDevicesModuleController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) HUPersonalRequestsDevicesModuleController *prDevicesModuleController; // @synthesize prDevicesModuleController=_prDevicesModuleController;
@property (strong, nonatomic) HUPersonalRequestsEditorItemManager *prEditorItemManager; // @synthesize prEditorItemManager=_prEditorItemManager;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;
- (void)devicesModuleController:(id)arg1 presentViewController:(id)arg2;
- (id)initWithUserItem:(id)arg1;
- (id)itemModuleControllers;
- (void)setupCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(BOOL)arg4;

@end

