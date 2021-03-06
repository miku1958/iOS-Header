//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSReading/TSDCanvasEditor-Protocol.h>

@class NSSet, NSString, TSDCanvasEditorHelper, TSDCanvasSelection, TSDInteractiveCanvasController, TSKSelection, TSPObject, UIView;
@protocol TSDArrangeInspectorDelegate, TSDCanvasSelection, TSDInlineFloatingWrapInspectorDelegate, TSDTextSelection;

@interface TSDCanvasEditor : NSObject <TSDCanvasEditor>
{
    TSDInteractiveCanvasController *mInteractiveCanvasController;
    TSDCanvasEditorHelper *mCanvasEditorHelper;
    TSDCanvasSelection *mSelection;
    NSObject<TSDArrangeInspectorDelegate> *mZOrderArranger;
    NSObject<TSDInlineFloatingWrapInspectorDelegate> *mInlineFloatingEditor;
    BOOL mPreventImageDataReplace;
    UIView *mInputView;
}

@property (readonly, nonatomic) TSDCanvasEditorHelper *canvasEditorHelper;
@property (readonly, nonatomic) TSKSelection<TSDCanvasSelection> *canvasSelection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSSet *infosForSelectAllInRoot;
@property (readonly, strong) UIView *inputAccessoryView;
@property (readonly, strong) UIView *inputView;
@property (readonly, nonatomic) TSDInteractiveCanvasController *interactiveCanvasController;
@property (readonly, nonatomic) struct _NSRange markedRange;
@property (readonly, nonatomic) TSPObject *modelForSelection;
@property (readonly, nonatomic) NSSet *selectedObjectsSupportingConnectionLineAttributes;
@property (readonly, nonatomic) NSSet *selectedObjectsSupportingEndpoints;
@property (readonly, nonatomic) NSSet *selectedObjectsSupportingFill;
@property (readonly, nonatomic) NSSet *selectedObjectsSupportingOpacity;
@property (readonly, nonatomic) NSSet *selectedObjectsSupportingReflection;
@property (readonly, nonatomic) NSSet *selectedObjectsSupportingResize;
@property (readonly, nonatomic) NSSet *selectedObjectsSupportingShadow;
@property (readonly, nonatomic) NSSet *selectedObjectsSupportingShrinkTextToFit;
@property (readonly, nonatomic) NSSet *selectedObjectsSupportingSmartShapeAttributes;
@property (readonly, nonatomic) NSSet *selectedObjectsSupportingStroke;
@property (readonly, nonatomic) NSSet *selectedObjectsSupportingTextInset;
@property (strong, nonatomic) TSKSelection *selection;
@property (strong, nonatomic) TSKSelection<TSDTextSelection> *selectionForArrowKeys;
@property (readonly) Class superclass;
@property (readonly, strong, nonatomic) TSKSelection<TSDTextSelection> *textInputSelection;
@property (readonly) BOOL wantsRawArrowKeyEvents;

+ (Class)canvasEditorHelperClass;
+ (id)canvasSelectionWithInfos:(id)arg1;
+ (id)canvasSelectionWithInfos:(id)arg1 andContainer:(id)arg2;
+ (BOOL)physicalKeyboardIsSender:(id)arg1;
+ (CDUnknownBlockType)spatialInfoComparator;
- (BOOL)allowAutomaticTextEditingToBeginWithDifferentEditor;
- (void)beginAutomaticTextEditingIfNeededForPoint:(struct CGPoint)arg1;
- (BOOL)canAddOrShowComment;
- (BOOL)canCopyStyle;
- (BOOL)canDeleteComment;
- (BOOL)canGroupDrawable:(id)arg1;
- (BOOL)canGroupWithSender:(id)arg1;
- (int)canPerformEditorAction:(SEL)arg1 withSender:(id)arg2;
- (BOOL)canSelectAllWithSender:(id)arg1;
- (BOOL)canUngroupWithSender:(id)arg1;
- (BOOL)canvasEditorCanCopyStyleWithSender:(id)arg1;
- (BOOL)canvasEditorCanCopyWithSender:(id)arg1;
- (BOOL)canvasEditorCanCutWithSender:(id)arg1;
- (BOOL)canvasEditorCanDeleteWithSender:(id)arg1;
- (BOOL)canvasEditorCanDuplicateWithSender:(id)arg1;
- (BOOL)canvasEditorCanGroupWithSender:(id)arg1;
- (BOOL)canvasEditorCanSelectAllWithSender:(id)arg1;
- (BOOL)canvasEditorCanUngroupWithSender:(id)arg1;
- (void)canvasInfosDidChange;
- (id)canvasSelectionWithInfos:(id)arg1;
- (id)canvasSelectionWithInfos:(id)arg1 andContainer:(id)arg2;
- (unsigned long long)charIndexByMovingPosition:(id)arg1 toBoundary:(long long)arg2 inDirection:(long long)arg3 preferPosition:(double *)arg4;
- (void)clearMarkedRange;
- (void)connectWithConnectionLine:(id)arg1;
- (void)copy:(id)arg1;
- (void)copyToPasteboard:(id)arg1 withSender:(id)arg2;
- (unsigned long long)countOfDrawables;
- (void)dealloc;
- (id)documentRoot;
- (id)drawables;
- (struct _NSRange)editRange;
- (Class)editorClassForSelection;
- (id)editorToPopToOnEndEditing;
- (void)endEditing;
- (void)extendSelectionLeft;
- (void)extendSelectionRight;
- (struct CGRect)firstRectForRange:(struct _NSRange)arg1;
- (id)initWithInteractiveCanvasController:(id)arg1;
- (void)insertBacktab:(id)arg1;
- (void)insertTab:(id)arg1;
- (void)insertText:(id)arg1;
- (BOOL)isCharIndex:(unsigned long long)arg1 withEolAffinity:(BOOL)arg2 atBoundary:(long long)arg3 inDirection:(long long)arg4;
- (BOOL)isCharIndex:(unsigned long long)arg1 withinTextUnit:(long long)arg2 inDirection:(long long)arg3;
- (BOOL)isRepSelectable:(id)arg1;
- (BOOL)isSelectedInfo:(id)arg1;
- (id)keyCommands;
- (id)p_filterNonDisplayedInfos:(id)arg1;
- (id)p_nextInfoInTabSequence:(int)arg1;
- (void)p_notifyRepsForSelectionChangeFrom:(id)arg1 to:(id)arg2;
- (id)p_spatiallySortedDrawables;
- (id)pasteboardController;
- (struct _NSRange)rangeOfWordEnclosingCharIndex:(unsigned long long)arg1 backward:(BOOL)arg2;
- (void)repWasCreated:(id)arg1;
- (void)replaceRange:(struct _NSRange)arg1 withText:(id)arg2;
- (long long)returnKeyType;
- (void)scrollToBeginningOfDocument:(id)arg1;
- (void)scrollToEndOfDocument:(id)arg1;
- (void)select:(id)arg1;
- (void)selectAll:(id)arg1;
- (id)selectionRectsForRange:(struct _NSRange)arg1;
- (id)selectionWithRange:(struct _NSRange)arg1;
- (void)setMarkedText:(id)arg1 selectedRange:(struct _NSRange)arg2;
- (void)setSelection:(id)arg1 withFlags:(unsigned long long)arg2;
- (void)setSelectionToInfo:(id)arg1;
- (void)setSelectionToInfos:(id)arg1;
- (void)setSelectionToRep:(id)arg1;
- (void)setSelectionWithRange:(struct _NSRange)arg1 endOfLine:(BOOL)arg2;
- (BOOL)shouldPushNewEditorForNewSelection;
- (BOOL)shouldUseAlternateSelectionHighlight;
- (void)teardown;
- (id)textColorAtCharIndex:(unsigned long long)arg1;
- (id)textFontAtCharIndex:(unsigned long long)arg1;
- (id)textInRange:(struct _NSRange)arg1;
- (BOOL)textIsVerticalAtCharIndex:(unsigned long long)arg1;
- (unsigned long long)textLength;
- (BOOL)wantsKeyboard;

@end

