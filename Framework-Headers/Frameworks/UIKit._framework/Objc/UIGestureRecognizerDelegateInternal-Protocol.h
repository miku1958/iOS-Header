//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIGestureRecognizerDelegatePrivate-Protocol.h>

@class UIGestureRecognizer;

@protocol UIGestureRecognizerDelegateInternal <UIGestureRecognizerDelegatePrivate>

@optional
- (void)_gestureRecognizerFailed:(UIGestureRecognizer *)arg1;
- (BOOL)gestureRecognizer:(UIGestureRecognizer *)arg1 canBePreventedByGestureRecognizer:(UIGestureRecognizer *)arg2;
- (BOOL)gestureRecognizer:(UIGestureRecognizer *)arg1 canPreventGestureRecognizer:(UIGestureRecognizer *)arg2;
@end

