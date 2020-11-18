//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/HUItemTableViewController.h>

@class HFUserItem, HUUserCamerasAccessLevelItemManager;

@interface HUUserCamerasAccessLevelViewController : HUItemTableViewController
{
    HFUserItem *_userItem;
    HUUserCamerasAccessLevelItemManager *_camerasAccessLevelItemManager;
}

@property (readonly, copy, nonatomic) HUUserCamerasAccessLevelItemManager *camerasAccessLevelItemManager; // @synthesize camerasAccessLevelItemManager=_camerasAccessLevelItemManager;
@property (readonly, copy, nonatomic) HFUserItem *userItem; // @synthesize userItem=_userItem;

- (void).cxx_destruct;
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;
- (id)initWithUserItem:(id)arg1 home:(id)arg2;
- (void)setupCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(BOOL)arg4;
- (void)viewDidLoad;

@end
