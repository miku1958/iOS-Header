//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CHTextInputQueryItem, NSString, PKTextInputElementContent, PKTextInputHandwritingShot, PKTextInputTargetState;
@protocol PKTextInputResultCommandDelegate;

@interface PKTextInputResultCommand : NSObject
{
    BOOL _resultedInTargetChange;
    BOOL _hasPendingUncommittedChanges;
    BOOL _destinationFrameForAnimationMightMove;
    BOOL __applyIntermediateChange;
    id<PKTextInputResultCommandDelegate> _delegate;
    long long _commandState;
    CHTextInputQueryItem *_queryItem;
    PKTextInputHandwritingShot *_handwritingShot;
    PKTextInputElementContent *_targetElementContent;
    PKTextInputTargetState *_initialInputTargetState;
    long long _immediateCommitType;
    PKTextInputTargetState *_finalInputTargetState;
    NSString *_committedText;
    long long _committedTokenColumnCount;
    NSString *_commitReason;
    PKTextInputTargetState *__inProgressInputTargetState;
    struct _NSRange _affectedRange;
}

@property (nonatomic) BOOL _applyIntermediateChange; // @synthesize _applyIntermediateChange=__applyIntermediateChange;
@property (strong, nonatomic) PKTextInputTargetState *_inProgressInputTargetState; // @synthesize _inProgressInputTargetState=__inProgressInputTargetState;
@property (nonatomic) struct _NSRange affectedRange; // @synthesize affectedRange=_affectedRange;
@property (nonatomic, setter=_setCommandState:) long long commandState; // @synthesize commandState=_commandState;
@property (copy, nonatomic) NSString *commitReason; // @synthesize commitReason=_commitReason;
@property (copy, nonatomic) NSString *committedText; // @synthesize committedText=_committedText;
@property (nonatomic) long long committedTokenColumnCount; // @synthesize committedTokenColumnCount=_committedTokenColumnCount;
@property (weak, nonatomic) id<PKTextInputResultCommandDelegate> delegate; // @synthesize delegate=_delegate;
@property (nonatomic) BOOL destinationFrameForAnimationMightMove; // @synthesize destinationFrameForAnimationMightMove=_destinationFrameForAnimationMightMove;
@property (copy, nonatomic) PKTextInputTargetState *finalInputTargetState; // @synthesize finalInputTargetState=_finalInputTargetState;
@property (readonly, nonatomic) PKTextInputHandwritingShot *handwritingShot; // @synthesize handwritingShot=_handwritingShot;
@property (nonatomic) BOOL hasPendingUncommittedChanges; // @synthesize hasPendingUncommittedChanges=_hasPendingUncommittedChanges;
@property (readonly, nonatomic) long long immediateCommitType; // @synthesize immediateCommitType=_immediateCommitType;
@property (copy, nonatomic) PKTextInputTargetState *initialInputTargetState; // @synthesize initialInputTargetState=_initialInputTargetState;
@property (readonly, nonatomic) CHTextInputQueryItem *queryItem; // @synthesize queryItem=_queryItem;
@property (nonatomic) BOOL resultedInTargetChange; // @synthesize resultedInTargetChange=_resultedInTargetChange;
@property (readonly, nonatomic) PKTextInputElementContent *targetElementContent; // @synthesize targetElementContent=_targetElementContent;

+ (id)_alternativesForTranscriptionAtColumn:(long long)arg1 textResult:(id)arg2 columnTopTranscription:(id)arg3;
+ (long long)_commitableTokenColumnCountForQueryItem:(id)arg1 previousQueryItem:(id)arg2 immediateCommitType:(long long)arg3 applyIntermediateChange:(BOOL)arg4 preferredUncommittedTokenColumnCount:(long long)arg5 commitReason:(id *)arg6;
+ (void)_getTextsToCommit:(id *)arg1 alternativesTable:(id *)arg2 uncommittedPendingText:(id *)arg3 fromCorrectionResult:(id)arg4 commitTokenColumnCount:(long long)arg5 forTargetElementContent:(id)arg6 replacementRange:(struct _NSRange)arg7;
+ (BOOL)_isAccidentalReplacementForQueryItem:(id)arg1 replacementRange:(struct _NSRange)arg2 handwritingShot:(id)arg3;
+ (id)_tokenColumnStringsForTopTranscriptionInTextResult:(id)arg1;
+ (id)_transcriptionForTokensAtColumn:(long long)arg1 row:(long long)arg2 textResult:(id)arg3;
- (void).cxx_destruct;
- (id)_activePreviewTextForUncommittedText:(id)arg1 replacementRange:(struct _NSRange)arg2;
- (void)_applyResultCommandPhase2;
- (void)_applyResultCommandPhase3WithCompletion:(CDUnknownBlockType)arg1;
- (void)_applySelectOrDeleteGestureOfType:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_applyTextReplacementWithCompletion:(CDUnknownBlockType)arg1;
- (long long)_characterLevelOperationLocationForCorrection:(id)arg1 committedTextLength:(long long)arg2 uncommittedPendingText:(id)arg3;
- (void)_clearPreviousActivePreviewIfNeededForCancellation:(BOOL)arg1;
- (void)_finishApplyingResultWithSuccess:(BOOL)arg1 cancelled:(BOOL)arg2;
- (void)_logResultWithNewInputTargetState:(id)arg1 cancelCommit:(BOOL)arg2;
- (void)_removeCommittedTextInsertionStrokes:(id)arg1 committedTextLength:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_removeStrokesForSliceIDs:(id)arg1 destinationRect:(struct CGRect)arg2;
- (void)_scheduleBecomeReadyAfterDelay:(double)arg1;
- (void)_showSystemCalloutIfNeededWithReferenceRange:(struct _NSRange)arg1;
- (id)_strokeSliceIDsToRemoveForCommittedTokenColumnCount:(long long)arg1 forceRemoveAll:(BOOL)arg2;
- (void)_updateInputTargetStateWithUncommittedPendingText:(id)arg1 activePreviewText:(id)arg2 committedTextLength:(long long)arg3 accumulatedCommitLength:(long long)arg4;
- (void)beginApplyingResultCommandWithInputTargetState:(id)arg1;
- (void)cancelDelayedCommand;
- (id)description;
- (id)initWithQueryItem:(id)arg1 handwritingShot:(id)arg2 immediateCommitType:(long long)arg3 applyAfterDelay:(double)arg4;
- (BOOL)isImmediateCommit;

@end
