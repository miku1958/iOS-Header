//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIColor;

@interface TKPickerTableViewCell : UITableViewCell
{
    BOOL _shouldTintTextLabel;
    UIColor *_textLabelColor;
}

@property (nonatomic) BOOL shouldTintTextLabel; // @synthesize shouldTintTextLabel=_shouldTintTextLabel;
@property (strong, nonatomic) UIColor *textLabelColor; // @synthesize textLabelColor=_textLabelColor;

- (void).cxx_destruct;
- (void)_updateTextLabelColor;
- (void)setSectionLocation:(int)arg1 animated:(BOOL)arg2;
- (void)tintColorDidChange;

@end

