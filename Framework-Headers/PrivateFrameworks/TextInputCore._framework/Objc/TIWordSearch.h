//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TextInputCore/TIKeyboardActivityObserving-Protocol.h>

@class NSCache, NSString, TIInputMode, TIMecabraEnvironment, TIMecabraWrapper, TIWordSearchOperationGetCandidates;

@interface TIWordSearch : NSObject <TIKeyboardActivityObserving>
{
    id _userDictionaryObserver;
    BOOL _autoCorrects;
    BOOL _shouldLearnAcceptedCandidate;
    TIInputMode *_inputMode;
    TIMecabraEnvironment *_mecabraEnvironment;
    TIMecabraWrapper *_mecabraWrapper;
    TIWordSearchOperationGetCandidates *_operation;
    NSCache *_candidatesCache;
}

@property BOOL autoCorrects; // @synthesize autoCorrects=_autoCorrects;
@property (strong, nonatomic) NSCache *candidatesCache; // @synthesize candidatesCache=_candidatesCache;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) TIInputMode *inputMode; // @synthesize inputMode=_inputMode;
@property (readonly) struct __Mecabra *mecabra;
@property (strong, nonatomic) TIMecabraEnvironment *mecabraEnvironment; // @synthesize mecabraEnvironment=_mecabraEnvironment;
@property (readonly, nonatomic) int mecabraLanguage;
@property (strong) TIMecabraWrapper *mecabraWrapper; // @synthesize mecabraWrapper=_mecabraWrapper;
@property (strong) TIWordSearchOperationGetCandidates *operation; // @synthesize operation=_operation;
@property BOOL shouldLearnAcceptedCandidate; // @synthesize shouldLearnAcceptedCandidate=_shouldLearnAcceptedCandidate;
@property (readonly) Class superclass;

+ (id)configureUserDictionaryObserver:(id)arg1 previousObserver:(id)arg2;
+ (id)mecabraLearningDictionaryDirectory;
+ (id)newMecabraWrapperWithType:(int)arg1 creationOptions:(unsigned long long)arg2;
+ (id)recipientRecords;
+ (id)sharedOperationQueue;
- (void)_addFacemarkCandidatesToResultSet:(id)arg1 forInput:(id)arg2;
- (void)adaptOfflineToParagraph:(id)arg1 adaptationContext:(id)arg2 timeStamp:(double)arg3;
- (BOOL)addFacemarkCandidatesToResultSet:(id)arg1 forInput:(id)arg2;
- (void)adjustEnvironmentOnAction:(long long)arg1;
- (id)cachedCandidatesForOperation:(id)arg1;
- (void)cancel;
- (id)candidatesCacheKeyForOperation:(id)arg1;
- (id)candidatesForOperation:(id)arg1;
- (void)clearCache;
- (void)clearLearningDictionary;
- (void)clearLeftDocumentContext;
- (void)clearObservers;
- (void)commitPunctuationSurface:(id)arg1;
- (void)commitSurface:(id)arg1;
- (void)completeOperationsInQueue;
- (void)contactStoreDidChange:(id)arg1;
- (void)dealloc;
- (void)declareEndOfSentence;
- (void)dynamicDictionariesRemoved:(id)arg1;
- (void)endInputSession;
- (void)flushDynamicData;
- (void)handleMemoryPressureLevel:(unsigned long long)arg1 excessMemoryInBytes:(unsigned long long)arg2;
- (id)initTIWordSearchWithInputMode:(id)arg1;
- (id)initTIWordSearchWithInputMode:(id)arg1 mecabraWrapper:(id)arg2;
- (BOOL)isCancelled;
- (void)keyboardActivityDidTransition:(id)arg1;
- (void)lastAcceptedCandidateCorrected;
- (unsigned long long)mecabraCreationOptions;
- (int)mecabraInputMethodType;
- (void)performAccept:(void *)arg1 isPartial:(BOOL)arg2;
- (void)performOperationAsync:(id)arg1;
- (void)performOperationAsync:(id)arg1 withBackgroundActivityAssertion:(BOOL)arg2;
- (void)releaseBackgroundActivityAssertion;
- (void)resetMecabraEnvironment;
- (void)resetPreviousWord;
- (void)saveLearningDictionary;
- (void)setLanguageModelAdaptationContext:(id)arg1;
- (void)setLanguageModelAdaptationContextWithClientIdentifier:(id)arg1 recipientIdentifier:(id)arg2;
- (void)setLeftDocumentContext:(id)arg1 rightDocumentContext:(id)arg2;
- (id)uncachedCandidatesForOperation:(id)arg1;
- (void)updateMecabraState;
- (void)updateUserWordEntries;

@end

