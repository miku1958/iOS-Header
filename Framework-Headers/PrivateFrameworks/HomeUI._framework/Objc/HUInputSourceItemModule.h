//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/HUChildServiceEditorItemModule.h>

@class HFItem;

@interface HUInputSourceItemModule : HUChildServiceEditorItemModule
{
    HFItem *_chooseInputsSelectionItem;
}

@property (readonly, nonatomic) HFItem *chooseInputsSelectionItem; // @synthesize chooseInputsSelectionItem=_chooseInputsSelectionItem;

+ (CDUnknownBlockType)_serviceItemComparatorForTelevisionProfile:(id)arg1;
+ (id)supportedServiceTypes;
- (void).cxx_destruct;
- (id)buildSectionsWithDisplayedItems:(id)arg1;
- (BOOL)canToggleConfigurationStateForItem:(id)arg1;

@end
