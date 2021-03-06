//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@interface HUCircleView : UIView
{
    BOOL _backgroundColorFollowsTintColor;
    BOOL _borderColorFollowsTintColor;
    UIView *_controlCenterMaterialView;
}

@property (nonatomic) BOOL backgroundColorFollowsTintColor; // @synthesize backgroundColorFollowsTintColor=_backgroundColorFollowsTintColor;
@property (nonatomic) BOOL borderColorFollowsTintColor; // @synthesize borderColorFollowsTintColor=_borderColorFollowsTintColor;
@property (strong, nonatomic) UIView *controlCenterMaterialView; // @synthesize controlCenterMaterialView=_controlCenterMaterialView;

+ (BOOL)requiresConstraintBasedLayout;
- (void).cxx_destruct;
- (BOOL)_shouldAnimatePropertyWithKey:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)tintColorDidChange;

@end

