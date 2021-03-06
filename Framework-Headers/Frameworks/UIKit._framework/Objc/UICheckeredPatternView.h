//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIView.h>

@class UIColor;

@interface UICheckeredPatternView : UIView
{
    UIColor *_patternColor;
    double _scale;
    UIColor *_checkerColor;
}

@property (strong, nonatomic) UIColor *checkerColor; // @synthesize checkerColor=_checkerColor;

- (void).cxx_destruct;
- (BOOL)_canDrawContent;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)updatePatternColor;

@end

