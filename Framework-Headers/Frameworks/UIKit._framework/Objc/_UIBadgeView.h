//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIView.h>

@class NSDictionary, NSMutableDictionary, NSString, UIColor, UILabel, _UIBadgeVisualStyle;

__attribute__((visibility("hidden")))
@interface _UIBadgeView : UIView
{
    UILabel *_label;
    NSMutableDictionary *_mergedTextAttributes;
    NSString *_text;
    NSDictionary *_textAttributes;
    UIColor *_badgeColor;
    _UIBadgeVisualStyle *_style;
    struct UIOffset _textOffset;
}

@property (copy, nonatomic) UIColor *badgeColor; // @synthesize badgeColor=_badgeColor;
@property (strong, nonatomic) _UIBadgeVisualStyle *style; // @synthesize style=_style;
@property (copy, nonatomic) NSString *text; // @synthesize text=_text;
@property (copy, nonatomic) NSDictionary *textAttributes; // @synthesize textAttributes=_textAttributes;
@property (nonatomic) struct UIOffset textOffset; // @synthesize textOffset=_textOffset;

- (void).cxx_destruct;
- (void)_applyTextToLabel;
- (void)_setUpLabelIfNecessary;
- (id)initWithText:(id)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end

