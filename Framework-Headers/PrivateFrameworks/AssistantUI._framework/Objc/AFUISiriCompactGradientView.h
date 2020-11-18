//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAGradientLayer, NSString;

@interface AFUISiriCompactGradientView : UIView
{
    BOOL _isVisible;
    double _gradientHeight;
    NSString *_gradientType;
    double _gradientStartOpacity;
    double _gradientEndOpacity;
    struct CGPoint _gradientOrigin;
}

@property (nonatomic) double gradientEndOpacity; // @synthesize gradientEndOpacity=_gradientEndOpacity;
@property (nonatomic) double gradientHeight; // @synthesize gradientHeight=_gradientHeight;
@property (nonatomic) struct CGPoint gradientOrigin; // @synthesize gradientOrigin=_gradientOrigin;
@property (nonatomic) double gradientStartOpacity; // @synthesize gradientStartOpacity=_gradientStartOpacity;
@property (strong, nonatomic) NSString *gradientType; // @synthesize gradientType=_gradientType;
@property (readonly, nonatomic) CAGradientLayer *layer; // @dynamic layer;

+ (Class)layerClass;
- (void).cxx_destruct;
- (id)_fadeInAnimation;
- (id)_fadeOutAnimation;
- (void)_updateGradientOpacity;
- (id)initWithGradientType:(id)arg1;
- (void)layoutSubviews;
- (void)setVisible:(BOOL)arg1 animated:(BOOL)arg2;

@end
