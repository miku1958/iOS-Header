//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoverSheet/NSObject-Protocol.h>

@class CSScrollGestureController, UIGestureRecognizer;

@protocol CSScrollGestureControllerDelegate <NSObject>
- (BOOL)controller:(CSScrollGestureController *)arg1 shouldAllowPanScrollingWithSystemGestureRecognizer:(UIGestureRecognizer *)arg2;

@optional
- (void)controllerDidCancelHorizontalScrolling:(CSScrollGestureController *)arg1;
- (void)controllerWillCancelHorizontalScrolling:(CSScrollGestureController *)arg1;
@end

