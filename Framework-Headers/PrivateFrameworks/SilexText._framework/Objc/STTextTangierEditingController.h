//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/TSWPEditingController.h>

@interface STTextTangierEditingController : TSWPEditingController
{
    BOOL _startingInitialSelectionDrag;
}

@property (nonatomic) BOOL startingInitialSelectionDrag; // @synthesize startingInitialSelectionDrag=_startingInitialSelectionDrag;

- (BOOL)canAddOrShowComment;
- (BOOL)canHandleGesture:(id)arg1;
- (int)canPerformEditorAction:(SEL)arg1 withSender:(id)arg2;
- (id)editingReps;
- (id)editorKeyboardLanguage;
- (id)extraMenuItems;
- (BOOL)handleGesture:(id)arg1;
- (BOOL)isParagraphModeWithSelection:(id)arg1 onStorage:(id)arg2;
- (unsigned int)knobTrackingTapCount;
- (void)lookup:(id)arg1;
- (void)lookupAction:(id)arg1;
- (void)tappedOnKnob:(id)arg1;
- (BOOL)wantsCaret;
- (BOOL)wantsKeyboard;

@end

