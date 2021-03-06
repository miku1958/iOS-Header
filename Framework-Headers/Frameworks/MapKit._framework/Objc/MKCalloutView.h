//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <MapKit/_MKMotionEffectDelegate-Protocol.h>

@class MKAnnotationView;

@interface MKCalloutView : UIView <_MKMotionEffectDelegate>
{
    BOOL _parallaxEnabled;
    MKAnnotationView *_annotationView;
}

@property (readonly, nonatomic) long long anchorPosition;
@property (readonly, weak, nonatomic) MKAnnotationView *annotationView; // @synthesize annotationView=_annotationView;
@property (readonly, nonatomic) BOOL hasPendingVisibility;
@property (nonatomic) BOOL parallaxEnabled; // @synthesize parallaxEnabled=_parallaxEnabled;
@property (readonly, nonatomic, getter=isVisible) BOOL visible;

- (void).cxx_destruct;
- (void)annotationViewFrameDidChange;
- (void)dismissAnimated:(BOOL)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)initWithAnnotationView:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)motionEffectDidUpdate:(id)arg1;
- (void)showAnimated:(BOOL)arg1 completionBlock:(CDUnknownBlockType)arg2;

@end

