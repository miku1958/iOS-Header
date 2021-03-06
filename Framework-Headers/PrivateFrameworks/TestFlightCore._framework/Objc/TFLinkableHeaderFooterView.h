//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewHeaderFooterView.h>

@class UITextView;

__attribute__((visibility("hidden")))
@interface TFLinkableHeaderFooterView : UITableViewHeaderFooterView
{
    BOOL _isHeader;
    UITextView *_textView;
}

@property (nonatomic) BOOL isHeader; // @synthesize isHeader=_isHeader;
@property (readonly, nonatomic) UITextView *textView; // @synthesize textView=_textView;

+ (double)_heightForTextViewWithText:(id)arg1 font:(id)arg2 isHeader:(BOOL)arg3 fittingWidth:(double)arg4 inTraitEnvironment:(id)arg5;
+ (struct CGSize)itemSizeWithText:(id)arg1 isHeader:(BOOL)arg2 fittingSize:(struct CGSize)arg3 inTraitEnvironment:(id)arg4;
+ (id)reuseIdentifier;
- (void).cxx_destruct;
- (void)_prepareForDisplayWithTraitCollection:(id)arg1;
- (void)_updateTextViewWithLinkMap:(id)arg1;
- (void)applyText:(id)arg1 withTextLinkMap:(id)arg2 isHeader:(BOOL)arg3;
- (id)init;
- (id)initWithReuseIdentifier:(id)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end

