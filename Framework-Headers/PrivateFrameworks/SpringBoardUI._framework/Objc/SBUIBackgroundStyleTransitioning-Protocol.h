//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardUI/NSObject-Protocol.h>

@protocol SBUIBackgroundStyleTransitioning <NSObject>

@property (nonatomic) long long backgroundStyle;
@property (readonly, nonatomic, getter=isTransitioningBackgroundStyle) BOOL transitioningBackgroundStyle;

- (void)beginTransitionToBackgroundStyle:(long long)arg1;
- (void)completeTransitionToBackgroundStyle:(long long)arg1;
- (void)updateBackgroundStyleTransitionProgress:(double)arg1;
@end

