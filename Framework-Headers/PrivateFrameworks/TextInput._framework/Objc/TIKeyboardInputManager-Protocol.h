//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TextInput/NSObject-Protocol.h>

@class NSString, TIKeyboardCandidate, TIKeyboardInput, TIKeyboardLayout, TIKeyboardState, TIKeyboardTouchEvent;

@protocol TIKeyboardInputManager <NSObject>
- (void)adjustPhraseBoundaryInForwardDirection:(BOOL)arg1 keyboardState:(TIKeyboardState *)arg2 completionHandler:(void (^)(TIKeyboardConfiguration *))arg3;
- (void)candidateRejected:(TIKeyboardCandidate *)arg1;
- (void)generateAutocorrectionsWithKeyboardState:(TIKeyboardState *)arg1 completionHandler:(void (^)(TIAutocorrectionList *))arg2;
- (void)generateCandidatesWithKeyboardState:(TIKeyboardState *)arg1 candidateRange:(struct _NSRange)arg2 completionHandler:(void (^)(TIKeyboardCandidateResultSet *))arg3;
- (void)generateRefinementsForCandidate:(TIKeyboardCandidate *)arg1 keyboardState:(TIKeyboardState *)arg2 completionHandler:(void (^)(TIAutocorrectionList *))arg3;
- (void)generateReplacementsForString:(NSString *)arg1 keyLayout:(TIKeyboardLayout *)arg2 continuation:(void (^)(NSArray *))arg3;
- (void)handleAcceptedCandidate:(TIKeyboardCandidate *)arg1 keyboardState:(TIKeyboardState *)arg2 completionHandler:(void (^)(TIKeyboardConfiguration *, NSString *))arg3;
- (void)handleKeyboardInput:(TIKeyboardInput *)arg1 keyboardState:(TIKeyboardState *)arg2 completionHandler:(void (^)(TIKeyboardOutput *, TIKeyboardConfiguration *))arg3;
- (void)lastAcceptedCandidateCorrected;
- (void)performHitTestForTouchEvent:(TIKeyboardTouchEvent *)arg1 keyboardState:(TIKeyboardState *)arg2 continuation:(void (^)(long long))arg3;
- (void)setOriginalInput:(NSString *)arg1;
- (void)skipHitTestForTouchEvent:(TIKeyboardTouchEvent *)arg1 keyboardState:(TIKeyboardState *)arg2;
- (void)syncToKeyboardState:(TIKeyboardState *)arg1 completionHandler:(void (^)(TIKeyboardConfiguration *))arg2;
- (void)textAccepted:(TIKeyboardCandidate *)arg1;
- (void)writeTypologyLogWithCompletionHandler:(void (^)(NSURL *))arg1;
@end

