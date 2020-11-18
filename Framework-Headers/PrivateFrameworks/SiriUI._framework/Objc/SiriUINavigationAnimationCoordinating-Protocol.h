//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SiriUI/NSObject-Protocol.h>

@class UINavigationController;
@protocol UIViewControllerTransitionCoordinator;

@protocol SiriUINavigationAnimationCoordinating <NSObject>

@property (nonatomic) long long operation;


@optional
- (void)configureWithNavigationController:(UINavigationController *)arg1;
- (void)coordinateAdditionalTransitionsWithTransitionCoordinator:(id<UIViewControllerTransitionCoordinator>)arg1;
@end
