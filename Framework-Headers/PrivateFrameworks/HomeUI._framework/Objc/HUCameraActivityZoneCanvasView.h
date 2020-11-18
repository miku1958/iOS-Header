//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class HMPoint, NSMutableArray, UIImageView;
@protocol HUCameraActivityZoneCanvasDelegate;

@interface HUCameraActivityZoneCanvasView : UIView
{
    BOOL _displaysInclusionZones;
    BOOL _editingActivityZone;
    id<HUCameraActivityZoneCanvasDelegate> _delegate;
    NSMutableArray *_activityZones;
    NSMutableArray *_currentActivityZone;
    UIImageView *_canvasView;
    long long _currentTouchPointIndex;
    HMPoint *_startingTouchPoint;
}

@property (readonly, nonatomic) NSMutableArray *activityZones; // @synthesize activityZones=_activityZones;
@property (strong, nonatomic) UIImageView *canvasView; // @synthesize canvasView=_canvasView;
@property (strong, nonatomic) NSMutableArray *currentActivityZone; // @synthesize currentActivityZone=_currentActivityZone;
@property (nonatomic) long long currentTouchPointIndex; // @synthesize currentTouchPointIndex=_currentTouchPointIndex;
@property (weak, nonatomic) id<HUCameraActivityZoneCanvasDelegate> delegate; // @synthesize delegate=_delegate;
@property (nonatomic) BOOL displaysInclusionZones; // @synthesize displaysInclusionZones=_displaysInclusionZones;
@property (nonatomic, getter=isEditingActivityZone) BOOL editingActivityZone; // @synthesize editingActivityZone=_editingActivityZone;
@property (readonly, nonatomic) BOOL isCreatingActivityZone;
@property (strong, nonatomic) HMPoint *startingTouchPoint; // @synthesize startingTouchPoint=_startingTouchPoint;

- (void).cxx_destruct;
- (void)_addTouchpointAtPoint:(struct CGPoint)arg1 inContext:(struct CGContext *)arg2 withRed:(double)arg3 green:(double)arg4 blue:(double)arg5;
- (void)_displayMenuForActivityZone:(id)arg1;
- (void)_drawPolygonWithMaskPath:(id)arg1;
- (void)_drawTouchPoints;
- (void)_editActivityZone:(id)arg1;
- (void)_finishEditingCurrentActivityZone;
- (void)_handleBeginForGesture:(id)arg1;
- (void)_handleChangeForGesture:(id)arg1;
- (void)_handleEndForGesture:(id)arg1;
- (id)_hmPointForTapPoint:(struct CGPoint)arg1;
- (struct CGPoint)_hmPointToCGPoint:(id)arg1;
- (struct CGPoint)_normalizedPointForPoint:(struct CGPoint)arg1;
- (void)_prepCurrentActivityZoneForDeselection;
- (void)_resetCanvasAndCurrentZone;
- (id)activityZoneContainingPoint:(struct CGPoint)arg1;
- (BOOL)canBecomeFirstResponder;
- (BOOL)canCreateActivityZone;
- (void)clearActivityZone;
- (void)createActivityZone;
- (BOOL)currentZonesIntersectPoint:(struct CGPoint)arg1;
- (BOOL)currentZonesIntersectSegmentFromPoint:(struct CGPoint)arg1 toPoint:(struct CGPoint)arg2;
- (void)didPan:(id)arg1;
- (void)didTap:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (BOOL)isValidPointInView:(struct CGPoint)arg1;
- (void)loadActivityZones:(id)arg1;
- (void)preventAttemptToMovePoint;
- (id)selectedActivityZoneAtPoint:(struct CGPoint)arg1;
- (void)updateAfterVideoBoundsChange;

@end
