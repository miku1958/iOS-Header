//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, TIInputMode, TIKeyboardSecureCandidateRenderer;

@interface TIKeyboardInputManagerBase : NSObject
{
    BOOL _hasHandledInput;
    TIInputMode *_inputMode;
    TIKeyboardSecureCandidateRenderer *_secureCandidateRenderer;
}

@property (readonly, nonatomic) NSString *currentInputModeIdentifier;
@property (readonly, nonatomic) BOOL hasHandledInput; // @synthesize hasHandledInput=_hasHandledInput;
@property (readonly, nonatomic) TIInputMode *inputMode; // @synthesize inputMode=_inputMode;
@property (strong, nonatomic) TIKeyboardSecureCandidateRenderer *secureCandidateRenderer; // @synthesize secureCandidateRenderer=_secureCandidateRenderer;

- (void)addSynthesizedTouchToInput:(id)arg1;
- (void)adjustPhraseBoundaryInForwardDirection:(BOOL)arg1;
- (void)adjustPhraseBoundaryInForwardDirection:(BOOL)arg1 granularity:(int)arg2;
- (void)candidateRejected:(id)arg1;
- (void)clearHumanReadableTrace;
- (id)configurationPropertyList;
- (void)dealloc;
- (long long)deletionCountForString:(id)arg1;
- (id)generateAutocorrectionsWithKeyboardState:(id)arg1;
- (void)generateAutocorrectionsWithKeyboardState:(id)arg1 candidateRange:(struct _NSRange)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)generateCandidatesWithKeyboardState:(id)arg1 candidateRange:(struct _NSRange)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)generateRefinementsForCandidate:(id)arg1;
- (id)generateReplacementsForString:(id)arg1 keyLayout:(id)arg2;
- (id)handleAcceptedCandidate:(id)arg1 keyboardState:(id)arg2;
- (id)handleKeyboardInput:(id)arg1;
- (id)humanReadableTrace;
- (id)init;
- (id)initWithInputMode:(id)arg1;
- (BOOL)isHardwareKeyboardAutocorrectionEnabled;
- (id)keyboardConfiguration;
- (void)lastAcceptedCandidateCorrected;
- (long long)performHitTestForTouchEvent:(id)arg1 keyboardState:(id)arg2;
- (id)resourceInputModes;
- (void)resume;
- (void)setOriginalInput:(id)arg1;
- (void)skipHitTestForTouchEvent:(id)arg1 keyboardState:(id)arg2;
- (void)storeLanguageModelDynamicDataIncludingCache;
- (void)suspend;
- (void)syncToKeyboardState:(id)arg1;
- (void)textAccepted:(id)arg1 fromPredictiveInputBar:(BOOL)arg2;

@end

