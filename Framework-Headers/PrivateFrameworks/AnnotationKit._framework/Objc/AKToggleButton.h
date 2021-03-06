//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIButton.h>

@class UIColor, UIImage;

@interface AKToggleButton : UIButton
{
    BOOL _showsBackgroundColor;
    BOOL _shouldTintNormalImage;
    UIColor *_selectedColor;
    UIImage *_templateImage;
}

@property (strong, nonatomic) UIColor *selectedColor; // @synthesize selectedColor=_selectedColor;
@property (nonatomic) BOOL shouldTintNormalImage; // @synthesize shouldTintNormalImage=_shouldTintNormalImage;
@property (nonatomic) BOOL showsBackgroundColor; // @synthesize showsBackgroundColor=_showsBackgroundColor;
@property (strong, nonatomic) UIImage *templateImage; // @synthesize templateImage=_templateImage;

+ (id)colorImage:(id)arg1 withColor:(id)arg2;
- (void).cxx_destruct;
- (void)_setDeselectedStateColorImage;
- (void)_setSelectedStateColorImage;
- (void)_touchCommitted:(id)arg1;
- (void)_updateSelectionColorsAnimated:(BOOL)arg1;
- (void)_updateStateColors;
- (id)initWithFrame:(struct CGRect)arg1 templateImage:(id)arg2 autoUpdatesColor:(BOOL)arg3;
- (void)setHighlighted:(BOOL)arg1;
- (void)setImage:(id)arg1 forState:(unsigned long long)arg2;
- (void)setSelected:(BOOL)arg1;
- (void)tintColorDidChange;
- (void)traitCollectionDidChange:(id)arg1;

@end

