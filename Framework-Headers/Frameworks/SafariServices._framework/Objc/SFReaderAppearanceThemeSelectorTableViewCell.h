//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIButton, UIStackView;
@protocol SFReaderAppearanceThemeSelectorTableViewCellDelegate;

__attribute__((visibility("hidden")))
@interface SFReaderAppearanceThemeSelectorTableViewCell : UITableViewCell
{
    UIStackView *_stackView;
    UIButton *_whiteButton;
    UIButton *_sepiaButton;
    UIButton *_grayButton;
    UIButton *_nightButton;
    id<SFReaderAppearanceThemeSelectorTableViewCellDelegate> _delegate;
    long long _selectedTheme;
}

@property (weak, nonatomic) id<SFReaderAppearanceThemeSelectorTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property (nonatomic) long long selectedTheme; // @synthesize selectedTheme=_selectedTheme;

+ (double)requiredHeight;
- (void).cxx_destruct;
- (id)_buttonForTheme:(long long)arg1;
- (void)_changeSelectionForTheme:(long long)arg1 selected:(BOOL)arg2;
- (void)_createThemeButtons;
- (id)_imageForTheme:(long long)arg1 selected:(BOOL)arg2;
- (void)_themeButtonAction:(id)arg1;
- (id)_themeButtonImageWithFillColor:(id)arg1 strokeColor:(id)arg2 selected:(BOOL)arg3;
- (long long)_themeForButton:(id)arg1;
- (void)_updateSelectedTheme;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
