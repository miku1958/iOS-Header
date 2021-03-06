//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AnnotationKit/NSObject-Protocol.h>

@class AKAnnotation, AKShapeDetectionController, UIView;

@protocol AKShapeDetectionControllerDelegate <NSObject>
- (void)beginIgnoringAnnotationSelectionObservation:(AKShapeDetectionController *)arg1;
- (void)endIgnoringAnnotationSelectionObservation:(AKShapeDetectionController *)arg1;
- (BOOL)isIgnoringAnnotationAndSelectionKVO:(AKShapeDetectionController *)arg1;
- (BOOL)isWaitingToCoalesceStrokes;
- (UIView *)overlayView:(AKShapeDetectionController *)arg1;
- (BOOL)shapeDetectionController:(AKShapeDetectionController *)arg1 shouldSelectCandidateAnnotation:(AKAnnotation *)arg2;

@optional
- (struct CGRect)shapeDetectionControllerPositioningRectForCandidatePicker:(AKShapeDetectionController *)arg1;
- (void)shapeDetectionControllerWillPickCandidate:(AKShapeDetectionController *)arg1 isInk:(BOOL)arg2;
@end

