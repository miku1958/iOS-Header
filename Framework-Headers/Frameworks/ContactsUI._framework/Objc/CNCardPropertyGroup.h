//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsUI/CNCardGroup.h>

@class CNContactStore, CNPolicy, NSArray, NSDictionary, NSString;

@interface CNCardPropertyGroup : CNCardGroup
{
    NSArray *_propertyItems;
    NSArray *_displayItems;
    NSArray *_editingItems;
    NSArray *_originalEditingItems;
    BOOL _showActionsWhenEmpty;
    BOOL _allowsDisplayModePickerActions;
    BOOL _isAdded;
    NSString *_property;
    CNPolicy *_policy;
    NSDictionary *_linkedPolicies;
    CNContactStore *_contactStore;
    NSArray *_deletedItems;
}

@property (readonly, nonatomic) BOOL allowsAdding;
@property (nonatomic) BOOL allowsDisplayModePickerActions; // @synthesize allowsDisplayModePickerActions=_allowsDisplayModePickerActions;
@property (readonly, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
@property (strong, nonatomic) NSArray *deletedItems; // @synthesize deletedItems=_deletedItems;
@property (strong, nonatomic) NSArray *editingItems;
@property (readonly, nonatomic, getter=isFixedValue) BOOL fixedValue;
@property (nonatomic) BOOL isAdded; // @synthesize isAdded=_isAdded;
@property (readonly, nonatomic) NSDictionary *linkedPolicies; // @synthesize linkedPolicies=_linkedPolicies;
@property (readonly, nonatomic) BOOL modified;
@property (readonly, nonatomic, getter=isMultiLine) BOOL multiLine;
@property (readonly, nonatomic, getter=isMultiValue) BOOL multiValue;
@property (readonly, nonatomic) CNPolicy *policy; // @synthesize policy=_policy;
@property (readonly, nonatomic) NSString *property; // @synthesize property=_property;
@property (readonly, nonatomic) NSArray *propertyItems; // @synthesize propertyItems=_propertyItems;
@property (nonatomic) BOOL showActionsWhenEmpty; // @synthesize showActionsWhenEmpty=_showActionsWhenEmpty;

+ (id)groupForProperty:(id)arg1 contact:(id)arg2 store:(id)arg3 policy:(id)arg4 linkedPolicies:(id)arg5;
- (void).cxx_destruct;
- (BOOL)_arrayContainsMaxAllowedItems:(id)arg1;
- (id)_availableLabelsInLabels:(id)arg1 forItem:(id)arg2 withValueSelector:(SEL)arg3 usedLabelsCount:(long long *)arg4;
- (id)_itemToBeMergedWith:(id)arg1 fromItems:(id)arg2 forEditing:(BOOL)arg3;
- (id)_loadPropertyItems;
- (id)_mergeItems:(id)arg1 forEditing:(BOOL)arg2;
- (id)_nextAvailableInstantMessageService;
- (id)_nextAvailableLabel;
- (id)_nextAvailableLabelInLabels:(id)arg1 withValueSelector:(SEL)arg2;
- (id)_nextAvailableSocialService;
- (BOOL)_shouldShowGroupWhenEditing:(BOOL)arg1;
- (void)_updateNameValuesForItems:(id)arg1;
- (BOOL)addEditingItem;
- (BOOL)canAddEditingItem;
- (id)description;
- (id)displayItems;
- (id)initWithProperty:(id)arg1 contact:(id)arg2 store:(id)arg3 policy:(id)arg4 linkedPolicies:(id)arg5;
- (BOOL)isRequired;
- (BOOL)labelsAreUnique;
- (id)labelsForItem:(id)arg1;
- (id)nextAvailableLabel;
- (id)policyForItem:(id)arg1;
- (void)reloadDataPreservingChanges:(BOOL)arg1;
- (void)removeEditingItem:(id)arg1;
- (void)saveChanges;
- (void)saveChangesForItems:(id)arg1;

@end

