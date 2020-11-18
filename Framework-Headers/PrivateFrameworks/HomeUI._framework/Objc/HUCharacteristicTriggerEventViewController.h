//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/HUItemTableViewController.h>

#import <HomeUI/HUPickerCellDelegate-Protocol.h>
#import <HomeUI/HUTriggerConditionEditorItemModuleControllerDelegate-Protocol.h>

@class HFCharacteristicTriggerBuilder, HUCharacteristicEventOptionItem, HUCharacteristicTriggerEventItemManager, HUTriggerConditionEditorItemModuleController, NSString;
@protocol HUTriggerEditorDelegate;

@interface HUCharacteristicTriggerEventViewController : HUItemTableViewController <HUTriggerConditionEditorItemModuleControllerDelegate, HUPickerCellDelegate>
{
    HFCharacteristicTriggerBuilder *_characteristicTriggerBuilder;
    unsigned long long _mode;
    id<HUTriggerEditorDelegate> _delegate;
    HUTriggerConditionEditorItemModuleController *_conditionModuleController;
    HUCharacteristicEventOptionItem *_selectedEventOptionItem;
}

@property (strong, nonatomic) HFCharacteristicTriggerBuilder *characteristicTriggerBuilder; // @synthesize characteristicTriggerBuilder=_characteristicTriggerBuilder;
@property (readonly, nonatomic) HUTriggerConditionEditorItemModuleController *conditionModuleController; // @synthesize conditionModuleController=_conditionModuleController;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<HUTriggerEditorDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) HUCharacteristicTriggerEventItemManager *itemManager; // @dynamic itemManager;
@property (nonatomic) unsigned long long mode; // @synthesize mode=_mode;
@property (strong, nonatomic) HUCharacteristicEventOptionItem *selectedEventOptionItem; // @synthesize selectedEventOptionItem=_selectedEventOptionItem;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (BOOL)_canCommitTriggerBuilder;
- (BOOL)_canContinue;
- (void)_cancel:(id)arg1;
- (id)_commitTriggerBuilder;
- (void)_showActionEditor:(id)arg1;
- (void)_showSummary:(id)arg1;
- (void)_updateTriggerBuilder;
- (void)_updateVisibleCellCheckmarks;
- (void)_validateNextButton;
- (BOOL)automaticallyUpdatesViewControllerTitle;
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;
- (void)conditionEditorModuleController:(id)arg1 dismissDetailViewController:(id)arg2;
- (void)conditionEditorModuleController:(id)arg1 presentDetailViewController:(id)arg2;
- (id)initWithCharacteristicTriggerBuilder:(id)arg1 mode:(unsigned long long)arg2 delegate:(id)arg3;
- (void)itemManager:(id)arg1 performUpdateRequest:(id)arg2;
- (id)itemModuleControllers;
- (long long)numberOfValuesForPickerViewCell:(id)arg1;
- (id)pickerViewCell:(id)arg1 attributedTitleForValueAtIndex:(long long)arg2;
- (BOOL)pickerViewCell:(id)arg1 canSelectValueAtIndex:(long long)arg2;
- (void)pickerViewCell:(id)arg1 didSelectValueAtIndex:(long long)arg2;
- (void)setupCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3;
- (BOOL)shouldHideFooterBelowSection:(long long)arg1;
- (BOOL)shouldHideHeaderAboveSection:(long long)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(BOOL)arg4;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end
