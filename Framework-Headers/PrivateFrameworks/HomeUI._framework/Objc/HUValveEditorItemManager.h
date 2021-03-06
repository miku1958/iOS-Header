//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFItemManager.h>

#import <HomeUI/HUControlPanelControllerDelegate-Protocol.h>

@class HFControlPanelItemProvider, HFItem, HFServiceBuilder, HFStaticItem, HFStaticItemProvider, HFValveServiceItem, HUControlPanelController, HUNameItemModule, NSString;

@interface HUValveEditorItemManager : HFItemManager <HUControlPanelControllerDelegate>
{
    HUNameItemModule *_nameModule;
    HFStaticItem *_identifyItem;
    HUControlPanelController *_controlPanelController;
    HFServiceBuilder *_serviceBuilder;
    unsigned long long _editorMode;
    HFValveServiceItem *_sourceValveItem;
    HFItem *_nameItem;
    HFControlPanelItemProvider *_controlPanelItemProvider;
    HFStaticItemProvider *_staticItemProvider;
}

@property (strong, nonatomic) HUControlPanelController *controlPanelController; // @synthesize controlPanelController=_controlPanelController;
@property (strong, nonatomic) HFControlPanelItemProvider *controlPanelItemProvider; // @synthesize controlPanelItemProvider=_controlPanelItemProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) unsigned long long editorMode; // @synthesize editorMode=_editorMode;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) HFStaticItem *identifyItem; // @synthesize identifyItem=_identifyItem;
@property (strong, nonatomic) HFItem *nameItem; // @synthesize nameItem=_nameItem;
@property (strong, nonatomic) HUNameItemModule *nameModule; // @synthesize nameModule=_nameModule;
@property (strong, nonatomic) HFServiceBuilder *serviceBuilder; // @synthesize serviceBuilder=_serviceBuilder;
@property (strong, nonatomic) HFValveServiceItem *sourceValveItem; // @synthesize sourceValveItem=_sourceValveItem;
@property (strong, nonatomic) HFStaticItemProvider *staticItemProvider; // @synthesize staticItemProvider=_staticItemProvider;
@property (readonly) Class superclass;

+ (id)preferredSectionSortArray;
+ (CDUnknownBlockType)sortComparatorForValveEditorSections;
- (void).cxx_destruct;
- (id)_buildItemProvidersForHome:(id)arg1;
- (id)_buildSectionsWithDisplayedItems:(id)arg1;
- (id)_characteristicTypesForControlPanelItem:(id)arg1;
- (id)_characteristicsAffectedByControlItem:(id)arg1;
- (void)controlPanelController:(id)arg1 didEndPossibleWritesForControlItem:(id)arg2;
- (void)controlPanelController:(id)arg1 willBeginPossibleWritesForControlItem:(id)arg2;
- (id)initWithDelegate:(id)arg1 sourceItem:(id)arg2 editorMode:(unsigned long long)arg3;

@end

