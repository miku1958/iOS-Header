//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIScrollView.h>

@class UIScrollTestToBottomParameters;

@interface UIScrollView (ScrollTest)

@property (strong, nonatomic) UIScrollTestToBottomParameters *scrollTestParameters;

+ (id)_implicitAnimationCulprits;
- (void)_incrementForScrollTest;
- (void)_performScrollTestToBottom:(id)arg1 iterations:(int)arg2 delta:(int)arg3;
- (void)_performScrollTestToBottom:(id)arg1 iterations:(int)arg2 delta:(int)arg3 length:(int)arg4;
- (void)_performScrollTestToBottom:(id)arg1 iterations:(int)arg2 delta:(int)arg3 length:(int)arg4 scrollAxis:(int)arg5;
- (void)_performScrollTestToBottom:(id)arg1 iterations:(int)arg2 delta:(int)arg3 scrollAxis:(int)arg4;
- (void)_reenableImplicitAnimationsAfterScrollTest;
- (id)_scrollTestExtraResults:(id)arg1;
- (void)_suppressImplicitAnimationsForScrollTest;
@end
