//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

#import <SiriUI/SiriUIReusableView-Protocol.h>
#import <SiriUI/SiriUISizableHeaderView-Protocol.h>

@class NSString, SiriUIKeyline, SiriUISnippetViewController, UIButton, UIColor, UIImageView, UILabel, UIView;

@interface SiriUIReusableHeaderView : UICollectionReusableView <SiriUIReusableView, SiriUISizableHeaderView>
{
    UIView *_backgroundView;
    UILabel *_headerLabel;
    struct UIEdgeInsets _contentInsets;
    SiriUIKeyline *_keyline;
    UIImageView *_chevronView;
    SiriUISnippetViewController *_snippetViewController;
    NSString *_titleText;
    UIColor *_titleTextColor;
    UIButton *_headerAreaButton;
    long long _keylineType;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) UIButton *headerAreaButton; // @synthesize headerAreaButton=_headerAreaButton;
@property (nonatomic) long long keylineType; // @synthesize keylineType=_keylineType;
@property (weak, nonatomic) SiriUISnippetViewController *snippetViewController; // @synthesize snippetViewController=_snippetViewController;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
@property (copy, nonatomic) UIColor *titleTextColor; // @synthesize titleTextColor=_titleTextColor;

+ (double)defaultHeight;
+ (id)elementKind;
+ (id)reuseIdentifier;
- (void).cxx_destruct;
- (void)_configureHeaderLabelForBounds:(struct CGRect)arg1;
- (double)desiredHeightForWidth:(double)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setBackgroundColor:(id)arg1;

@end

