//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIView.h>

@class NSDictionary, NSMutableDictionary, NSString, UIColor, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface _UIBadgeView : UIView
{
    UILabel *_label;
    UIImageView *_background;
    NSMutableDictionary *_mergedTextAttributes;
    NSString *_text;
    NSDictionary *_textAttributes;
    UIColor *_backgroundColor;
}

@property (copy, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property (copy, nonatomic) NSString *text; // @synthesize text=_text;
@property (copy, nonatomic) NSDictionary *textAttributes; // @synthesize textAttributes=_textAttributes;

- (void).cxx_destruct;
- (void)_applyTextToLabel;
- (void)_didChangeFromIdiom:(long long)arg1 onScreen:(id)arg2 traverseHierarchy:(BOOL)arg3;
- (void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2;
- (void)_setupLabelIfNecessary;
- (void)_updateBackground;
- (id)initWithText:(id)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end

