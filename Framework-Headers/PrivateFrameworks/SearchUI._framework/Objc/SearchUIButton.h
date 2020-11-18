//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/SKUIPlayButton.h>

@class CALayer, UIImage, UIView;

@interface SearchUIButton : SKUIPlayButton
{
    BOOL _toggled;
    BOOL _smallSize;
    unsigned long long _type;
    UIView *_containerView;
    UIImage *_overlayImage;
    CALayer *_backgroundLayer;
}

@property (strong) CALayer *backgroundLayer; // @synthesize backgroundLayer=_backgroundLayer;
@property (strong, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property (strong, nonatomic) UIImage *overlayImage; // @synthesize overlayImage=_overlayImage;
@property (nonatomic) BOOL smallSize; // @synthesize smallSize=_smallSize;
@property (nonatomic, getter=isToggled) BOOL toggled; // @synthesize toggled=_toggled;
@property (nonatomic) unsigned long long type; // @synthesize type=_type;

- (void).cxx_destruct;
- (float)buttonCornerRadius;
- (struct CGSize)buttonSize;
- (void)didMoveToSuperview;
- (id)initWithStyle:(unsigned long long)arg1 type:(unsigned long long)arg2;
- (void)layoutSubviews;
- (float)playButtonDefaultAlpha;
- (BOOL)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)updateWithType:(unsigned long long)arg1;

@end

