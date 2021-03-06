//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class CALayer;

@interface NTKRichComplicationHandView : UIView
{
    CALayer *_dotLayer;
    CALayer *_handLayer;
    double _beginAngle;
    double _endAngle;
    double _handWidth;
    float _value;
}

@property (readonly, nonatomic) CALayer *dotLayer; // @synthesize dotLayer=_dotLayer;
@property (readonly, nonatomic) CALayer *handLayer; // @synthesize handLayer=_handLayer;

- (void).cxx_destruct;
- (void)_updateHandTransform;
- (id)initWithDotSize:(double)arg1 handWidth:(double)arg2 beginAngle:(double)arg3 endAngle:(double)arg4;
- (void)layoutSubviews;
- (void)setValue:(float)arg1 animated:(BOOL)arg2;

@end

