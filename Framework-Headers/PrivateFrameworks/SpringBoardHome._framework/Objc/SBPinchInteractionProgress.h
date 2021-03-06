//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIInteractionProgress.h>

#import <SpringBoardHome/UIGestureRecognizerDelegate-Protocol.h>

@class NSString, UIPinchGestureRecognizer;

@interface SBPinchInteractionProgress : UIInteractionProgress <UIGestureRecognizerDelegate>
{
    CDStruct_3e878e9e _pinchInterval;
    UIPinchGestureRecognizer *_pinchGesture;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) double minPinchScale;
@property (readonly, nonatomic) UIPinchGestureRecognizer *pinchGesture; // @synthesize pinchGesture=_pinchGesture;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_handlePinchGesture:(id)arg1;
- (void)_updatePinchScale:(double)arg1;
- (id)initWithPinchGesture:(id)arg1 minPinchScale:(double)arg2;

@end

