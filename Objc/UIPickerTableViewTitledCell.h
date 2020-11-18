//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIPickerTableViewCell.h>

@class NSAttributedString, NSString, UIColor, UILabel;

__attribute__((visibility("hidden")))
@interface UIPickerTableViewTitledCell : UIPickerTableViewCell
{
    UILabel *_titleLabel;
    BOOL _isAttributed;
    BOOL _usesModernStyle;
    UIColor *_textColor;
}

@property (readonly, nonatomic) BOOL _isAttributed; // @synthesize _isAttributed;
@property (readonly, nonatomic) UILabel *_titleLabel; // @synthesize _titleLabel;
@property (strong, nonatomic) NSAttributedString *attributedTitle;
@property (strong, nonatomic) NSString *title;

- (void).cxx_destruct;
- (BOOL)_canBeReusedInPickerView;
- (void)_setIsCenterCell:(BOOL)arg1 shouldModifyAlphaOfView:(BOOL)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 isModern:(BOOL)arg3 textColor:(id)arg4 forceTextAlignmentCentered:(BOOL)arg5;
- (void)prepareForReuse;

@end

