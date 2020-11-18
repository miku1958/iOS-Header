//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBTouchTemplateGestureRecognizer.h>

@interface SBTouchTemplatePanGestureRecognizer : SBTouchTemplateGestureRecognizer
{
    BOOL _recognizesHorizontalPanning;
    BOOL _recognizesVerticalPanning;
}

@property (nonatomic) BOOL recognizesHorizontalPanning; // @synthesize recognizesHorizontalPanning=_recognizesHorizontalPanning;
@property (nonatomic) BOOL recognizesVerticalPanning; // @synthesize recognizesVerticalPanning=_recognizesVerticalPanning;

+ (id)defaultTemplates;
- (double)_arcCenter;
- (double)_arcSize;
- (struct CGPoint)_convertPortraitPoint:(struct CGPoint)arg1 toOrientation:(long long)arg2;
- (BOOL)_directionallyAcceptMotion;
- (BOOL)hasSignificantMotionToBegin;
- (double)incrementalGestureMotionForCandidate:(id)arg1 withTransformAnalyzerInfo:(id)arg2;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;

@end
