//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIVisualEffect.h>

@class NSString, UIColor, UIImage;

__attribute__((visibility("hidden")))
@interface _UIOverlayEffect : UIVisualEffect
{
    NSString *_filterType;
    UIImage *_image;
    UIColor *_color;
    double _alpha;
}

@property (nonatomic) double alpha; // @synthesize alpha=_alpha;
@property (copy, nonatomic) UIColor *color; // @synthesize color=_color;
@property (copy, nonatomic) NSString *filterType; // @synthesize filterType=_filterType;
@property (strong, nonatomic) UIImage *image; // @synthesize image=_image;

- (void).cxx_destruct;
- (void)_updateEffectDescriptor:(id)arg1 forEnvironment:(id)arg2 usage:(long long)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end
