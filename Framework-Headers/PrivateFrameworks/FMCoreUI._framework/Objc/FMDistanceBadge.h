//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UILabel.h>

@class UIColor;

@interface FMDistanceBadge : UILabel
{
    UIColor *_badgeColor;
    struct UIEdgeInsets _insets;
}

@property (strong, nonatomic) UIColor *badgeColor; // @synthesize badgeColor=_badgeColor;
@property (nonatomic) struct UIEdgeInsets insets; // @synthesize insets=_insets;

- (void).cxx_destruct;
- (void)_commonSetup;
- (void)awakeFromNib;
- (void)drawRect:(struct CGRect)arg1;
- (void)drawTextInRect:(struct CGRect)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)prepareForInterfaceBuilder;
- (void)setBackgroundColor:(id)arg1;

@end

