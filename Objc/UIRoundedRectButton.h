//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIButton.h>

@class UIBezierPath, UIColor;

__attribute__((visibility("hidden")))
@interface UIRoundedRectButton : UIButton
{
    UIBezierPath *_fillPath;
    UIColor *_fillColor;
}

- (void).cxx_destruct;
- (BOOL)_canDrawContent;
- (id)_contentBackgroundColor;
- (void)_invalidatePaths;
- (void)_updateState;
- (long long)buttonType;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 fillColor:(id)arg2;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setTintColor:(id)arg1;

@end

