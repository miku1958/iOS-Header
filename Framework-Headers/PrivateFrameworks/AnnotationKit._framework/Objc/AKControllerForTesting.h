//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AnnotationKit/AKController.h>

@class AKActionController, AKAttributeController, AKIntelligentSketchController, AKMainEventHandler, AKModelController, AKSignatureModelController, AKToolController, AKUndoController, UIView;
@protocol AKControllerDelegateProtocol;

@interface AKControllerForTesting : AKController
{
    id<AKControllerDelegateProtocol> _testingDelegate;
    AKModelController *_testingModelController;
    AKActionController *_testingActionController;
    AKToolController *_testingToolController;
    AKAttributeController *_testingAttributeController;
    AKUndoController *_testingUndoController;
    AKMainEventHandler *_testingMainEventHandler;
    UIView *_testingToolbarView;
    UIView *_testingOverlayView;
    AKIntelligentSketchController *_testingIntelligentSketchController;
    AKSignatureModelController *_testingSignatureModelController;
}

@property (strong) AKActionController *testingActionController; // @synthesize testingActionController=_testingActionController;
@property (strong) AKAttributeController *testingAttributeController; // @synthesize testingAttributeController=_testingAttributeController;
@property (strong) id<AKControllerDelegateProtocol> testingDelegate; // @synthesize testingDelegate=_testingDelegate;
@property (strong) AKIntelligentSketchController *testingIntelligentSketchController; // @synthesize testingIntelligentSketchController=_testingIntelligentSketchController;
@property (strong) AKMainEventHandler *testingMainEventHandler; // @synthesize testingMainEventHandler=_testingMainEventHandler;
@property (strong) AKModelController *testingModelController; // @synthesize testingModelController=_testingModelController;
@property (strong) UIView *testingOverlayView; // @synthesize testingOverlayView=_testingOverlayView;
@property (strong) AKSignatureModelController *testingSignatureModelController; // @synthesize testingSignatureModelController=_testingSignatureModelController;
@property (strong) AKToolController *testingToolController; // @synthesize testingToolController=_testingToolController;
@property (strong) UIView *testingToolbarView; // @synthesize testingToolbarView=_testingToolbarView;
@property (strong) AKUndoController *testingUndoController; // @synthesize testingUndoController=_testingUndoController;

+ (void)renderAnnotation:(id)arg1 inContext:(struct CGContext *)arg2;
- (void).cxx_destruct;
- (id)actionController;
- (id)attributeController;
- (id)delegate;
- (id)init;
- (id)intelligentSketchController;
- (id)mainEventHandler;
- (id)modelController;
- (id)overlayView;
- (void)performActionForSender:(id)arg1;
- (void)reloadVisibleToolbarItemIdentifiers;
- (void)setOverlayShouldPixelate:(BOOL)arg1;
- (id)signatureModelController;
- (id)toolController;
- (id)toolbarView;
- (id)undoController;
- (void)updateOverlayViewAtIndex:(unsigned long long)arg1;
- (BOOL)validateSender:(id)arg1;

@end

