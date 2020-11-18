//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSString, UIImageView, UILabel, UIView;

@interface SKUIGiftDateTableViewCell : UITableViewCell
{
    UIView *_bottomBorderView;
    BOOL _checked;
    UIImageView *_checkmarkView;
    UILabel *_dateLabel;
    UILabel *_labelLabel;
    UILabel *_placeholderLabel;
    UIView *_topBorderView;
}

@property (nonatomic, getter=isChecked) BOOL checked; // @synthesize checked=_checked;
@property (copy, nonatomic) NSString *dateString;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSString *placeholder;

- (void).cxx_destruct;
- (id)_labelColor;
- (id)_newLabel;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;

@end

