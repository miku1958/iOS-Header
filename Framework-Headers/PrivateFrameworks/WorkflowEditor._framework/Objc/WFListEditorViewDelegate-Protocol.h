//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowEditor/NSObject-Protocol.h>

@class WFListEditorDeletionConfirmation, WFListEditorUpdateItem, WFListEditorView;

@protocol WFListEditorViewDelegate <NSObject>
- (void)listEditorView:(WFListEditorView *)arg1 didUpdateWithItem:(WFListEditorUpdateItem *)arg2;

@optional
- (void)listEditorView:(WFListEditorView *)arg1 needsConfirmationForDeletion:(WFListEditorDeletionConfirmation *)arg2;
@end

