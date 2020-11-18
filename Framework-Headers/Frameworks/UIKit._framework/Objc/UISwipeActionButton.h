//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIButton.h>

@class UIColor, UIView;

__attribute__((visibility("hidden")))
@interface UISwipeActionButton : UIButton
{
    BOOL _autosizes;
    UIColor *_defaultBackgroundColor;
    UIColor *_highlightedBackgroundColor;
    UIView *_backgroundView;
}

@property (nonatomic) BOOL autosizes; // @synthesize autosizes=_autosizes;
@property (strong, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property (readonly, nonatomic) double buttonWidth;
@property (strong, nonatomic) UIColor *defaultBackgroundColor; // @synthesize defaultBackgroundColor=_defaultBackgroundColor;
@property (strong, nonatomic) UIColor *highlightedBackgroundColor; // @synthesize highlightedBackgroundColor=_highlightedBackgroundColor;
@property (readonly, nonatomic) UIView *sourceView;

+ (double)defaultButtonWidth;
+ (id)titleFont;
+ (id)titleFontOfSize:(double)arg1;
- (void).cxx_destruct;
- (struct CGRect)_allowableContentRectForContentRect:(struct CGRect)arg1;
- (unsigned long long)_defaultLayoutForHeight:(double)arg1;
- (BOOL)_heightDemandsCompactLayout;
- (long long)_numberOfLinesForTitle:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setTitle:(id)arg1 forState:(unsigned long long)arg2;
- (void)traitCollectionDidChange:(id)arg1;

@end

