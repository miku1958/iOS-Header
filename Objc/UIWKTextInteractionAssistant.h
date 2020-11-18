//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITextInteractionAssistant.h>

@class NSString, UILongPressGestureRecognizer, UITapGestureRecognizer, UITextChecker, _UITextServiceSession;

@interface UIWKTextInteractionAssistant : UITextInteractionAssistant
{
    long long _selectionOperation;
    _UITextServiceSession *_definitionSession;
    _UITextServiceSession *_learnSession;
    _UITextServiceSession *_shareSession;
    _UITextServiceSession *_lookupSession;
    UITextChecker *_textChecker;
    unsigned long long _options;
    struct CGRect _caretBeforeTap;
    NSString *_wordBeforeTap;
    UITapGestureRecognizer *_singleTapGesture;
    UILongPressGestureRecognizer *_loupeGesture;
}

@property (strong, nonatomic) UILongPressGestureRecognizer *loupeGesture; // @synthesize loupeGesture=_loupeGesture;
@property (readonly, strong, nonatomic) UITapGestureRecognizer *singleTapGesture; // @synthesize singleTapGesture=_singleTapGesture;

- (id)_asText;
- (BOOL)containerAllowsSelection;
- (BOOL)containerAllowsSelectionTintOnly;
- (BOOL)containerIsAtom;
- (BOOL)containerIsBrowserView;
- (BOOL)containerIsPlainStyleAtom;
- (void)dealloc;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)hideTextStyleOptions;
- (id)initWithView:(id)arg1;
- (void)legacyTwoFingerSingleTap:(id)arg1;
- (void)lookup:(id)arg1 fromRect:(struct CGRect)arg2;
- (void)loupeGestureWithState:(long long)arg1 atGesturePoint:(CDUnknownBlockType)arg2 shouldCancel:(BOOL *)arg3;
- (void)oneFingerDoubleTap:(id)arg1;
- (void)oneFingerTap:(id)arg1;
- (void)oneFingerTripleTap:(id)arg1;
- (void)rangeSelectionCanceled;
- (void)rangeSelectionEnded:(struct CGPoint)arg1;
- (void)rangeSelectionMoved:(struct CGPoint)arg1 withTouchPoint:(struct CGPoint)arg2;
- (void)rangeSelectionStarted:(struct CGPoint)arg1;
- (BOOL)requiresImmediateUpdate;
- (void)scheduleChineseTransliterationForText:(id)arg1;
- (void)scheduleReplacementsForText:(id)arg1;
- (void)scheduleReplacementsForText:(id)arg1 withOptions:(unsigned long long)arg2;
- (void)scheduleReplacementsWithOptions:(unsigned long long)arg1;
- (void)scrollSelectionToVisible;
- (void)selectAll:(id)arg1;
- (void)selectTextForReplacement:(id)arg1 withOptions:(unsigned long long)arg2;
- (void)selectWithTapGestureAt:(struct CGPoint)arg1 withGesture:(long long)arg2 withState:(long long)arg3;
- (void)selectWord;
- (void)selectionChanged;
- (void)selectionChangedWithGestureAt:(struct CGPoint)arg1 withGesture:(long long)arg2 withState:(long long)arg3;
- (void)selectionChangedWithGestureAt:(struct CGPoint)arg1 withGesture:(long long)arg2 withState:(long long)arg3 withFlags:(long long)arg4;
- (void)selectionChangedWithTouchAt:(struct CGPoint)arg1 withSelectionTouch:(long long)arg2;
- (void)selectionChangedWithTouchAt:(struct CGPoint)arg1 withSelectionTouch:(long long)arg2 withFlags:(long long)arg3;
- (BOOL)shouldTryReplacementsForText:(id)arg1 withOptions:(unsigned long long)arg2;
- (void)showDictionaryFor:(id)arg1 fromRect:(struct CGRect)arg2;
- (void)showReplacementsForText:(id)arg1 withOptions:(unsigned long long)arg2;
- (void)showShareSheetFor:(id)arg1 fromRect:(struct CGRect)arg2;
- (void)showTextServiceFor:(id)arg1 fromRect:(struct CGRect)arg2;
- (void)showTextStyleOptions;
- (void)tapAndAHalf:(id)arg1;
- (void)twoFingerRangedSelectGesture:(id)arg1;
- (void)updateSelectionWithPoint:(struct CGPoint)arg1;
- (void)updateWithMagnifierTerminalPoint:(BOOL)arg1;

@end

