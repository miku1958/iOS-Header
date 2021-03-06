//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSDictionary, NSString, UIButton, UITextView;
@protocol HFStringGenerator, HUExpandableTextViewDelegate;

@interface HUExpandableTextView : UIView
{
    BOOL _alwaysShowMoreButtonUnlessExpanded;
    BOOL _expanded;
    BOOL _fitsWithinLineLimit;
    UITextView *_textView;
    long long _textMode;
    NSString *_text;
    id<HFStringGenerator> _stringGenerator;
    NSDictionary *_textAttributes;
    unsigned long long _numberOfLines;
    UIButton *_moreButton;
    id<HUExpandableTextViewDelegate> _delegate;
    unsigned long long _languageDirection;
    NSArray *_moreButtonLayoutConstraints;
}

@property (nonatomic) BOOL alwaysShowMoreButtonUnlessExpanded; // @synthesize alwaysShowMoreButtonUnlessExpanded=_alwaysShowMoreButtonUnlessExpanded;
@property (weak, nonatomic) id<HUExpandableTextViewDelegate> delegate; // @synthesize delegate=_delegate;
@property (nonatomic, getter=isExpanded) BOOL expanded; // @synthesize expanded=_expanded;
@property (nonatomic) BOOL fitsWithinLineLimit; // @synthesize fitsWithinLineLimit=_fitsWithinLineLimit;
@property (nonatomic) unsigned long long languageDirection; // @synthesize languageDirection=_languageDirection;
@property (strong, nonatomic) UIButton *moreButton; // @synthesize moreButton=_moreButton;
@property (strong, nonatomic) NSArray *moreButtonLayoutConstraints; // @synthesize moreButtonLayoutConstraints=_moreButtonLayoutConstraints;
@property (nonatomic) unsigned long long numberOfLines; // @synthesize numberOfLines=_numberOfLines;
@property (copy, nonatomic) id<HFStringGenerator> stringGenerator; // @synthesize stringGenerator=_stringGenerator;
@property (copy, nonatomic) NSString *text; // @synthesize text=_text;
@property (copy, nonatomic) NSDictionary *textAttributes; // @synthesize textAttributes=_textAttributes;
@property (nonatomic) long long textMode; // @synthesize textMode=_textMode;
@property (strong, nonatomic) UITextView *textView; // @synthesize textView=_textView;

- (void).cxx_destruct;
- (void)_updateLanguageDirection;
- (double)heightForWidth:(double)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (void)moreButtonTapped:(id)arg1;
- (void)updateConstraints;

@end

