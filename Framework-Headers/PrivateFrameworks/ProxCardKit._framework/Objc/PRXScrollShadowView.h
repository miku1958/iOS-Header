//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAGradientLayer;

__attribute__((visibility("hidden")))
@interface PRXScrollShadowView : UIView
{
    CAGradientLayer *_maskLayer;
    unsigned long long _edge;
}

@property (nonatomic) unsigned long long edge; // @synthesize edge=_edge;
@property (readonly, nonatomic) CAGradientLayer *gradientLayer;

+ (Class)layerClass;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;

@end

