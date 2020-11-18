//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <HomeUI/HUQuickControlInteractiveView-Protocol.h>

@class HUQuickControlStepperViewProfile, NSArray, NSNumber, NSString, UILongPressGestureRecognizer;
@protocol HUQuickControlViewInteractionDelegate;

@interface HUQuickControlStepperView : UIView <HUQuickControlInteractiveView>
{
    BOOL _userInteractionActive;
    id<HUQuickControlViewInteractionDelegate> _interactionDelegate;
    HUQuickControlStepperViewProfile *_profile;
    UIView *_backgroundView;
    NSArray *_segmentViews;
    NSArray *_separatorViews;
    NSNumber *_selectedSegmentIndex;
    UILongPressGestureRecognizer *_gestureRecognizer;
    double _accumulatedTouchDistance;
    NSNumber *_trackingSegmentIndex;
    struct CGPoint _lastTouchLocation;
}

@property (nonatomic) double accumulatedTouchDistance; // @synthesize accumulatedTouchDistance=_accumulatedTouchDistance;
@property (strong, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) UILongPressGestureRecognizer *gestureRecognizer; // @synthesize gestureRecognizer=_gestureRecognizer;
@property (readonly) unsigned long long hash;
@property (weak, nonatomic) id<HUQuickControlViewInteractionDelegate> interactionDelegate; // @synthesize interactionDelegate=_interactionDelegate;
@property (nonatomic) struct CGPoint lastTouchLocation; // @synthesize lastTouchLocation=_lastTouchLocation;
@property (copy, nonatomic) HUQuickControlStepperViewProfile *profile; // @synthesize profile=_profile;
@property (strong, nonatomic) id secondaryValue;
@property (strong, nonatomic) NSArray *segmentViews; // @synthesize segmentViews=_segmentViews;
@property (strong, nonatomic) NSNumber *selectedSegmentIndex; // @synthesize selectedSegmentIndex=_selectedSegmentIndex;
@property (strong, nonatomic) NSArray *separatorViews; // @synthesize separatorViews=_separatorViews;
@property (nonatomic) long long sizeSubclass;
@property (readonly) Class superclass;
@property (strong, nonatomic) NSNumber *trackingSegmentIndex; // @synthesize trackingSegmentIndex=_trackingSegmentIndex;
@property (nonatomic, getter=isUserInteractionActive) BOOL userInteractionActive; // @synthesize userInteractionActive=_userInteractionActive;
@property (strong, nonatomic) id value;

- (void).cxx_destruct;
- (void)_createSegmentAndSeparatorViews;
- (void)_handleGesture:(id)arg1;
- (void)_layoutSegmentViews;
- (BOOL)_shouldRequireMinimumDragDistanceForGestureRecognizer:(id)arg1;
- (void)_updateSegmentHighlightedState;
- (void)_updateUserInteractionActive:(BOOL)arg1 forFirstTouch:(BOOL)arg2;
- (void)beginUserInteractionWithFirstTouchGestureRecognizer:(id)arg1;
- (id)initWithProfile:(id)arg1;
- (void)layoutSubviews;

@end

