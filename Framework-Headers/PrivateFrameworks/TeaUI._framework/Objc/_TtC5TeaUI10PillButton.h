//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIButton.h>

@class MISSING_TYPE, UIColor;

@interface _TtC5TeaUI10PillButton : UIButton
{
    MISSING_TYPE *contentOffset;
    MISSING_TYPE *onTap;
    MISSING_TYPE *_backgroundColor;
}

@property (nonatomic, strong) UIColor *backgroundColor;
@property (nonatomic) struct CGPoint contentOffset; // @synthesize contentOffset;
@property (nonatomic) BOOL enabled;
@property (nonatomic) BOOL highlighted;

+ (Class)layerClass;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (BOOL)isEnabled;
- (BOOL)isHighlighted;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end

