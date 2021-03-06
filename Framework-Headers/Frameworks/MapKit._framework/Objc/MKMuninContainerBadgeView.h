//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel, UIVisualEffectView;

__attribute__((visibility("hidden")))
@interface MKMuninContainerBadgeView : UIView
{
    UIVisualEffectView *_backgroundView;
    UIImageView *_glyphView;
    UILabel *_label;
}

@property (weak, nonatomic) UIVisualEffectView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property (weak, nonatomic) UIImageView *glyphView; // @synthesize glyphView=_glyphView;
@property (weak, nonatomic) UILabel *label; // @synthesize label=_label;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (BOOL)isHidden;
- (void)setHidden:(BOOL)arg1;
- (void)setHidden:(BOOL)arg1 animated:(BOOL)arg2;

@end

