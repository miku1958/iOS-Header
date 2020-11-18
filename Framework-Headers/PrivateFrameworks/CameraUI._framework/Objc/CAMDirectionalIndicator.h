//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIControl.h>

@class CAShapeLayer;

@interface CAMDirectionalIndicator : UIControl
{
    unsigned long long _direction;
}

@property (readonly, nonatomic) CAShapeLayer *_arrowLayer;
@property (nonatomic) unsigned long long direction; // @synthesize direction=_direction;

+ (Class)layerClass;
- (void)_updateArrowShapeAnimated:(BOOL)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (void)setDirection:(unsigned long long)arg1 animated:(BOOL)arg2;

@end
