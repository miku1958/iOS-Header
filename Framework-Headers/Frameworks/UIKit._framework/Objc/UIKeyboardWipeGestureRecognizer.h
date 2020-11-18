//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIGestureRecognizer.h>

@class NSMutableArray, UITouch;

__attribute__((visibility("hidden")))
@interface UIKeyboardWipeGestureRecognizer : UIGestureRecognizer
{
    NSMutableArray *_endPoints;
    UITouch *candidateEndpoint;
}

@property (strong, nonatomic) UITouch *candidateEndpoint; // @synthesize candidateEndpoint;

- (void)dealloc;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)reset;
- (BOOL)segmentsLookLikeAWipe:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end
