//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AnnotationKit/NSTextStorageDelegate-Protocol.h>
#import <AnnotationKit/UITextViewDelegate-Protocol.h>

@class AKAnnotation, AKController, AKPageController, CALayer, NSString, NSTextStorage, NSUndoManager, UITextView, UIView;
@protocol AKTextAnnotationProtocol;

@interface AKTextEditorController : NSObject <NSTextStorageDelegate, UITextViewDelegate>
{
    BOOL _isInEndEditing;
    BOOL _isInAdjustAnnotationFrameToFitText;
    UITextView *_textView;
    AKAnnotation<AKTextAnnotationProtocol> *_annotation;
    AKController *_controller;
    AKPageController *_pageController;
    CALayer *_textViewMaskLayer;
    UIView *_textViewContainer;
    NSTextStorage *_textStorage;
    double _renderingTextStorageScaleFactor;
    double _modelToEditorScaleFactor;
    double _handleCompensatingScaleFactor;
    NSUndoManager *_textViewUndoManager;
}

@property (weak) AKAnnotation<AKTextAnnotationProtocol> *annotation; // @synthesize annotation=_annotation;
@property (weak) AKController *controller; // @synthesize controller=_controller;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property double handleCompensatingScaleFactor; // @synthesize handleCompensatingScaleFactor=_handleCompensatingScaleFactor;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL isEditing;
@property BOOL isInAdjustAnnotationFrameToFitText; // @synthesize isInAdjustAnnotationFrameToFitText=_isInAdjustAnnotationFrameToFitText;
@property BOOL isInEndEditing; // @synthesize isInEndEditing=_isInEndEditing;
@property double modelToEditorScaleFactor; // @synthesize modelToEditorScaleFactor=_modelToEditorScaleFactor;
@property (weak) AKPageController *pageController; // @synthesize pageController=_pageController;
@property double renderingTextStorageScaleFactor; // @synthesize renderingTextStorageScaleFactor=_renderingTextStorageScaleFactor;
@property (readonly) Class superclass;
@property (strong) NSTextStorage *textStorage; // @synthesize textStorage=_textStorage;
@property (strong) UITextView *textView; // @synthesize textView=_textView;
@property (strong) UIView *textViewContainer; // @synthesize textViewContainer=_textViewContainer;
@property (strong) CALayer *textViewMaskLayer; // @synthesize textViewMaskLayer=_textViewMaskLayer;
@property (strong) NSUndoManager *textViewUndoManager; // @synthesize textViewUndoManager=_textViewUndoManager;

- (void).cxx_destruct;
- (void)_adjustAnnotationFrameToFitText;
- (void)_adjustEditorToFitAnnotation:(id)arg1 withText:(id)arg2;
- (void)_beginEditingAnnotation:(id)arg1 withPageController:(id)arg2 selectAllText:(BOOL)arg3 withPencil:(BOOL)arg4;
- (void)_commitToModelWithoutEndingEditing;
- (struct CGRect)_editorFrameForTextBoundsInModel:(struct CGRect)arg1;
- (void)_endEditing;
- (void)_firstResponderDidChange:(id)arg1;
- (id)_newScaledPaths:(id)arg1 withScaleFactor:(double)arg2 aboutCenter:(struct CGPoint)arg3;
- (void)_performBlockOnMainThread:(CDUnknownBlockType)arg1;
- (void)_registerForFirstResponderNotifications;
- (void)_unregisterForFirstResponderNotifications;
- (void)_updateTextView:(id)arg1 withFrame:(struct CGRect)arg2 andOrientation:(long long)arg3 additionalRotation:(double)arg4;
- (void)beginEditingAnnotation:(id)arg1 withPageController:(id)arg2 selectAllText:(BOOL)arg3;
- (void)beginEditingAnnotation:(id)arg1 withPageController:(id)arg2 selectAllText:(BOOL)arg3 withPencil:(BOOL)arg4;
- (void)commitToModelWithoutEndingEditing;
- (void)dealloc;
- (void)endEditing;
- (id)initWithController:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (void)textViewDidEndEditing:(id)arg1;
- (void)updateForTextAttributeChange;

@end

