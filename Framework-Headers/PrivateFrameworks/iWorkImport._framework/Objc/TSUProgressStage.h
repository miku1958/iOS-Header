//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class TSUProgressContext;

__attribute__((visibility("hidden")))
@interface TSUProgressStage : NSObject
{
    double m_currentPosition;
    double m_totalSteps;
    double m_stepsInParent;
    double m_startInParent;
    double m_nextSubStageParentSize;
    TSUProgressStage *m_parentStage;
    TSUProgressContext *m_context;
}

- (void)advanceProgress:(double)arg1;
- (double)currentPosition;
- (void)dealloc;
- (id)description;
- (void)end;
- (id)initRootStageInContext:(id)arg1;
- (id)initWithSteps:(double)arg1 takingSteps:(double)arg2 inContext:(id)arg3;
- (double)nextSubStageParentSize;
- (double)overallProgress;
- (id)parentStage;
- (void)setNextSubStageParentSize:(double)arg1;
- (void)setProgress:(double)arg1;
- (void)setProgressPercentage:(double)arg1;

@end

