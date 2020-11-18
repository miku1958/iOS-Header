//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIVibrancyEffect, UIVisualEffectView;
@protocol DOCTagIconView;

@interface DOCTagIconView : UIView
{
    UIView<DOCTagIconView> *_subview;
    UIVisualEffectView *_vibrantEffectView;
    UIVibrancyEffect *_noneVibrancyEffect;
}

@property (readonly, nonatomic) UIVibrancyEffect *noneVibrancyEffect; // @synthesize noneVibrancyEffect=_noneVibrancyEffect;
@property (readonly, nonatomic) UIView<DOCTagIconView> *subview; // @synthesize subview=_subview;
@property (nonatomic) long long tagColor;
@property (readonly, nonatomic) UIVisualEffectView *vibrantEffectView; // @synthesize vibrantEffectView=_vibrantEffectView;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1 subview:(id)arg2;
- (id)vibrancyEffect;

@end
