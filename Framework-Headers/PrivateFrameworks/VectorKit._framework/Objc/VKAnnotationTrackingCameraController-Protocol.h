//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VectorKit/NSObject-Protocol.h>

@protocol VKTrackableAnnotation;

@protocol VKAnnotationTrackingCameraController <NSObject>

@property (nonatomic) CDStruct_211b8904 annotationTrackingBehavior;
@property (nonatomic) long long annotationTrackingHeadingAnimationDisplayRate;
@property (readonly, nonatomic) BOOL isAnimatingToTrackAnnotation;
@property (readonly, nonatomic) BOOL isTrackingHeading;
@property (readonly, nonatomic) id<VKTrackableAnnotation> trackingAnnotation;

- (void)startTrackingAnnotation:(id<VKTrackableAnnotation>)arg1 trackHeading:(BOOL)arg2 animated:(BOOL)arg3 duration:(double)arg4 timingFunction:(float (^)(float))arg5;
- (void)stopTrackingAnnotation;
@end
