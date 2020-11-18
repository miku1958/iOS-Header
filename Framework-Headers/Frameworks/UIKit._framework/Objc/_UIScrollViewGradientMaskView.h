//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

__attribute__((visibility("hidden")))
@interface _UIScrollViewGradientMaskView : UIView
{
    long long _gradientDirection;
    struct UIEdgeInsets _gradientStartInsets;
    struct UIEdgeInsets _gradientEndInsets;
    struct UIEdgeInsets _gradientIntensities;
}

@property (nonatomic) long long gradientDirection; // @synthesize gradientDirection=_gradientDirection;
@property (nonatomic) struct UIEdgeInsets gradientEndInsets; // @synthesize gradientEndInsets=_gradientEndInsets;
@property (nonatomic) struct UIEdgeInsets gradientIntensities; // @synthesize gradientIntensities=_gradientIntensities;
@property (nonatomic) struct UIEdgeInsets gradientStartInsets; // @synthesize gradientStartInsets=_gradientStartInsets;

+ (Class)layerClass;
- (id)gradientLayer;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)updateWithFrame:(struct CGRect)arg1 gradientStartInsets:(struct UIEdgeInsets)arg2 gradientEndInsets:(struct UIEdgeInsets)arg3 gradientIntensities:(struct UIEdgeInsets)arg4;

@end
