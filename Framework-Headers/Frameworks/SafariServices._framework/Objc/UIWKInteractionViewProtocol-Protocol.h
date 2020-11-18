//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSArray, NSAttributedString, NSString, UITextPlaceholder, UIView, UIWKDocumentRequest;

@protocol UIWKInteractionViewProtocol
- (void)_cancelLongPressGestureRecognizer;
- (void)applyAutocorrection:(NSString *)arg1 toString:(NSString *)arg2 withCompletionHandler:(void (^)(UIWKAutocorrectionRects *))arg3;
- (void)beginSelectionInDirection:(long long)arg1 completionHandler:(void (^)(BOOL))arg2;
- (void)changeSelectionWithGestureAt:(struct CGPoint)arg1 withGesture:(long long)arg2 withState:(long long)arg3;
- (void)changeSelectionWithTouchesFrom:(struct CGPoint)arg1 to:(struct CGPoint)arg2 withGesture:(long long)arg3 withState:(long long)arg4;
- (BOOL)hasMarkedText;
- (BOOL)hasSelectablePositionAtPoint:(struct CGPoint)arg1;
- (NSString *)markedText;
- (void)requestAutocorrectionContextWithCompletionHandler:(void (^)(UIWKAutocorrectionContext *))arg1;
- (void)requestAutocorrectionRectsForString:(NSString *)arg1 withCompletionHandler:(void (^)(UIWKAutocorrectionRects *))arg2;
- (void)selectPositionAtPoint:(struct CGPoint)arg1 completionHandler:(void (^)(void))arg2;
- (void)selectTextWithGranularity:(long long)arg1 atPoint:(struct CGPoint)arg2 completionHandler:(void (^)(void))arg3;
- (void)selectWordForReplacement;
- (NSString *)selectedText;
- (struct CGRect)textFirstRect;
- (BOOL)textInteractionGesture:(long long)arg1 shouldBeginAtPoint:(struct CGPoint)arg2;
- (struct CGRect)textLastRect;
- (void)updateSelectionWithExtentPoint:(struct CGPoint)arg1 completionHandler:(void (^)(BOOL))arg2;
- (void)updateSelectionWithExtentPoint:(struct CGPoint)arg1 withBoundary:(long long)arg2 completionHandler:(void (^)(BOOL))arg3;
- (NSArray *)webSelectionRects;

@optional
- (void)adjustSelectionWithDelta:(struct _NSRange)arg1 completionHandler:(void (^)(void))arg2;
- (NSAttributedString *)attributedMarkedText;
- (void)changeSelectionWithTouchAt:(struct CGPoint)arg1 withSelectionTouch:(long long)arg2 baseIsStart:(BOOL)arg3 withFlags:(long long)arg4;
- (void)clearSelection;
- (void)insertTextPlaceholderWithSize:(struct CGSize)arg1 completionHandler:(void (^)(UITextPlaceholder *))arg2;
- (double)inverseScale;
- (BOOL)isReplaceAllowed;
- (void)moveByOffset:(long long)arg1;
- (void)moveSelectionAtBoundary:(id)arg1 inDirection:(long long)arg2 completionHandler:(void (^)(void))arg3;
- (void)pasteWithCompletionHandler:(void (^)(void))arg1;
- (BOOL)pointIsNearMarkedText:(struct CGPoint)arg1;
- (void)removeAnnotation:(NSString *)arg1 forSelectionOffset:(long long)arg2 length:(unsigned long long)arg3;
- (void)removeTextPlaceholder:(UITextPlaceholder *)arg1 willInsertText:(BOOL)arg2 completionHandler:(void (^)(void))arg3;
- (void)replaceDictatedText:(NSString *)arg1 withText:(NSString *)arg2;
- (void)replaceSelectionOffset:(long long)arg1 length:(unsigned long long)arg2 withAnnotatedString:(NSAttributedString *)arg3 relativeReplacementRange:(struct _NSRange)arg4;
- (void)replaceText:(NSString *)arg1 withText:(NSString *)arg2;
- (void)requestDictationContext:(void (^)(NSString *, NSString *, NSString *))arg1;
- (void)requestDocumentContext:(UIWKDocumentRequest *)arg1 completionHandler:(void (^)(UIWKDocumentContext *))arg2;
- (void)requestRectsToEvadeForSelectionCommandsWithCompletionHandler:(void (^)(NSArray *))arg1;
- (void)selectPositionAtBoundary:(long long)arg1 inDirection:(long long)arg2 fromPoint:(struct CGPoint)arg3 completionHandler:(void (^)(void))arg4;
- (void)selectPositionAtPoint:(struct CGPoint)arg1 withContextRequest:(UIWKDocumentRequest *)arg2 completionHandler:(void (^)(UIWKDocumentContext *))arg3;
- (void)selectWordBackward;
- (BOOL)shouldAllowHidingSelectionCommands;
- (BOOL)shouldSuppressUpdateCandidateView;
- (BOOL)supportsTextSelectionWithCharacterGranularity;
- (struct CGRect)unobscuredContentRect;
- (UIView *)unscaledView;
- (void)willFinishIgnoringCalloutBarFadeAfterPerformingAction;
@end
