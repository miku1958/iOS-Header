//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowUI/WFLibraryResultsController.h>

@class NSMutableSet;
@protocol WFEditableLibraryResultsControllerDelegate;

@interface WFEditableLibraryResultsController : WFLibraryResultsController
{
    BOOL _editing;
    NSMutableSet *_selectedWorkflows;
}

@property (weak, nonatomic) id<WFEditableLibraryResultsControllerDelegate> delegate; // @dynamic delegate;
@property (nonatomic, getter=isEditing) BOOL editing; // @synthesize editing=_editing;
@property (readonly, nonatomic) NSMutableSet *selectedWorkflows; // @synthesize selectedWorkflows=_selectedWorkflows;

- (void).cxx_destruct;
- (BOOL)collectionView:(id)arg1 canMoveItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 moveItemAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (void)completedBatchUpdateForSection:(unsigned long long)arg1;
- (id)initWithWorkflows:(id)arg1 collectionView:(id)arg2 runCoordinator:(id)arg3;
- (void)markResultAtIndexPath:(id)arg1 asSelected:(BOOL)arg2;
- (unsigned long long)numberOfSelectedResults;
- (void)removeDeletedResultsFromSelection;
- (id)selectedResults;
- (void)updateCell:(id)arg1 withObject:(id)arg2 atIndexPath:(id)arg3;

@end
