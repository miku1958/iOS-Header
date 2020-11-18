//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, UIColor;

@interface UIView (ISCommonUI)

@property (readonly, copy) NSArray *allSubviews;
@property (strong, nonatomic) UIColor *debugHighlight;

- (id)addConstraintsToFillSuperview;
- (id)addConstraintsToSetSize:(struct CGSize)arg1;
- (void)centerHorizontallyInSuperview;
- (void)centerVerticallyInSuperview;
- (id)generateImage;
- (void)performOnAllSubviews:(CDUnknownBlockType)arg1;
- (void)setRandomDebugHighlight;
@end
