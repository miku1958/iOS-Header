//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIGestureRecognizer.h>

@class NSMapTable;
@protocol PKTextInputTouchDetectionGestureRecognizerDelegate;

@interface PKTextInputTouchDetectionGestureRecognizer : UIGestureRecognizer
{
    NSMapTable *__touches;
}

@property (strong, nonatomic) NSMapTable *_touches; // @synthesize _touches=__touches;
@property (weak, nonatomic) id<PKTextInputTouchDetectionGestureRecognizerDelegate> delegate; // @dynamic delegate;

- (void).cxx_destruct;
- (BOOL)canBePreventedByGestureRecognizer:(id)arg1;
- (BOOL)canPreventGestureRecognizer:(id)arg1;
- (id)init;
- (void)recognizeTouch;
- (void)recognizeTouch:(id)arg1 afterThreshold:(double)arg2;
- (void)reset;
- (BOOL)shouldBeRequiredToFailByGestureRecognizer:(id)arg1;
- (BOOL)shouldRequireFailureOfGestureRecognizer:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end

