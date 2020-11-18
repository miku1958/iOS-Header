//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ICDrawingAttachmentController, ICDrawingUndoCheckPoint, NSMutableArray, NSOperationQueue, NSUndoManager;

@interface ICDrawingUndoStack : NSObject
{
    ICDrawingAttachmentController *_drawingController;
    NSMutableArray *_undoStack;
    NSMutableArray *_redoStack;
    NSMutableArray *_checkPointCommands;
    NSOperationQueue *_operationQueue;
    NSUndoManager *_undoManager;
    ICDrawingUndoCheckPoint *_initialCheckPoint;
}

@property (strong, nonatomic) NSMutableArray *checkPointCommands; // @synthesize checkPointCommands=_checkPointCommands;
@property (readonly, weak, nonatomic) ICDrawingAttachmentController *drawingController; // @synthesize drawingController=_drawingController;
@property (strong, nonatomic) ICDrawingUndoCheckPoint *initialCheckPoint; // @synthesize initialCheckPoint=_initialCheckPoint;
@property (strong, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property (strong, nonatomic) NSMutableArray *redoStack; // @synthesize redoStack=_redoStack;
@property (strong, nonatomic) NSUndoManager *undoManager; // @synthesize undoManager=_undoManager;
@property (strong, nonatomic) NSMutableArray *undoStack; // @synthesize undoStack=_undoStack;
@property (readonly, nonatomic) unsigned long long undoStackDepth; // @dynamic undoStackDepth;

- (void).cxx_destruct;
- (void)addEraseUndoCommand:(id)arg1;
- (void)addUndoCommand:(id)arg1;
- (void)applyCommandFromStack:(id)arg1 toStack:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)checkIfNewCheckPointIsNeeded;
- (void)dealloc;
- (void)didAddCheckPoint;
- (void)didAddNewCommand:(id)arg1;
- (void)didRemoveCheckPoint;
- (void)didUndoOrRedo:(id)arg1;
- (id)findUndoCheckPointRenderCostOut:(double *)arg1 commandsAfterOut:(id *)arg2;
- (void)finishRedo:(id)arg1;
- (void)finishUndo:(id)arg1;
- (id)initWithDrawingController:(id)arg1;
- (void)performRedo;
- (void)performUndo;
- (void)redo;
- (void)reset;
- (void)setInitialImage:(struct CGImage *)arg1 andMask:(struct CGImage *)arg2 forCommands:(id)arg3;
- (void)undo;
- (void)undoManagerCommand:(id)arg1;

@end

