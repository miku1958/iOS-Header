//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/HUItemTableViewController.h>

#import <HomeUI/HUFaceRecognitionPersonEditorViewControllerDelegate-Protocol.h>

@class HFItemManager, HFItemProvider, NSString;

@interface HUFaceRecognitionKnownToHomeViewController : HUItemTableViewController <HUFaceRecognitionPersonEditorViewControllerDelegate>
{
    HFItemProvider *_homePersonItemProvider;
    HFItemManager *_knownPersonItemManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) HFItemProvider *homePersonItemProvider; // @synthesize homePersonItemProvider=_homePersonItemProvider;
@property (strong, nonatomic) HFItemManager *knownPersonItemManager; // @synthesize knownPersonItemManager=_knownPersonItemManager;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;
- (id)initWithHome:(id)arg1;
- (id)initWithItemManager:(id)arg1 tableViewStyle:(long long)arg2;
- (void)personEditorViewController:(id)arg1 didUpdateItem:(id)arg2;
- (id)presentFaceRecognitionPersonSettingsForPerson:(id)arg1 personManager:(id)arg2 animated:(BOOL)arg3;
- (void)setupCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;

@end
