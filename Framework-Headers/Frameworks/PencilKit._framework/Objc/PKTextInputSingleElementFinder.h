//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PencilKit/PKTextInputElementsFinder.h>

@class NSSet, PKTextInputElement;

@interface PKTextInputSingleElementFinder : PKTextInputElementsFinder
{
    BOOL _finished;
    PKTextInputElement *_foundElement;
    NSSet *_candidateElements;
}

@property (readonly, nonatomic) NSSet *candidateElements; // @synthesize candidateElements=_candidateElements;
@property (readonly, nonatomic, getter=isFinished) BOOL finished; // @synthesize finished=_finished;
@property (readonly, nonatomic) PKTextInputElement *foundElement; // @synthesize foundElement=_foundElement;

- (void).cxx_destruct;
- (void)_finishSingleElementSearchIfReadyAtPosition:(struct CGPoint)arg1 coordinateSpace:(id)arg2 candidates:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)findSingleElementCloseToPosition:(struct CGPoint)arg1 coordinateSpace:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end
