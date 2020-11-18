//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class CALayer, UIColor;

@interface _HKLegendDot : UIView
{
    UIColor *_dotColor;
    UIColor *_innerDotColor;
    CALayer *_innerDotLayer;
}

@property (strong, nonatomic) UIColor *dotColor; // @synthesize dotColor=_dotColor;
@property (strong, nonatomic) UIColor *innerDotColor; // @synthesize innerDotColor=_innerDotColor;
@property (strong, nonatomic) CALayer *innerDotLayer; // @synthesize innerDotLayer=_innerDotLayer;

- (void).cxx_destruct;
- (id)init;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSublayersOfLayer:(id)arg1;

@end

