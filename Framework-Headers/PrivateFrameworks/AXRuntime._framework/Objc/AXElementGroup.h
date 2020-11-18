//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSArray.h>

#import <AXRuntime/AXGroupable-Protocol.h>

@class AXElement, NSHashTable, NSString;
@protocol AXElementGroupGenerator;

@interface AXElementGroup : NSArray <AXGroupable>
{
    NSArray *_elementStore;
    BOOL _rootGroup;
    id<AXElementGroupGenerator> _generator;
    unsigned long long _groupTraits;
    unsigned long long _userDefinedScanningBehaviorTraits;
    NSHashTable *_groupObservers;
    AXElementGroup *_parentGroup;
    AXElement *_elementCommunity;
    NSString *_label;
}

@property (readonly, nonatomic) BOOL allowsChangingExistingGroupingOfContents;
@property (readonly, nonatomic) BOOL allowsVisualGroupingOfChildren;
@property (readonly, nonatomic) BOOL canBeGroupedWithOtherGroupables;
@property (readonly, nonatomic) BOOL canBeReplacedByChildren;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) AXElement *elementCommunity; // @synthesize elementCommunity=_elementCommunity;
@property (readonly, nonatomic) struct CGRect frame;
@property (nonatomic) id<AXElementGroupGenerator> generator; // @synthesize generator=_generator;
@property (strong, nonatomic) NSHashTable *groupObservers; // @synthesize groupObservers=_groupObservers;
@property (nonatomic) unsigned long long groupTraits; // @synthesize groupTraits=_groupTraits;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSString *label; // @synthesize label=_label;
@property (readonly, nonatomic) unsigned long long numberOfElements;
@property (nonatomic) AXElementGroup *parentGroup; // @synthesize parentGroup=_parentGroup;
@property (nonatomic, getter=isRootGroup) BOOL rootGroup; // @synthesize rootGroup=_rootGroup;
@property (readonly, nonatomic) BOOL shouldBeUngrouped;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long userDefinedScanningBehaviorTraits; // @synthesize userDefinedScanningBehaviorTraits=_userDefinedScanningBehaviorTraits;

+ (id)groupWithElements:(id)arg1;
+ (id)groupWithElements:(id)arg1 label:(id)arg2;
+ (id)groupWithGenerator:(id)arg1;
- (void).cxx_destruct;
- (void)_commonInitWithElements:(id)arg1 label:(id)arg2 generator:(id)arg3;
- (id)_debugBriefDescription;
- (id)_debugDescriptionForScanningBehaviorTraits;
- (id)_debugDescriptionForTraits;
- (id)_debugFullDescriptionWithIndent:(id)arg1;
- (void)_generateGroupsIfNeeded;
- (id)_leafAXElementWithPosition:(long long)arg1;
- (void)_notifyGroupObserversDidTransferStateToGroup:(id)arg1;
- (void)_notifyGroupObserversWillTransferStateToGroup:(id)arg1;
- (id)_siblingOfChild:(id)arg1 inDirection:(BOOL)arg2 didWrap:(BOOL *)arg3;
- (void)_transferStateToGroup:(id)arg1;
- (id)ancestorPassingTest:(CDUnknownBlockType)arg1;
- (id)bottomMostLeafAXElement;
- (id)childrenPassingTest:(CDUnknownBlockType)arg1;
- (BOOL)containsNativeFocusElement;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)count;
- (void)dealloc;
- (id)debugFullDescription;
- (id)descendantWithNativeFocus;
- (id)descendantsPassingTest:(CDUnknownBlockType)arg1;
- (id)descriptionWithLocale:(id)arg1;
- (void)enumerateLeafDescendantsUsingBlock:(CDUnknownBlockType)arg1;
- (id)firstChild;
- (id)firstChildMatchingItem:(id)arg1;
- (id)firstChildPassingTest:(CDUnknownBlockType)arg1;
- (id)firstDescendantMatchingItem:(id)arg1;
- (id)firstDescendantPassingTest:(CDUnknownBlockType)arg1;
- (id)firstLeafDescendant;
- (id)groupByAppendingGroupable:(id)arg1;
- (id)groupByPrependingGroupable:(id)arg1;
- (id)groupByRemovingGroupable:(id)arg1;
- (id)groupByReplacingGroupable:(id)arg1 withGroupable:(id)arg2;
- (id)highestAncestorGroup;
- (id)initWithElements:(id)arg1 label:(id)arg2;
- (id)initWithGenerator:(id)arg1;
- (BOOL)isGroup;
- (BOOL)isKeyboardContainer;
- (BOOL)isKeyboardRow;
- (id)keyboardContainer;
- (id)keyboardContainerRows;
- (id)keyboardRow;
- (id)lastChild;
- (id)leftMostLeafAXElement;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)nextSiblingOfChild:(id)arg1 didWrap:(BOOL *)arg2;
- (id)objectAtIndex:(unsigned long long)arg1;
- (id)previousSiblingOfChild:(id)arg1 didWrap:(BOOL *)arg2;
- (void)registerGroupObserver:(id)arg1;
- (id)rightMostLeafAXElement;
- (id)topMostLeafAXElement;
- (void)unregisterAllGroupObservers;
- (void)unregisterGroupObserver:(id)arg1;

@end

