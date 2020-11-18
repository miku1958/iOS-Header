//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class MPUGradientView, NSString, UIColor;

@interface MusicMediaUberHeaderLegibilityOverlayView : UIView
{
    MPUGradientView *_bottomGradientView;
    double _radialGradientEdgeElevation;
    double _radialGradientHeight;
    UIColor *_bottomGradientColor;
    NSString *_bottomGradientType;
    UIColor *_topGradientColor;
}

@property (strong, nonatomic) UIColor *bottomGradientColor; // @synthesize bottomGradientColor=_bottomGradientColor;
@property (copy, nonatomic) NSString *bottomGradientType; // @synthesize bottomGradientType=_bottomGradientType;
@property (strong, nonatomic) UIColor *topGradientColor; // @synthesize topGradientColor=_topGradientColor;

+ (Class)layerClass;
- (void).cxx_destruct;
- (void)_updateGradientLayers;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;

@end
