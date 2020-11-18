//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIControl.h>

@class TSKHorizontalDragRecognizer, TSUColor;

@interface TSKStarRatingView : UIControl
{
    long long mRating;
    long long mRatingOnFingerDown;
    int mStyle;
    TSKHorizontalDragRecognizer *mDragGesture;
    BOOL mShowsDots;
    TSUColor *mColor;
}

@property (copy, nonatomic) TSUColor *color; // @synthesize color=mColor;
@property (nonatomic) BOOL showsDots; // @synthesize showsDots=mShowsDots;
@property (nonatomic) int style; // @synthesize style=mStyle;
@property (nonatomic) long long value;

+ (struct CGPath *)newStarPath:(double)arg1;
+ (void)renderRating:(long long)arg1 intoContext:(struct CGContext *)arg2 rect:(struct CGRect)arg3 style:(int)arg4 showDots:(BOOL)arg5;
- (void)dealloc;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)p_horizontalDrag:(id)arg1;
- (void)p_setupGestureRecognizers;
- (long long)p_starRatingForGesture:(id)arg1;
- (long long)p_starRatingForLocation:(double)arg1;
- (void)p_tapped:(id)arg1;
- (Class)renderClass;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)willMoveToSuperview:(id)arg1;

@end
