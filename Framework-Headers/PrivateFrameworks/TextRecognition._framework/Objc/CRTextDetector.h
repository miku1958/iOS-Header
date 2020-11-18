//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CRTextDetector : NSObject
{
    BOOL _shouldCancel;
}

@property BOOL shouldCancel; // @synthesize shouldCancel=_shouldCancel;

- (id)charLevelNMSDetectFutharkTextInImage:(id)arg1 logIntermediateDetectorResult:(id *)arg2 options:(id)arg3;
- (id)charLevelNMSDetectTextInImage:(id)arg1 logIntermediateDetectorResult:(id *)arg2 options:(id)arg3;
- (id)detectCITextFeaturesInImage:(id)arg1 options:(id)arg2;
- (id)detectCITextFeaturesInImage:(id)arg1 withThresholdingAlgorithm:(long long)arg2 options:(id)arg3;
- (BOOL)detectTextCandidatesInImage:(id)arg1 atScale:(long long)arg2 forNumScales:(long long)arg3 toDocument:(struct Document *)arg4 options:(id)arg5;
- (id)detectTextInImage:(id)arg1 logIntermediateDetectorResult:(id *)arg2 options:(id)arg3;
- (BOOL)filterTextLines:(vector_7d154506 *)arg1 withIncludedCandidates:(vector_a7cf9eda *)arg2 options:(id)arg3;
- (BOOL)formInitialTextLines:(struct Document *)arg1 withIncludedCandidates:(vector_a7cf9eda *)arg2 options:(id)arg3;
- (id)generateOutputFeatures:(vector_7d154506 *)arg1 forImageSize:(Size__ffdea654)arg2 withIncludedCandidates:(const vector_a7cf9eda *)arg3 options:(id)arg4;
- (id)init;
- (unsigned long long)numScalesForImage:(id)arg1 options:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (BOOL)regroupTextLinesForChinese:(vector_7d154506 *)arg1 withIncludedCandidates:(const vector_a7cf9eda *)arg2 options:(id)arg3;

@end
