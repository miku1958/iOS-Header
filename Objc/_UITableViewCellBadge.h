//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIView.h>

@class NSString, UIColor, UIFont, UILabel;

__attribute__((visibility("hidden")))
@interface _UITableViewCellBadge : UIView
{
    BOOL _selected;
    UILabel *_badgeTextLabel;
}

@property (strong, nonatomic) UILabel *badgeTextLabel; // @synthesize badgeTextLabel=_badgeTextLabel;
@property (strong, nonatomic) UIColor *color;
@property (strong, nonatomic) UIFont *font;
@property (nonatomic, getter=isSelected) BOOL selected; // @synthesize selected=_selected;
@property (copy, nonatomic) NSString *text;

- (void).cxx_destruct;
- (void)_sizeToFit;
- (id)initWithFrame:(struct CGRect)arg1;
- (BOOL)isHighlighted;
- (void)layoutSubviews;
- (double)minHeight;
- (void)setHighlighted:(BOOL)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end

