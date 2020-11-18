//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ToneKit/TKPickerSelectableItem.h>

#import <ToneKit/TKPickerContainerItem-Protocol.h>

@class NSString, TKTonePickerController, TKTonePickerSectionItem;

@interface TKTonePickerItem : TKPickerSelectableItem <TKPickerContainerItem>
{
    TKTonePickerController *_parentTonePickerController;
    long long _numberOfChildren;
    unsigned long long _itemKind;
}

@property (nonatomic, setter=_setParentTonePickerController:) TKTonePickerController *_parentTonePickerController; // @synthesize _parentTonePickerController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long itemKind; // @synthesize itemKind=_itemKind;
@property (nonatomic) long long numberOfChildren; // @synthesize numberOfChildren=_numberOfChildren;
@property (readonly, nonatomic) TKTonePickerSectionItem *parentSectionItem;
@property (readonly) Class superclass;

- (void)_appendDescriptionOfAttributesToString:(id)arg1;
- (void)_setItemKind:(unsigned long long)arg1;
- (void)_setNumberOfChildren:(long long)arg1;
- (id)childItemAtIndex:(long long)arg1;

@end

