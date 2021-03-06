//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIView.h>

@class CAShapeLayer;
@protocol UITextInput;

@interface _UITextDragCaretView : UIView
{
    UIView<UITextInput> *_view;
    CAShapeLayer *_mask;
    BOOL _rangesExcludeSelection;
}

@property (nonatomic) BOOL rangesExcludeSelection; // @synthesize rangesExcludeSelection=_rangesExcludeSelection;

- (void).cxx_destruct;
- (id)_caretColor;
- (struct CGRect)_configureMask:(id)arg1 withPath:(id)arg2;
- (void)_insertAtRangeOrPosition:(id)arg1 animations:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3 animated:(BOOL)arg4;
- (BOOL)_isRemoveAnimatesBackToCaret;
- (id)_maskForRects:(id)arg1;
- (void)_performUpdate:(id)arg1;
- (id)_rangeColor;
- (id)_rectsForRange:(id)arg1;
- (void)_updateToRangeOrPosition:(id)arg1 animations:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3 animated:(BOOL)arg4;
- (id)initWithTextInputView:(id)arg1;
- (void)insertAtPosition:(id)arg1;
- (void)insertAtPosition:(id)arg1 animations:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)insertAtRange:(id)arg1;
- (void)insertAtRange:(id)arg1 animations:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)insertAtRange:(id)arg1 animations:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3 animated:(BOOL)arg4;
- (void)remove;
- (void)removeWithAnimations:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeWithAnimations:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2 animated:(BOOL)arg3;
- (void)updateToPosition:(id)arg1;
- (void)updateToPosition:(id)arg1 animations:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updateToRange:(id)arg1;
- (void)updateToRange:(id)arg1 animations:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updateToRange:(id)arg1 animations:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3 animated:(BOOL)arg4;

@end

