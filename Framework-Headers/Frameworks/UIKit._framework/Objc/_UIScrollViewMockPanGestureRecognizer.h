//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class UIScrollViewPanGestureRecognizer;

__attribute__((visibility("hidden")))
@interface _UIScrollViewMockPanGestureRecognizer : NSObject
{
    struct CGPoint _translation;
    struct CGPoint _velocity;
    long long _state;
    UIScrollViewPanGestureRecognizer *_gestureRecognizer;
}

@property (strong, nonatomic) UIScrollViewPanGestureRecognizer *gestureRecognizer; // @synthesize gestureRecognizer=_gestureRecognizer;
@property (nonatomic) long long state;

- (void).cxx_destruct;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (struct CGPoint)locationInView:(id)arg1;
- (void)setTranslation:(struct CGPoint)arg1 inView:(id)arg2;
- (void)simulateTranslation:(struct CGPoint)arg1 velocity:(struct CGPoint)arg2;
- (struct CGPoint)translationInView:(id)arg1;
- (struct CGPoint)velocityInView:(id)arg1;

@end
