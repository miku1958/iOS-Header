//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray, NSString, PKPaymentAuthorizationLayout, UIFont, UILabel;

@interface PKPaymentAuthorizationSummaryItemsView : UIView
{
    NSMutableArray *_labelViews;
    NSMutableArray *_valueViews;
    NSMutableArray *_titleViews;
    NSMutableArray *_hasBottomPadding;
    NSMutableArray *_usesLargeFont;
    UILabel *_titleLabel;
    UIFont *_titleFont;
    UIFont *_labelLargeFont;
    UIFont *_labelRegularFont;
    UIView *_separatorView;
    BOOL _showsBoldValueText;
    BOOL _showsTopSeparator;
    BOOL _occludesBodyView;
    PKPaymentAuthorizationLayout *_layout;
    NSString *_title;
}

@property (weak, nonatomic) PKPaymentAuthorizationLayout *layout; // @synthesize layout=_layout;
@property (nonatomic) BOOL occludesBodyView; // @synthesize occludesBodyView=_occludesBodyView;
@property (nonatomic) BOOL showsBoldValueText; // @synthesize showsBoldValueText=_showsBoldValueText;
@property (nonatomic) BOOL showsTopSeparator; // @synthesize showsTopSeparator=_showsTopSeparator;
@property (strong, nonatomic) NSString *title; // @synthesize title=_title;

- (void).cxx_destruct;
- (id)_labelAttributedStringWithString:(id)arg1 withDarkColor:(BOOL)arg2 largeFont:(BOOL)arg3;
- (id)_valueAttributedStringWithString:(id)arg1 type:(unsigned long long)arg2;
- (void)addLabel:(id)arg1 value:(id)arg2 title:(id)arg3 itemType:(unsigned long long)arg4 maxLabelLines:(long long)arg5 maxValueLines:(long long)arg6 hasBottomPadding:(BOOL)arg7 useDarkColor:(BOOL)arg8 useLargeFont:(BOOL)arg9;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithLayout:(id)arg1;
- (void)layoutSubviews;
- (id)makeTitleLabel;
- (void)removeLabelsAndValues;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1 andLayout:(BOOL)arg2;
- (id)titleLabel;

@end

