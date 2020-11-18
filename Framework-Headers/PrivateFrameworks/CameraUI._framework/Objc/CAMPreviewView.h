//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class AVCaptureVideoPreviewLayer, CAMFocusIndicatorView, CAMGridView, CAMSubjectIndicatorView, CAMVideoPreviewView, NSDictionary, NSMutableDictionary, UILabel;
@protocol CAMPreviewViewSubjectIndicatorDelegate;

@interface CAMPreviewView : UIView
{
    int __exposureBiasSide;
    CAMVideoPreviewView *_videoPreviewView;
    UIView *_indicatorContainerView;
    CAMFocusIndicatorView *_continuousIndicator;
    CAMFocusIndicatorView *_pointIndicator;
    CAMGridView *_gridView;
    id<CAMPreviewViewSubjectIndicatorDelegate> _subjectIndicatorDelegate;
    CAMSubjectIndicatorView *_centeredSubjectIndicatorView;
    UILabel *__simulatorLabel;
    NSMutableDictionary *__internalTrackedSubjectIndicatorsByIdentifier;
    NSMutableDictionary *__faceIndicators;
}

@property (nonatomic) int _exposureBiasSide; // @synthesize _exposureBiasSide=__exposureBiasSide;
@property (readonly, nonatomic) NSMutableDictionary *_faceIndicators; // @synthesize _faceIndicators=__faceIndicators;
@property (readonly, nonatomic) NSMutableDictionary *_internalTrackedSubjectIndicatorsByIdentifier; // @synthesize _internalTrackedSubjectIndicatorsByIdentifier=__internalTrackedSubjectIndicatorsByIdentifier;
@property (readonly, nonatomic) UILabel *_simulatorLabel; // @synthesize _simulatorLabel=__simulatorLabel;
@property (strong, nonatomic) CAMSubjectIndicatorView *centeredSubjectIndicatorView; // @synthesize centeredSubjectIndicatorView=_centeredSubjectIndicatorView;
@property (strong, nonatomic) CAMFocusIndicatorView *continuousIndicator; // @synthesize continuousIndicator=_continuousIndicator;
@property (readonly, nonatomic) NSDictionary *faceIndicatorsByIdentifier;
@property (nonatomic) CAMGridView *gridView; // @synthesize gridView=_gridView;
@property (readonly, nonatomic) UIView *indicatorContainerView; // @synthesize indicatorContainerView=_indicatorContainerView;
@property (strong, nonatomic) CAMFocusIndicatorView *pointIndicator; // @synthesize pointIndicator=_pointIndicator;
@property (nonatomic) id<CAMPreviewViewSubjectIndicatorDelegate> subjectIndicatorDelegate; // @synthesize subjectIndicatorDelegate=_subjectIndicatorDelegate;
@property (readonly, nonatomic) NSDictionary *trackedSubjectIndicatorsByIdentifier;
@property (strong, nonatomic) AVCaptureVideoPreviewLayer *videoPreviewLayer;
@property (readonly, nonatomic) CAMVideoPreviewView *videoPreviewView; // @synthesize videoPreviewView=_videoPreviewView;

+ (Class)layerClass;
- (void).cxx_destruct;
- (struct CGRect)_aspectFaceRectFromSquareFaceRect:(struct CGRect)arg1 angle:(double)arg2;
- (int)_faceOrientationForRollAngle:(double)arg1;
- (void)addFaceIndicator:(id)arg1 forIdentifier:(long long)arg2;
- (void)addTrackedSubjectIndicator:(id)arg1 forIdentifier:(long long)arg2;
- (struct CGPoint)captureDevicePointOfInterestForPoint:(struct CGPoint)arg1;
- (void)dealloc;
- (struct CGRect)faceIndicatorFrameForFaceResult:(id)arg1;
- (struct CGRect)frameForSubjectIndicator:(id)arg1 andFaceResult:(id)arg2 useNominalSize:(BOOL)arg3;
- (void)indicatePointOfInterest:(struct CGPoint)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (struct CGPoint)pointForCaptureDevicePointOfInterest:(struct CGPoint)arg1;
- (void)removeFaceIndicatorForIdentifier:(long long)arg1;
- (void)removeTrackedSubjectIndicatorForIdentifier:(long long)arg1;

@end

