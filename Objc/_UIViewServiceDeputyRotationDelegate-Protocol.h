//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/NSObject-Protocol.h>

@class _UIHostedWindow;

@protocol _UIViewServiceDeputyRotationDelegate <NSObject>
- (void)finishRotationFromInterfaceOrientation:(long long)arg1;
- (void)rotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)setHostedWindow:(_UIHostedWindow *)arg1 disableAutomaticBehaviors:(BOOL)arg2;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
@end

