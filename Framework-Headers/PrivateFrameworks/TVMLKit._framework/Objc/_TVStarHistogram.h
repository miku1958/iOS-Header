//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, UIColor, UIImage;

__attribute__((visibility("hidden")))
@interface _TVStarHistogram : UIView
{
    UIImage *_starImage;
    NSArray *_starBars;
    UIColor *_barEmptyColor;
    UIColor *_barFillColor;
    double _lineSpacing;
}

@property (strong, nonatomic) UIColor *barEmptyColor; // @synthesize barEmptyColor=_barEmptyColor;
@property (strong, nonatomic) UIColor *barFillColor; // @synthesize barFillColor=_barFillColor;
@property (nonatomic) double lineSpacing; // @synthesize lineSpacing=_lineSpacing;
@property (copy, nonatomic) NSArray *starBars; // @synthesize starBars=_starBars;
@property (strong, nonatomic) UIImage *starImage; // @synthesize starImage=_starImage;

+ (id)_histogramViewWithElement:(id)arg1 existingView:(id)arg2;
+ (id)histogramViewWithElement:(id)arg1 existingView:(id)arg2;
- (void).cxx_destruct;
- (BOOL)canBecomeFocused;
- (void)drawRect:(struct CGRect)arg1;

@end

