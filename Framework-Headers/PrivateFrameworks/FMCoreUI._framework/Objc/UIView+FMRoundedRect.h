//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSNumber, UIColor;

@interface UIView (FMRoundedRect)

@property (readonly, copy) NSArray *allSubviews;
@property (strong, nonatomic) UIColor *debugHighlight;
@property (strong, nonatomic) UIColor *roundedRectBackgroundColor;
@property (strong, nonatomic) UIColor *roundedRectBorderColor;
@property (strong, nonatomic) NSNumber *roundedRectBorderWidth;

- (id)addConstraintsToFillSuperview;
- (id)addConstraintsToSetSize:(struct CGSize)arg1;
- (void)centerHorizontallyInSuperview;
- (void)centerVerticallyInSuperview;
- (id)generateImage;
- (struct CGPath *)newPathForRoundedRect:(struct CGRect)arg1 radius:(double)arg2;
- (void)performOnAllSubviews:(CDUnknownBlockType)arg1;
- (void)setRandomDebugHighlight;
@end
