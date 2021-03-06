//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIColor, UIFont, UILabel;

@interface TKLabelContainerView : UIView
{
    UILabel *_label;
    struct UIEdgeInsets _labelPaddingInsets;
}

@property (strong, nonatomic) UIFont *labelFont;
@property (nonatomic) struct UIEdgeInsets labelPaddingInsets; // @synthesize labelPaddingInsets=_labelPaddingInsets;
@property (strong, nonatomic) UIColor *labelShadowColor;
@property (nonatomic) struct UIOffset labelShadowOffset;
@property (copy, nonatomic) NSString *labelText;
@property (strong, nonatomic) UIColor *labelTextColor;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end

