//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class HFServiceNameComponents, NSString, UIColor, UIFont;

@interface HUGridServiceCellTextView : UIView
{
    BOOL _textColorFollowsTintColor;
    BOOL _shouldShowRoomName;
    double _lineHeight;
    HFServiceNameComponents *_serviceNameComponents;
    NSString *_descriptionText;
    UIColor *_textColor;
    double _descriptionTextColorDimmingFactor;
    UIFont *_font;
    unsigned long long _mode;
}

@property (strong, nonatomic) NSString *descriptionText; // @synthesize descriptionText=_descriptionText;
@property (nonatomic) double descriptionTextColorDimmingFactor; // @synthesize descriptionTextColorDimmingFactor=_descriptionTextColorDimmingFactor;
@property (strong, nonatomic) UIFont *font; // @synthesize font=_font;
@property (readonly, nonatomic) double lastBaselineToBottomDistance;
@property (nonatomic) double lineHeight; // @synthesize lineHeight=_lineHeight;
@property (nonatomic) unsigned long long mode; // @synthesize mode=_mode;
@property (strong, nonatomic) HFServiceNameComponents *serviceNameComponents; // @synthesize serviceNameComponents=_serviceNameComponents;
@property (nonatomic) BOOL shouldShowRoomName; // @synthesize shouldShowRoomName=_shouldShowRoomName;
@property (strong, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property (nonatomic) BOOL textColorFollowsTintColor; // @synthesize textColorFollowsTintColor=_textColorFollowsTintColor;
@property (readonly, nonatomic) double topToFirstBaselineDistance;

+ (double)minimumDescriptionScaleFactor;
- (void).cxx_destruct;
- (id)_combinedAttributedString;
- (id)_commonTextAttributesWithLineBreakMode:(long long)arg1;
- (void)_drawCombinedLabel;
- (void)_drawDescriptionLabel;
- (void)_drawSeperateLabels;
- (id)_effectiveTextColor;
- (void)_updateMode;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)tintColorDidChange;

@end

