//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIColor;
@protocol EQKitLayout;

@interface EQKitiOSEquationView : UIView
{
    id<EQKitLayout> _equationLayout;
    double _viewScale;
    double _padding;
    UIColor *_textColor;
    struct CGPoint _offset;
}

@property (strong, nonatomic) id<EQKitLayout> equationLayout; // @synthesize equationLayout=_equationLayout;
@property (nonatomic) struct CGPoint offset; // @synthesize offset=_offset;
@property (nonatomic) double padding; // @synthesize padding=_padding;
@property (copy, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property (nonatomic) double viewScale; // @synthesize viewScale=_viewScale;

- (void)dealloc;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;

@end

