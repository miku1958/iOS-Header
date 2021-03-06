//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class AVStatusBarBackgroundGradientViewSubview, CABackdropLayer;

__attribute__((visibility("hidden")))
@interface AVStatusBarBackgroundGradientView : UIView
{
    AVStatusBarBackgroundGradientViewSubview *_gradientView;
}

@property (strong, nonatomic) AVStatusBarBackgroundGradientViewSubview *gradientView; // @synthesize gradientView=_gradientView;
@property (readonly, nonatomic) CABackdropLayer *layer; // @dynamic layer;

+ (Class)layerClass;
- (void).cxx_destruct;
- (double)alpha;
- (void)layoutSubviews;
- (void)setAlpha:(double)arg1;

@end

