//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, WGCheckView;

@interface WGCircleCheckView : UIView
{
    UIImageView *_circleView;
    WGCheckView *_checkView;
}

@property (strong, nonatomic, getter=_checkView) WGCheckView *checkView; // @synthesize checkView=_checkView;
@property (nonatomic, getter=isChecked) BOOL checked;
@property (strong, nonatomic, getter=_circleView) UIImageView *circleView; // @synthesize circleView=_circleView;

- (void).cxx_destruct;
- (void)_configureCheckViewIfNecessary;
- (id)_configureCircleViewIfNecessary;
- (BOOL)_isFrozen;
- (void)_setChecked:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_setFrozen:(BOOL)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end

