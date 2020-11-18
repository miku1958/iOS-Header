//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoardHome/NSFastEnumeration-Protocol.h>
#import <SpringBoardHome/SBIconIndexMutableListObserver-Protocol.h>
#import <SpringBoardHome/SBIconIndexNode-Protocol.h>
#import <SpringBoardHome/SBTreeNode-Protocol.h>

@class NSArray, NSDate, NSHashTable, NSMutableArray, NSString, SBFolder, SBIcon, SBIconIndexMutableList;
@protocol SBIconListModelIconValidator, SBTreeNode;

@interface SBIconListModel : NSObject <SBIconIndexMutableListObserver, SBTreeNode, SBIconIndexNode, NSFastEnumeration>
{
    SBIconIndexMutableList *_icons;
    struct SBHIconGridSize _gridSize;
    NSHashTable *_nodeObservers;
    NSHashTable *_listObservers;
    NSMutableArray *_nodeObserverTransactionStack;
    BOOL _iconStateIsDirty;
    struct SBHIconGridSizeClassSizes _gridSizeClassSizes;
    id<SBTreeNode> _parent;
    NSString *_uniqueIdentifier;
    SBFolder *_folder;
    id<SBIconListModelIconValidator> _iconValidator;
    NSDate *_hiddenDate;
    unsigned long long _overflowSlotCount;
}

@property (readonly, nonatomic) NSArray *children;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) SBIcon *firstIcon;
@property (readonly, weak, nonatomic) SBFolder *folder; // @synthesize folder=_folder;
@property (readonly, nonatomic) struct SBHIconGridSize gridSize; // @synthesize gridSize=_gridSize;
@property (readonly) unsigned long long hash;
@property (nonatomic, getter=isHidden) BOOL hidden;
@property (copy, nonatomic) NSDate *hiddenDate; // @synthesize hiddenDate=_hiddenDate;
@property (readonly, nonatomic) struct SBHIconGridSizeClassSizes iconGridSizeClassSizes; // @synthesize iconGridSizeClassSizes=_gridSizeClassSizes;
@property (weak, nonatomic) id<SBIconListModelIconValidator> iconValidator; // @synthesize iconValidator=_iconValidator;
@property (copy, nonatomic) NSArray *icons;
@property (readonly, nonatomic) SBIcon *lastIcon;
@property (readonly, copy, nonatomic) NSString *layoutDescription;
@property (readonly, nonatomic) unsigned long long maxNumberOfIcons;
@property (readonly, nonatomic) unsigned long long numberOfIcons;
@property (readonly, nonatomic) unsigned long long numberOfNonPlaceholderIcons;
@property (readonly, nonatomic) unsigned long long numberOfUsedColumns;
@property (readonly, nonatomic) unsigned long long numberOfUsedRows;
@property (readonly, nonatomic) unsigned long long numberOfUsedSlots;
@property (nonatomic) unsigned long long overflowSlotCount; // @synthesize overflowSlotCount=_overflowSlotCount;
@property (weak, nonatomic) id<SBTreeNode> parent; // @synthesize parent=_parent;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;

+ (id)iconGridCellInfoForIcons:(id)arg1 gridSize:(struct SBHIconGridSize)arg2 gridSizeClassSizes:(struct SBHIconGridSizeClassSizes)arg3 options:(unsigned long long)arg4;
+ (id)movedIconsWithOriginalOrder:(id)arg1 newOrder:(id)arg2;
- (void).cxx_destruct;
- (id)_checkAndRemoveBouncedIconsAvoidingIcons:(id)arg1 ignoringTrailingIconCheck:(BOOL)arg2;
- (id)_clusterIconsForSizeClass:(unsigned long long)arg1 gridCellInfoOptions:(unsigned long long)arg2;
- (void)_coalesceChangesWithRequestID:(id)arg1 changeBlock:(CDUnknownBlockType)arg2;
- (id)_iconAtIndex:(unsigned long long)arg1;
- (unsigned long long)_iconIndexForMovingIcon:(id)arg1 toGridCellIndex:(unsigned long long)arg2 gridCellInfo:(id)arg3;
- (long long)_moveIcon:(id)arg1 byClusteringForSizeClass:(unsigned long long)arg2 toGridCellIndex:(unsigned long long)arg3 gridCellInfoOptions:(unsigned long long)arg4;
- (void)_notifyListObservers:(CDUnknownBlockType)arg1;
- (void)_unclusterIcons:(id)arg1 ofSizeClass:(unsigned long long)arg2 gridCellInfoOptions:(unsigned long long)arg3;
- (id)_updateModelByRepairingGapsIfNecessary;
- (BOOL)addIcon:(id)arg1;
- (BOOL)addIcon:(id)arg1 asDirty:(BOOL)arg2;
- (id)addIcons:(id)arg1;
- (void)addIconsOfClass:(Class)arg1 toSet:(id)arg2;
- (void)addIconsPassingTest:(CDUnknownBlockType)arg1 toSet:(id)arg2;
- (void)addListObserver:(id)arg1;
- (void)addNodeObserver:(id)arg1;
- (id)allowedIconsForByReplacingContentsWithIcons:(id)arg1;
- (id)allowedIconsForIcons:(id)arg1;
- (id)allowedIconsForIcons:(id)arg1 ignoringPlaceholders:(BOOL)arg2;
- (BOOL)allowsAddingIcon:(id)arg1;
- (BOOL)allowsAddingIcon:(id)arg1 ignoringPlaceholders:(BOOL)arg2;
- (BOOL)allowsAddingIconCount:(unsigned long long)arg1;
- (BOOL)allowsAddingIcons:(id)arg1;
- (BOOL)allowsAddingIcons:(id)arg1 ignoringPlaceholders:(BOOL)arg2;
- (void)ancestryDidChange;
- (unsigned long long)bestGridCellIndexForInsertingIcon:(id)arg1 atGridCellIndex:(unsigned long long)arg2;
- (BOOL)canBounceIcon:(id)arg1;
- (id)changeGridSizeClassOfContainedIcon:(id)arg1 toGridSizeClass:(unsigned long long)arg2 gridCellInfo:(id)arg3;
- (id)containedNodeIdentifiers;
- (BOOL)containsNodeIdentifier:(id)arg1;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)didAddIcon:(id)arg1;
- (void)didRemoveIcon:(id)arg1;
- (id)directlyContainedIconPassingTest:(CDUnknownBlockType)arg1;
- (id)directlyContainedIconWithIdentifier:(id)arg1;
- (BOOL)directlyContainsIcon:(id)arg1;
- (BOOL)directlyContainsIconWithIdentifier:(id)arg1;
- (BOOL)directlyContainsLeafIconWithIdentifier:(id)arg1;
- (void)enumerateFolderIconsUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateIconsUsingBlock:(CDUnknownBlockType)arg1;
- (unsigned long long)firstFreeSlotIndex;
- (BOOL)getIconGridRange:(struct SBHIconGridRange *)arg1 forGridCellIndex:(unsigned long long)arg2 gridCellInfo:(id)arg3;
- (id)gridCellInfoForGridSize:(struct SBHIconGridSize)arg1 options:(unsigned long long)arg2;
- (id)gridCellInfoWithOptions:(unsigned long long)arg1;
- (id)iconAtIndex:(unsigned long long)arg1;
- (id)iconGridCellInfoBySimulatingInsertionOfIcons:(id)arg1 ignoringPlaceholders:(BOOL)arg2 iconOrder:(id *)arg3;
- (id)iconsAtGridCellIndexes:(id)arg1 gridCellInfo:(id)arg2;
- (id)iconsAtIndexes:(id)arg1;
- (id)iconsForGridRange:(struct SBHIconGridRange)arg1 gridCellInfo:(id)arg2;
- (id)iconsInGridColumn:(unsigned long long)arg1 gridCellInfo:(id)arg2;
- (id)iconsInGridColumnRange:(struct _NSRange)arg1 gridCellInfo:(id)arg2;
- (id)iconsInGridRow:(unsigned long long)arg1 gridCellInfo:(id)arg2;
- (id)iconsOfClass:(Class)arg1;
- (id)iconsThatAreAllowedToBeContainedInIcons:(id)arg1;
- (unsigned long long)indexForIcon:(id)arg1;
- (id)indexPathsForContainedNodeIdentifier:(id)arg1 prefixPath:(id)arg2;
- (id)init;
- (id)initWithFolder:(id)arg1 gridSize:(struct SBHIconGridSize)arg2 gridSizeClassSizes:(struct SBHIconGridSizeClassSizes)arg3;
- (id)initWithFolder:(id)arg1 maxIconCount:(unsigned long long)arg2;
- (id)initWithUniqueIdentifier:(id)arg1 folder:(id)arg2 gridSize:(struct SBHIconGridSize)arg3 gridSizeClassSizes:(struct SBHIconGridSizeClassSizes)arg4;
- (id)insertIcon:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)insertIcon:(id)arg1 atIndex:(unsigned long long)arg2 options:(unsigned long long)arg3;
- (id)insertIcons:(id)arg1 atIndex:(unsigned long long)arg2 options:(unsigned long long)arg3;
- (BOOL)isAllowedToContainIcon:(id)arg1;
- (BOOL)isAllowedToContainIcons:(id)arg1;
- (BOOL)isEmpty;
- (BOOL)isEmptyIgnoringPlaceholders;
- (BOOL)isFull;
- (BOOL)isFullIncludingPlaceholders;
- (BOOL)isGridLayoutValid;
- (BOOL)isIconStateDirty;
- (id)layoutDescriptionWithOptions:(unsigned long long)arg1;
- (void)list:(id)arg1 didAddContainedNodeIdentifiers:(id)arg2;
- (void)list:(id)arg1 didRemoveContainedNodeIdentifiers:(id)arg2;
- (void)listDidMoveNodes:(id)arg1;
- (void)markIconStateClean;
- (void)markIconStateDirty;
- (void)moveContainedIcon:(id)arg1 toGridCellIndex:(unsigned long long)arg2 gridCellInfoOptions:(unsigned long long)arg3;
- (id)nodeDescriptionWithPrefix:(id)arg1;
- (id)nodeIdentifier;
- (id)nodesAlongIndexPath:(id)arg1 consumedIndexes:(unsigned long long)arg2;
- (unsigned long long)numberOfFreeSlots;
- (id)objectWithUniqueIdentifier:(id)arg1;
- (void)performChangesByClusteringForSizeClass:(unsigned long long)arg1 withGridCellInfoOptions:(unsigned long long)arg2 block:(CDUnknownBlockType)arg3;
- (void)performChangesByPreservingPositionsOfIconsLargerThanSizeClass:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2;
- (id)placeIcon:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)placeIcon:(id)arg1 atIndex:(unsigned long long)arg2 options:(unsigned long long)arg3 bumpedIcons:(id *)arg4;
- (void)removeAllIcons;
- (void)removeIcon:(id)arg1;
- (void)removeIconAtIndex:(unsigned long long)arg1;
- (void)removeIconAtIndex:(unsigned long long)arg1 options:(unsigned long long)arg2;
- (void)removeIconFromOtherPositionsInHierarchy:(id)arg1;
- (unsigned long long)removeIconFromOtherPositionsInHierarchy:(id)arg1 forInsertingAtIndex:(unsigned long long)arg2;
- (void)removeIcons:(id)arg1;
- (void)removeLastIcon;
- (void)removeListObserver:(id)arg1;
- (void)removeNodeObserver:(id)arg1;
- (id)reversedOrderLayoutDescription;
- (void)sortUsingComparator:(CDUnknownBlockType)arg1;
- (void)sortUsingSelector:(SEL)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (unsigned long long)willAddIcon:(id)arg1 atIndex:(unsigned long long)arg2;

@end
