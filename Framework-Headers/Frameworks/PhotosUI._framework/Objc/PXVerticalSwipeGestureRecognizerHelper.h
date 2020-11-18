//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable;
@protocol PXVerticalSwipeGestureRecognizerHelperDelegate;

@interface PXVerticalSwipeGestureRecognizerHelper : NSObject
{
    struct {
        BOOL shouldRecognizeSwipeDownGestureRecognizer;
    } _delegateRespondsTo;
    BOOL _allowSwipeUp;
    BOOL _allowSwipeDown;
    id<PXVerticalSwipeGestureRecognizerHelperDelegate> _delegate;
    NSMapTable *_dependentScrollViews;
}

@property (nonatomic) BOOL allowSwipeDown; // @synthesize allowSwipeDown=_allowSwipeDown;
@property (nonatomic) BOOL allowSwipeUp; // @synthesize allowSwipeUp=_allowSwipeUp;
@property (weak, nonatomic) id<PXVerticalSwipeGestureRecognizerHelperDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, nonatomic) NSMapTable *dependentScrollViews; // @synthesize dependentScrollViews=_dependentScrollViews;

- (void).cxx_destruct;
- (id)_panGestureRecognizerForVerticalSwipeGestureRecognizer:(id)arg1;
- (id)init;
- (BOOL)verticalSwipeGestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (BOOL)verticalSwipeGestureRecognizerShouldBegin:(id)arg1;

@end

