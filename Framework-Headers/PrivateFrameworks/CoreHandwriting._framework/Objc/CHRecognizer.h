//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CHDrawing, NSCharacterSet, NSLocale, NSMutableIndexSet, NSString, NSURL;
@protocol OS_dispatch_queue;

@interface CHRecognizer : NSObject
{
    BOOL _saveDrawingUntilNextCandidateAccepted;
    int _recognitionType;
    int _recognitionMode;
    unsigned long long _maxRecognitionResultCount;
    NSCharacterSet *_activeCharacterSet;
    struct CHNeuralNetwork *_engine;
    struct CHNeuralNetwork *_freeformEngine;
    NSObject<OS_dispatch_queue> *_recognitionQueue;
    struct Network *_radicalClusterFST;
    struct Network *_formatGrammarFST;
    NSLocale *_locale;
    void *_languageModel;
    void *_characterLanguageModel;
    struct __Mecabra *_mecabra;
    void *_staticLexicon;
    void *_dynamicLexicon;
    struct _LXLexicon *_customLexicon;
    struct _CFBurstTrie *_ovsTrie;
    NSURL *_learningDictionaryURL;
    CHDrawing *_savedDrawing;
    NSString *_savedTop1CandidateString;
    CHDrawing *_cachedDrawing;
    struct VariantMap *_transliterationVariantMap;
    void **_icuTransliterator;
    unsigned long long _lastCharacterStrokeCount;
    NSMutableIndexSet *_lastCharacterStrokeIndexes;
    struct CGSize _minimumDrawingSize;
    map_cde2a89c _cachedResults;
}

@property (strong, nonatomic) NSCharacterSet *activeCharacterSet; // @synthesize activeCharacterSet=_activeCharacterSet;
@property (copy, nonatomic) CHDrawing *cachedDrawing; // @synthesize cachedDrawing=_cachedDrawing;
@property (nonatomic) map_cde2a89c cachedResults; // @synthesize cachedResults=_cachedResults;
@property (nonatomic) void *characterLanguageModel; // @synthesize characterLanguageModel=_characterLanguageModel;
@property (nonatomic) struct _LXLexicon *customLexicon; // @synthesize customLexicon=_customLexicon;
@property (nonatomic) void *dynamicLexicon; // @synthesize dynamicLexicon=_dynamicLexicon;
@property (nonatomic) struct CHNeuralNetwork *engine; // @synthesize engine=_engine;
@property (nonatomic) struct Network *formatGrammarFST; // @synthesize formatGrammarFST=_formatGrammarFST;
@property (nonatomic) struct CHNeuralNetwork *freeformEngine; // @synthesize freeformEngine=_freeformEngine;
@property (nonatomic) void **icuTransliterator; // @synthesize icuTransliterator=_icuTransliterator;
@property (nonatomic) void *languageModel; // @synthesize languageModel=_languageModel;
@property (nonatomic) unsigned long long lastCharacterStrokeCount; // @synthesize lastCharacterStrokeCount=_lastCharacterStrokeCount;
@property (strong, nonatomic) NSMutableIndexSet *lastCharacterStrokeIndexes; // @synthesize lastCharacterStrokeIndexes=_lastCharacterStrokeIndexes;
@property (strong, nonatomic) NSURL *learningDictionaryURL; // @synthesize learningDictionaryURL=_learningDictionaryURL;
@property (nonatomic) NSLocale *locale; // @synthesize locale=_locale;
@property (nonatomic) unsigned long long maxRecognitionResultCount; // @synthesize maxRecognitionResultCount=_maxRecognitionResultCount;
@property (nonatomic) struct __Mecabra *mecabra; // @synthesize mecabra=_mecabra;
@property (nonatomic) struct CGSize minimumDrawingSize; // @synthesize minimumDrawingSize=_minimumDrawingSize;
@property (nonatomic) struct _CFBurstTrie *ovsTrie; // @synthesize ovsTrie=_ovsTrie;
@property (nonatomic) struct Network *radicalClusterFST; // @synthesize radicalClusterFST=_radicalClusterFST;
@property (nonatomic) int recognitionMode; // @synthesize recognitionMode=_recognitionMode;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *recognitionQueue; // @synthesize recognitionQueue=_recognitionQueue;
@property (nonatomic) int recognitionType; // @synthesize recognitionType=_recognitionType;
@property (nonatomic) BOOL saveDrawingUntilNextCandidateAccepted; // @synthesize saveDrawingUntilNextCandidateAccepted=_saveDrawingUntilNextCandidateAccepted;
@property (copy, nonatomic) CHDrawing *savedDrawing; // @synthesize savedDrawing=_savedDrawing;
@property (copy, nonatomic) NSString *savedTop1CandidateString; // @synthesize savedTop1CandidateString=_savedTop1CandidateString;
@property (nonatomic) void *staticLexicon; // @synthesize staticLexicon=_staticLexicon;
@property (nonatomic) struct VariantMap *transliterationVariantMap; // @synthesize transliterationVariantMap=_transliterationVariantMap;

+ (double)_computeEditPenalizationFromString:(id)arg1 toReferenceString:(id)arg2 withSuffix:(id)arg3 withCaseSensitivity:(BOOL)arg4 withFirstLetterCaseSensitivity:(BOOL)arg5 withDiacriticSensitivity:(BOOL)arg6 withDiacriticsCharSet:(id)arg7 withConsumableStrokesCharSet:(id)arg8 outputSuffix:(id *)arg9 lexiconExtraCharacters:(id *)arg10 firstLetterCaseFlipped:(BOOL *)arg11;
+ (unsigned long long)_decodeTempDelayedSegmentID:(unsigned long long)arg1;
+ (unsigned long long)_encodeTempDelayedSegmentID:(unsigned long long)arg1;
+ (id)wordsForCustomLexicon;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_adjustCandidatesForConfusableCharacters:(vector_06f11b7b *)arg1;
- (void)_adjustResultsForConfusableCharacters:(id)arg1;
- (id)_alternativeInterpretationsForString:(id)arg1;
- (id)_applySentenceTransliterationCandidates:(unsigned short *)arg1 codesLen:(int)arg2 codesMax:(int)arg3;
- (void)_applyTransliterationAndSyntheticCandidates:(vector_06f11b7b *)arg1;
- (void)_buildCustomLexiconFromWords:(id)arg1;
- (double)_calculateJointWordProbabilityForString:(id)arg1 withPatterns:(id)arg2;
- (id)_extractSubStrokeSegmentsFromSegments:(id)arg1 withDelayedStrokeSegments:(id *)arg2 fromDelayedSegmentIDs:(vector_eb9481f9)arg3;
- (void)_filterNonHumanFriendlyCandidates:(id)arg1;
- (BOOL)_isLocaleSupported:(id)arg1;
- (BOOL)_isOVSString:(id)arg1;
- (void)_loadEngineModel;
- (void)_loadMecabraIfNeeded;
- (id)_performMultipleCharacterRecognition:(id)arg1 options:(id)arg2 shouldCancel:(CDUnknownBlockType)arg3;
- (void)_prepareCHCharacterLanguageModel;
- (void)_prepareLanguageModel;
- (void)_prepareOVSTrie;
- (void)_prepareStaticLexicon;
- (void)_prepareTransliterationVariantMap;
- (void)_removeOVSResults:(id)arg1 withHistory:(id)arg2;
- (void)_rescoreCandidatesWithLanguageModel:(vector_06f11b7b *)arg1 history:(id)arg2;
- (BOOL)_shouldCapitalizeGivenHistory:(id)arg1;
- (id)_subStrokeSegmentationPointsForDrawing:(id)arg1;
- (unsigned int)_tokenIDForUNKCharacterString:(id)arg1;
- (id)_transliterationVariantsForString:(id)arg1;
- (BOOL)_updateResults:(id)arg1 string:(id)arg2 score:(double)arg3 lexicalEntry:(BOOL)arg4 patternEntry:(BOOL)arg5;
- (id)_wordLMLexiconCorrectionForString:(id)arg1 withLexicon:(void *)arg2 consumableStrokesSet:(id)arg3 resultWordID:(unsigned int *)arg4;
- (id)_wordLXLexiconCorrectionForString:(id)arg1 withLexicon:(struct _LXLexicon *)arg2 consumableStrokesSet:(id)arg3 resultWordID:(unsigned int *)arg4;
- (id)bestNetworkPaths:(struct Network *)arg1 from:(unsigned long long)arg2 to:(unsigned long long)arg3 count:(unsigned long long)arg4 staticLexiconCursor:(void *)arg5 customLexiconCursor:(struct _LXCursor *)arg6 patternCursor:(struct PatternGraph *)arg7 history:(id)arg8 activeHistoryRange:(struct _NSRange)arg9 mecabraIDs:(vector_12bd641b *)arg10 numExpectedDelayedStrokes:(unsigned long long)arg11;
- (void)candidateAccepted:(void *)arg1;
- (void)candidatesCleared;
- (id)characterSetForStrings:(id)arg1;
- (id)chatBubbleCandidateResultForDrawing:(id)arg1 candidate:(struct CHCandidateResult *)arg2;
- (vector_de520796)completionsForCandidate:(id)arg1 candidateContext:(id)arg2 prefix:(id)arg3 option:(unsigned long long)arg4;
- (vector_de520796)completionsForCandidate:(id)arg1 prefix:(id)arg2 option:(unsigned long long)arg3;
- (void)dealloc;
- (id)defaultPunctuationResultsForRecognitionType:(int)arg1 withStrokeCount:(unsigned long long)arg2;
- (id)ellipseCandidateResultForDrawing:(id)arg1 candidate:(struct CHCandidateResult *)arg2;
- (void)endpointsForDrawing:(id)arg1 startLocation:(struct CGPoint *)arg2 endLocation:(struct CGPoint *)arg3;
- (struct CGSize)getMinimumDrawingSize;
- (id)initWithType:(int)arg1 mode:(int)arg2;
- (id)initWithType:(int)arg1 mode:(int)arg2 learningDictionaryURL:(id)arg3;
- (id)initWithType:(int)arg1 mode:(int)arg2 locale:(struct __CFLocale *)arg3;
- (id)initWithType:(int)arg1 mode:(int)arg2 locale:(struct __CFLocale *)arg3 learningDictionaryURL:(id)arg4;
- (BOOL)isMecabraRareEntry:(id)arg1;
- (BOOL)isOVSString:(id)arg1;
- (id)lineCandidateResultForDrawing:(id)arg1 candidate:(struct CHCandidateResult *)arg2 rejectionResult:(id *)arg3;
- (void)logCandidateIfAppropriate:(void *)arg1;
- (id)manhattanLineCandidateResultForDrawing:(id)arg1 candidate:(struct CHCandidateResult *)arg2 rejectionResult:(id *)arg3;
- (id)obfuscateString:(id)arg1;
- (id)outlineArrowCandidateResultForDrawing:(id)arg1 candidate:(struct CHCandidateResult *)arg2;
- (id)pentagonCandidateResultForDrawing:(id)arg1 candidate:(struct CHCandidateResult *)arg2;
- (id)postProcessLatticePaths:(const vector_7a3f6ffc *)arg1 history:(id)arg2 activeHistoryRange:(struct _NSRange)arg3;
- (id)postProcessMultiWordsLatticePaths:(const vector_7a3f6ffc *)arg1 withMaximumResults:(unsigned long long)arg2;
- (id)recognitionResultsForDrawing:(id)arg1 options:(id)arg2;
- (id)recognitionResultsForDrawing:(id)arg1 options:(id)arg2 shouldCancel:(CDUnknownBlockType)arg3;
- (id)recognitionResultsForMultipleCharacterDrawing:(id)arg1 sortedStrokeIndices:(vector_eb9481f9 *)arg2 subStrokeSegments:(id)arg3 delayedSubStrokeSegments:(id)arg4 network:(struct Network *)arg5 boundsAtNode:(vector_ea45b3ba *)arg6 options:(id)arg7 shouldCancel:(CDUnknownBlockType)arg8;
- (id)recognitionResultsForSingleCharacterDrawing:(id)arg1 options:(id)arg2;
- (id)recognitionResultsForSketchDrawing:(id)arg1 options:(id)arg2;
- (id)rectangleCandidateResultForDrawing:(id)arg1 candidate:(struct CHCandidateResult *)arg2;
- (void)releaseLMResources;
- (id)sketchCodeForDescription:(id)arg1;
- (id)sketchDescriptionForCode:(int)arg1;
- (id)starCandidateResultForDrawing:(id)arg1 candidate:(struct CHCandidateResult *)arg2;
- (id)strokeIndexesForLastCharacter;
- (id)supportedCharacterSet;
- (id)supportedStrings;
- (id)transliterationVariantsForString:(id)arg1;
- (id)triangleCandidateResultForDrawing:(id)arg1 candidate:(struct CHCandidateResult *)arg2;
- (void)updateAddressBookLexicon:(id)arg1;
- (void)updateUserDictionaryLexicon:(id)arg1;

@end

