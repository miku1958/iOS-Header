//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosPlayer/NSObject-Protocol.h>

@class ISGestureInput, UIGestureRecognizer, UIView;
@protocol UIGestureRecognizerDelegate;

@protocol ISGestureInputDelegate <NSObject>

@optional
- (id<UIGestureRecognizerDelegate>)gestureInput:(ISGestureInput *)arg1 delegateForGestureRecognizer:(UIGestureRecognizer *)arg2;
- (UIView *)gestureInputViewHostingGestureRecognizers:(ISGestureInput *)arg1;
@end

