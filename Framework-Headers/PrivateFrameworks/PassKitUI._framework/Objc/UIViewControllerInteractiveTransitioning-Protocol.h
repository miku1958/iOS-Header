//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitUI/NSObject-Protocol.h>

@protocol UIViewControllerContextTransitioning;

@protocol UIViewControllerInteractiveTransitioning <NSObject>

@property (readonly, nonatomic) long long completionCurve;
@property (readonly, nonatomic) double completionSpeed;
@property (readonly, nonatomic) BOOL wantsInteractiveStart;

- (void)startInteractiveTransition:(id<UIViewControllerContextTransitioning>)arg1;

@optional
@end

