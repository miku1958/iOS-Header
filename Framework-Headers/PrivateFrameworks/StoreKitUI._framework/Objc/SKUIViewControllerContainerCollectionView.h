//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionView.h>

@interface SKUIViewControllerContainerCollectionView : UICollectionView
{
    double _competingScrollViewPanGestureRecognizerHysteresis;
    BOOL _forcingIncreasedPanGestureRecognizerHysteresis;
    double _originalPanGestureRecognizerHysteresis;
    struct __CFRunLoopObserver *_runLoopObserver;
}

- (void)_beginDynamicHysteresisIncreaseWithCompetingScrollView:(id)arg1;
- (void)_endDynamicHysteresisIncrease;
- (void)_updateStateForDynamicHysteresisIncrease;
- (void)dealloc;
- (BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;

@end

