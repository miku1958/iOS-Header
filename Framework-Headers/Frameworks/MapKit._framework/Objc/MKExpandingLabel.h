//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <MapKit/UIGestureRecognizerDelegate-Protocol.h>

@class NSAttributedString, NSLayoutManager, NSString, NSTextContainer, NSTextStorage, UIColor, UIFont, UITapGestureRecognizer, UITextView, _MKUILabel;

@interface MKExpandingLabel : UIView <UIGestureRecognizerDelegate>
{
    unsigned long long _expansionMode;
    NSTextContainer *_textContainer;
    NSTextStorage *_textStorage;
    NSLayoutManager *_textLayoutManager;
    _MKUILabel *_showMoreLabel;
    UITapGestureRecognizer *_showMoreTapRecognizer;
    BOOL _constraintsAdded;
    BOOL _useAttributedText;
    BOOL _isPerformingLayout;
    UITextView *_textView;
    UIFont *_font;
    UIColor *_textColor;
    UIColor *_showMoreTextColor;
    long long _textAlignment;
    unsigned long long _numberOfLinesWhenCollapsed;
    CDUnknownBlockType _labelResizedBlock;
}

@property (copy, nonatomic) NSAttributedString *attributedText;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isExpanded) BOOL expanded;
@property (strong, nonatomic) UIFont *font; // @synthesize font=_font;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) CDUnknownBlockType labelResizedBlock; // @synthesize labelResizedBlock=_labelResizedBlock;
@property (nonatomic) long long lineBreakMode;
@property (nonatomic) unsigned long long numberOfLinesWhenCollapsed; // @synthesize numberOfLinesWhenCollapsed=_numberOfLinesWhenCollapsed;
@property (strong, nonatomic) UIFont *showMoreFont;
@property (copy, nonatomic) NSString *showMoreText;
@property (strong, nonatomic) UIColor *showMoreTextColor; // @synthesize showMoreTextColor=_showMoreTextColor;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *text;
@property (nonatomic) long long textAlignment; // @synthesize textAlignment=_textAlignment;
@property (strong, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property (strong, nonatomic) UITextView *textView; // @synthesize textView=_textView;

- (void).cxx_destruct;
- (BOOL)_canShowAllText;
- (void)_expand;
- (void)_mkExpandingLabelComonInit;
- (void)_setExpansionMode:(unsigned long long)arg1;
- (void)_setTextExclusionPath;
- (void)_updateTextAttributes;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)infoCardThemeChanged:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (BOOL)isShowingExpanded;
- (void)layoutSubviews;
- (void)updateConstraints;
- (id)viewForFirstBaselineLayout;
- (id)viewForLastBaselineLayout;

@end
