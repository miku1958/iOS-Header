//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSMutableArray, NSString, TIMecabraEnvironmentContextWrapper;

@interface TIMecabraEnvironment : NSObject
{
    BOOL _shouldAdjustOnAnalyze;
    NSString *_leftDocumentContext;
    NSString *_rightDocumentContext;
    TIMecabraEnvironmentContextWrapper *_mecabraContextWrapper;
    NSMutableArray *_candidatesLeftOfCaret;
    NSMutableArray *_candidatesRightOfCaret;
    NSString *_leftDocumentContextCorrespondingToCandidates;
    NSString *_rightDocumentContextCorrespondingToCandidates;
    NSMutableArray *_candidatesToDelete;
    struct _NSRange _leftDocumentContextCorrespondingToCandidatesRange;
    struct _NSRange _rightDocumentContextCorrespondingToCandidatesRange;
}

@property (strong, nonatomic) NSMutableArray *candidatesLeftOfCaret; // @synthesize candidatesLeftOfCaret=_candidatesLeftOfCaret;
@property (strong, nonatomic) NSMutableArray *candidatesRightOfCaret; // @synthesize candidatesRightOfCaret=_candidatesRightOfCaret;
@property (strong, nonatomic) NSMutableArray *candidatesToDelete; // @synthesize candidatesToDelete=_candidatesToDelete;
@property (readonly, nonatomic) NSArray *contextCandidateSurfaces;
@property (readonly, nonatomic) NSDictionary *environmentDebuggingInformation;
@property (readonly, nonatomic) NSArray *inlineCandidateSurfaces;
@property (copy, nonatomic) NSString *leftDocumentContext; // @synthesize leftDocumentContext=_leftDocumentContext;
@property (copy, nonatomic) NSString *leftDocumentContextCorrespondingToCandidates; // @synthesize leftDocumentContextCorrespondingToCandidates=_leftDocumentContextCorrespondingToCandidates;
@property (nonatomic) struct _NSRange leftDocumentContextCorrespondingToCandidatesRange; // @synthesize leftDocumentContextCorrespondingToCandidatesRange=_leftDocumentContextCorrespondingToCandidatesRange;
@property (readonly, nonatomic) struct __Mecabra *mecabra;
@property (strong, nonatomic) TIMecabraEnvironmentContextWrapper *mecabraContextWrapper; // @synthesize mecabraContextWrapper=_mecabraContextWrapper;
@property (readonly, nonatomic) NSArray *rightCandidateSurfaces;
@property (copy, nonatomic) NSString *rightDocumentContext; // @synthesize rightDocumentContext=_rightDocumentContext;
@property (copy, nonatomic) NSString *rightDocumentContextCorrespondingToCandidates; // @synthesize rightDocumentContextCorrespondingToCandidates=_rightDocumentContextCorrespondingToCandidates;
@property (nonatomic) struct _NSRange rightDocumentContextCorrespondingToCandidatesRange; // @synthesize rightDocumentContextCorrespondingToCandidatesRange=_rightDocumentContextCorrespondingToCandidatesRange;
@property (nonatomic) BOOL shouldAdjustOnAnalyze; // @synthesize shouldAdjustOnAnalyze=_shouldAdjustOnAnalyze;
@property (nonatomic) int textContentType;

+ (void)loadMobileAssetContentsForInputModes:(id)arg1 assetContentTypes:(id)arg2 inMecabra:(struct __Mecabra *)arg3 onQueue:(id)arg4;
+ (void)loadMobileAssetContentsForInputModes:(id)arg1 inMecabra:(struct __Mecabra *)arg2 onQueue:(id)arg3;
+ (id)loadMobileAssetContentsWhenMobileAssetChangesForMecabra:(struct __Mecabra *)arg1 inputModes:(id)arg2 onQueue:(id)arg3 oldMobileAssetChangeListener:(id)arg4;
+ (void)removeMobileAssetListener:(id)arg1;
- (void).cxx_destruct;
- (void)acceptInlineCandidates;
- (void)addCandidateWithString:(id)arg1 toArray:(id)arg2;
- (BOOL)addNewCandidatesIfNecessary:(long long)arg1;
- (void)addPunctuationCandidateToContext:(id)arg1;
- (void)addStringCandidateToContext:(id)arg1;
- (void)addStringCandidateToContextInternal:(id)arg1;
- (void)adjustEnvironment:(long long)arg1;
- (void)adjustEnvironmentDirectly:(long long)arg1;
- (void)adjustEnvironmentOnAction:(long long)arg1;
- (void)analyzeCandidateContextWithSplit:(BOOL)arg1;
- (BOOL)analyzeString:(id)arg1 options:(unsigned long long)arg2;
- (unsigned long long)candidateIndex;
- (void)compareDocumentAndEnvironmentCandidates;
- (void)completelyCommitInlineCandidate:(void *)arg1;
- (void)createNewCandidatesFromDocumentContext;
- (void)declareEndOfSentence;
- (BOOL)documentContextIsEmpty;
- (id)initWithMecabraEngine:(struct __Mecabra *)arg1 language:(int)arg2;
- (void)insertCandidateWithString:(id)arg1 intoArray:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)partiallyCommitInlineCandidate:(void *)arg1;
- (BOOL)predictionAnalyzeWithOptions:(unsigned long long)arg1 maxNumberOfCandidates:(unsigned long long)arg2;
- (void)reset;
- (void)revertInlineCandidate;
- (void)revertLearningOfCandidateIfNecessary;
- (void)setAppContext:(id)arg1;
- (void)setCandidateIndex:(long long)arg1;
- (void)setGeometryModel:(void *)arg1 modelData:(struct __CFArray *)arg2;
- (void)setLeftDocumentContextInternal:(id)arg1;
- (void)setShuangpinType:(int)arg1;
- (void)updateCursorPosition;

@end

