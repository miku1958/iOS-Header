//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC5TeaUI18SwipeActionManager : NSObject
{
    MISSING_TYPE *panGestureRecognizer;
    MISSING_TYPE *tapGestureRecognizer;
    MISSING_TYPE *deferGroup;
    MISSING_TYPE *collectionView;
    MISSING_TYPE *isSwipeActionEnabled;
    MISSING_TYPE *dataSource;
    MISSING_TYPE *delegate;
    MISSING_TYPE *swipeState;
    MISSING_TYPE *rubberbandFactor;
    MISSING_TYPE *maximumSwipeVelocity;
    MISSING_TYPE *springStiffness;
    MISSING_TYPE *snapOpenPercentage;
    MISSING_TYPE *fadeDuration;
    MISSING_TYPE *fadeOffset;
}

- (void).cxx_destruct;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)handlePanGestureWithRecognizer:(id)arg1;
- (void)handleTapGestureWithRecognizer:(id)arg1;
- (id)init;

@end
