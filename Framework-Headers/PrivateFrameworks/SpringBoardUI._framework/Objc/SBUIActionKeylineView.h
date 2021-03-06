//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class MTVisualStylingProvider;

@interface SBUIActionKeylineView : UIView
{
    MTVisualStylingProvider *_visualStylingProvider;
    double _height;
}

@property (nonatomic) double height; // @synthesize height=_height;

- (void).cxx_destruct;
- (void)_invalidateVisualStyling;
- (void)_updateCornerMask;
- (void)_updateVisualStylingIfNecessary;
- (double)heightInPixels;
- (id)init;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (void)willMoveToSuperview:(id)arg1;

@end

