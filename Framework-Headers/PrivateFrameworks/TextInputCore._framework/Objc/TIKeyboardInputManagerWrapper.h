//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TextInput/TIKeyboardInputManagerStub.h>

@class TIKeyboardInputManagerBase;
@protocol TIKeyboardInputManagerLogging;

@interface TIKeyboardInputManagerWrapper : TIKeyboardInputManagerStub
{
    TIKeyboardInputManagerBase *_inputManager;
    id<TIKeyboardInputManagerLogging> _logger;
}

@property (strong, nonatomic) TIKeyboardInputManagerBase *inputManager; // @synthesize inputManager=_inputManager;
@property (strong, nonatomic) id<TIKeyboardInputManagerLogging> logger; // @synthesize logger=_logger;

- (void)_updateKeyboardOutput:(id)arg1 withSecureCandidatePayload:(id)arg2;
- (id)acceptSecureCandidate:(id)arg1 keyboardState:(id)arg2;
- (void)adjustPhraseBoundaryInForwardDirection:(BOOL)arg1 granularity:(int)arg2 keyboardState:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)adjustPhraseBoundaryInForwardDirection:(BOOL)arg1 keyboardState:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)candidateRejected:(id)arg1;
- (void)dealloc;
- (void)generateAutocorrectionsWithKeyboardState:(id)arg1 candidateRange:(struct _NSRange)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)generateAutocorrectionsWithKeyboardState:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)generateCandidatesWithKeyboardState:(id)arg1 candidateRange:(struct _NSRange)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)generateRefinementsForCandidate:(id)arg1 keyboardState:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)generateReplacementsForString:(id)arg1 keyLayout:(id)arg2 continuation:(CDUnknownBlockType)arg3;
- (void)handleAcceptedCandidate:(id)arg1 keyboardState:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)handleKeyboardInput:(id)arg1 keyboardState:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)handleKeyboardState:(id)arg1;
- (id)init;
- (void)lastAcceptedCandidateCorrected;
- (void)performHitTestForTouchEvent:(id)arg1 keyboardState:(id)arg2 continuation:(CDUnknownBlockType)arg3;
- (void)setOriginalInput:(id)arg1;
- (void)skipHitTestForTouchEvent:(id)arg1 keyboardState:(id)arg2;
- (void)syncToKeyboardState:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)textAccepted:(id)arg1;
- (void)writeTypologyLogWithCompletionHandler:(CDUnknownBlockType)arg1;

@end

