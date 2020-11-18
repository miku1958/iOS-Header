//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSString, UIColor, UILabel, UIVisualEffectView;

@interface AVTUserInfoView : UIView
{
    BOOL _isRegisteredForCategorySizeChange;
    UIColor *_containerBackgroundColor;
    UIVisualEffectView *_userInfoEffectView;
    UILabel *_userInfoLabel;
    NSArray *_activeConstraints;
    struct NSDirectionalEdgeInsets _textInsets;
}

@property (strong, nonatomic) NSArray *activeConstraints; // @synthesize activeConstraints=_activeConstraints;
@property (nonatomic) UIColor *containerBackgroundColor; // @synthesize containerBackgroundColor=_containerBackgroundColor;
@property (nonatomic) BOOL isRegisteredForCategorySizeChange; // @synthesize isRegisteredForCategorySizeChange=_isRegisteredForCategorySizeChange;
@property (strong, nonatomic) NSString *text;
@property (nonatomic) struct NSDirectionalEdgeInsets textInsets; // @synthesize textInsets=_textInsets;
@property (strong, nonatomic) UIVisualEffectView *userInfoEffectView; // @synthesize userInfoEffectView=_userInfoEffectView;
@property (strong, nonatomic) UILabel *userInfoLabel; // @synthesize userInfoLabel=_userInfoLabel;

+ (double)textVerticalPadding;
- (void).cxx_destruct;
- (void)_configure;
- (void)contentSizeCategoryDidChange:(id)arg1;
- (void)didMoveToWindow;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)updateConstraints;

@end
