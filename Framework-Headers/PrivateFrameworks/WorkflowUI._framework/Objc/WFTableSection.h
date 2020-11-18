//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WorkflowUI/WFTreeObserver-Protocol.h>

@class NSMutableArray, NSString, WFTableDataSource, WFTableSectionTreeNode;

@interface WFTableSection : NSObject <WFTreeObserver>
{
    NSString *_headerText;
    NSString *_footerText;
    WFTableSectionTreeNode *_node;
    NSMutableArray *_mutableItems;
}

@property (readonly, weak, nonatomic) WFTableDataSource *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) NSString *footerText; // @synthesize footerText=_footerText;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSString *headerText; // @synthesize headerText=_headerText;
@property (readonly, nonatomic) NSMutableArray *mutableItems; // @synthesize mutableItems=_mutableItems;
@property (readonly, nonatomic) WFTableSectionTreeNode *node; // @synthesize node=_node;
@property (readonly) Class superclass;

+ (id)section;
+ (id)sectionWithCellClass:(Class)arg1 representedObjects:(id)arg2 configurationBlock:(CDUnknownBlockType)arg3;
+ (id)sectionWithItems:(id)arg1;
+ (id)sectionWithStyle:(long long)arg1 representedObjects:(id)arg2 configurationBlock:(CDUnknownBlockType)arg3;
- (void).cxx_destruct;
- (void)applyItems:(id)arg1;
- (unsigned long long)currentIndex;
- (id)initWithItems:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)performBatchUpdates:(CDUnknownBlockType)arg1;
- (unsigned long long)recursiveChildrenCount;
- (id)tableView;
- (void)treeNode:(id)arg1 flattenedDescendentsDidChangeFrom:(id)arg2 to:(id)arg3 changeSource:(id)arg4;
- (void)updateCellForItem:(id)arg1;

@end
