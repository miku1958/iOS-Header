//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIView.h>

@class UISelectionGrabberDot, UITextRangeView;

__attribute__((visibility("hidden")))
@interface UISelectionGrabber : UIView
{
    double m_screenScale;
    UISelectionGrabberDot *m_dotView;
    BOOL m_isDotted;
    BOOL m_activeFlattened;
    BOOL m_alertFlattened;
    BOOL m_navigationTransitionFlattened;
    BOOL m_animating;
    long long m_orientation;
    int _applicationDeactivationReason;
}

@property (nonatomic) BOOL activeFlattened; // @synthesize activeFlattened=m_activeFlattened;
@property (nonatomic) BOOL alertFlattened; // @synthesize alertFlattened=m_alertFlattened;
@property (nonatomic) BOOL animating; // @synthesize animating=m_animating;
@property (readonly, nonatomic) UITextRangeView *hostView;
@property (nonatomic) BOOL isDotted; // @synthesize isDotted=m_isDotted;
@property (nonatomic) BOOL navigationTransitionFlattened; // @synthesize navigationTransitionFlattened=m_navigationTransitionFlattened;
@property (nonatomic) long long orientation; // @synthesize orientation=m_orientation;

+ (id)_grabberDot;
- (void).cxx_destruct;
- (id)_dotView;
- (void)animateGrabberInWithCompletion:(CDUnknownBlockType)arg1;
- (void)animateGrabberOutWithCompletion:(CDUnknownBlockType)arg1;
- (BOOL)autoscrolled;
- (void)canExpandAfterAlert:(id)arg1;
- (void)canExpandAfterBecomeActive:(id)arg1;
- (void)canExpandAfterNavigationTransition:(id)arg1;
- (BOOL)clipDot:(struct CGRect)arg1;
- (void)dealloc;
- (void)didMoveToSuperview;
- (BOOL)dotIsVisibleInDocument:(struct CGRect)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (BOOL)inputViewIsChanging;
- (BOOL)isPointedDown;
- (BOOL)isPointedLeft;
- (BOOL)isPointedRight;
- (BOOL)isPointedUp;
- (BOOL)isRotating;
- (BOOL)isScaling;
- (BOOL)isScrolling;
- (BOOL)isVertical;
- (void)mustFlattenForAlert:(id)arg1;
- (void)mustFlattenForNavigationTransition:(id)arg1;
- (void)mustFlattenForResignActive:(id)arg1;
- (void)redrawDotForScale:(double)arg1;
- (void)removeFromSuperview;
- (void)saveDeactivationReason:(id)arg1;
- (BOOL)scroller:(id)arg1 fullyContainSelectionRect:(struct CGRect)arg2;
- (void)setFrame:(struct CGRect)arg1;
- (void)setHidden:(BOOL)arg1;
- (void)transitionDot:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateDot;
- (void)willMoveToWindow:(id)arg1;

@end

