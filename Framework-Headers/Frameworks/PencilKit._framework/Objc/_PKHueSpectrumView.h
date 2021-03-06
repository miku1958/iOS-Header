//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAShapeLayer, UIImageView;

@interface _PKHueSpectrumView : UIView
{
    BOOL _isCompact;
    BOOL _isEmbossed;
    BOOL _isSelected;
    UIImageView *_imageView;
    CAShapeLayer *_maskLayer;
}

@property (strong, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property (nonatomic) BOOL isCompact; // @synthesize isCompact=_isCompact;
@property (nonatomic) BOOL isEmbossed; // @synthesize isEmbossed=_isEmbossed;
@property (nonatomic) BOOL isSelected; // @synthesize isSelected=_isSelected;
@property (strong, nonatomic) CAShapeLayer *maskLayer; // @synthesize maskLayer=_maskLayer;

+ (id)colorWheelImage:(BOOL)arg1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;

@end

