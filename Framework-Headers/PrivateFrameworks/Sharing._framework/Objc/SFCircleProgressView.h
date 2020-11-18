//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIColor;

@interface SFCircleProgressView : UIView
{
}

@property (nonatomic) double progress;
@property (readonly, nonatomic) UIColor *progressColor;
@property (nonatomic) double progressLineWidth;
@property (nonatomic) long long progressStartPoint;
@property (nonatomic) BOOL showProgressTray;

+ (Class)layerClass;
- (void)animateProgressCompletedWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (double)progressPresentationValue;
- (void)setProgress:(double)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setProgress:(double)arg1 animated:(BOOL)arg2 forced:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;
- (void)setProgressColor:(id)arg1;

@end

