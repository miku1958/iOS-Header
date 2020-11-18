//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSMutableArray, UIResponder, UISelectionGrabber, UITextSelectionView, UITouch;
@protocol UITextInput;

__attribute__((visibility("hidden")))
@interface UITextRangeView : UIView
{
    UITextSelectionView *m_selectionView;
    UIResponder<UITextInput> *m_container;
    int m_mode;
    NSArray *m_rects;
    NSMutableArray *m_rectViews;
    UITouch *m_activeTouch;
    struct CGRect m_startEdge;
    struct CGRect m_endEdge;
    struct CGPoint m_basePoint;
    struct CGPoint m_extentPoint;
    struct CGPoint m_initialBasePoint;
    struct CGPoint m_initialExtentPoint;
    double m_initialDistance;
    struct CGPoint m_touchOffset;
    double m_firstMovedTime;
    UIView *m_rectContainerView;
    UISelectionGrabber *m_startGrabber;
    UISelectionGrabber *m_endGrabber;
    BOOL m_animateUpdate;
    BOOL m_baseIsStart;
    BOOL m_commandsWereShowing;
    BOOL m_inGesture;
    BOOL m_magnifying;
    BOOL m_scrolling;
    BOOL m_scaling;
    BOOL m_rotating;
    BOOL m_inputViewIsChanging;
    BOOL m_isClearingRange;
    BOOL m_shouldStayVisible;
}

@property (strong, nonatomic) UITouch *activeTouch; // @synthesize activeTouch=m_activeTouch;
@property (readonly, nonatomic) struct CGPoint activeTouchPoint;
@property (nonatomic) BOOL animateUpdate; // @synthesize animateUpdate=m_animateUpdate;
@property (readonly, nonatomic) BOOL autoscrolled;
@property (nonatomic) BOOL baseIsStart; // @synthesize baseIsStart=m_baseIsStart;
@property (nonatomic) struct CGPoint basePoint; // @synthesize basePoint=m_basePoint;
@property (nonatomic) BOOL commandsWereShowing; // @synthesize commandsWereShowing=m_commandsWereShowing;
@property (readonly, nonatomic) UIResponder<UITextInput> *container;
@property (nonatomic) struct CGRect endEdge; // @synthesize endEdge=m_endEdge;
@property (strong, nonatomic) UISelectionGrabber *endGrabber; // @synthesize endGrabber=m_endGrabber;
@property (nonatomic) struct CGPoint extentPoint; // @synthesize extentPoint=m_extentPoint;
@property (nonatomic) double firstMovedTime; // @synthesize firstMovedTime=m_firstMovedTime;
@property (nonatomic) BOOL inGesture; // @synthesize inGesture=m_inGesture;
@property (nonatomic) struct CGPoint initialBasePoint; // @synthesize initialBasePoint=m_initialBasePoint;
@property (nonatomic) double initialDistance; // @synthesize initialDistance=m_initialDistance;
@property (nonatomic) struct CGPoint initialExtentPoint; // @synthesize initialExtentPoint=m_initialExtentPoint;
@property (nonatomic) BOOL inputViewIsChanging; // @synthesize inputViewIsChanging=m_inputViewIsChanging;
@property (nonatomic) BOOL isClearingRange; // @synthesize isClearingRange=m_isClearingRange;
@property (nonatomic) BOOL isScrolling; // @synthesize isScrolling=m_scrolling;
@property (nonatomic) BOOL magnifying; // @synthesize magnifying=m_magnifying;
@property (nonatomic) int mode; // @synthesize mode=m_mode;
@property (strong, nonatomic) NSArray *rects; // @synthesize rects=m_rects;
@property (nonatomic) BOOL rotating; // @synthesize rotating=m_rotating;
@property (nonatomic) BOOL scaling; // @synthesize scaling=m_scaling;
@property (readonly, nonatomic) UITextSelectionView *selectionView;
@property (nonatomic) BOOL shouldStayVisible; // @synthesize shouldStayVisible=m_shouldStayVisible;
@property (nonatomic) struct CGRect startEdge; // @synthesize startEdge=m_startEdge;
@property (strong, nonatomic) UISelectionGrabber *startGrabber; // @synthesize startGrabber=m_startGrabber;
@property (nonatomic) struct CGPoint touchOffset; // @synthesize touchOffset=m_touchOffset;

- (void).cxx_destruct;
- (struct CGRect)_endEdgeHitRect;
- (BOOL)_endIsHorizontal;
- (struct CGRect)_selectionClipRect;
- (struct CGRect)_startEdgeHitRect;
- (BOOL)_startIsHorizontal;
- (struct CGPoint)applyTouchOffset:(struct CGPoint)arg1;
- (void)beginMagnifying;
- (void)cancelDelayedActions;
- (void)clearRangeAnimated:(BOOL)arg1;
- (struct CGPoint)convertFromMagnifierPoint:(struct CGPoint)arg1;
- (void)didRotate;
- (void)didScroll;
- (void)doneMagnifying;
- (id)initWithFrame:(struct CGRect)arg1 selectionView:(id)arg2;
- (void)inputViewDidChange;
- (void)inputViewWillChange;
- (struct CGPoint)magnifierPoint;
- (BOOL)pointCloserToEnd:(struct CGPoint)arg1 startEdge:(struct CGRect)arg2 endEdge:(struct CGRect)arg3;
- (BOOL)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)prepareForMagnification;
- (void)removeFromSuperview;
- (void)scaleDidChange;
- (void)scaleWillChange;
- (void)setMagnifierOrientation;
- (void)setTouchOffset:(struct CGPoint)arg1 touchPoint:(struct CGPoint)arg2;
- (void)startAnimating;
- (void)stopAnimating;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)updateBaseAndExtentPointsFromEdges;
- (void)updateBaseIsStartWithDocumentPoint:(struct CGPoint)arg1;
- (void)updateDots;
- (void)updateEdges;
- (void)updateGrabbers;
- (void)updateRectViews;
- (void)updateSelectionWithDocumentPoint:(struct CGPoint)arg1;
- (void)willRotate;
- (void)willScroll;

@end

