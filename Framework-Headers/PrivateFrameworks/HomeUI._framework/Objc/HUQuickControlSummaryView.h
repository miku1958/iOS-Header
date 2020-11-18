//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class HUIconView, NSArray, UILabel;
@protocol HFStringGenerator;

@interface HUQuickControlSummaryView : UIView
{
    HUIconView *_iconView;
    id<HFStringGenerator> _primaryStatusText;
    id<HFStringGenerator> _secondaryStatusText;
    unsigned long long _contentAlignment;
    long long _sizeSubclass;
    unsigned long long _iconSize;
    UILabel *_primaryStatusLabel;
    UILabel *_secondaryStatusLabel;
    NSArray *_contentConstraints;
}

@property (nonatomic) unsigned long long contentAlignment; // @synthesize contentAlignment=_contentAlignment;
@property (strong, nonatomic) NSArray *contentConstraints; // @synthesize contentConstraints=_contentConstraints;
@property (nonatomic) unsigned long long iconSize; // @synthesize iconSize=_iconSize;
@property (readonly, nonatomic) HUIconView *iconView; // @synthesize iconView=_iconView;
@property (readonly, nonatomic) UILabel *primaryStatusLabel; // @synthesize primaryStatusLabel=_primaryStatusLabel;
@property (copy, nonatomic) id<HFStringGenerator> primaryStatusText; // @synthesize primaryStatusText=_primaryStatusText;
@property (readonly, nonatomic) UILabel *secondaryStatusLabel; // @synthesize secondaryStatusLabel=_secondaryStatusLabel;
@property (copy, nonatomic) id<HFStringGenerator> secondaryStatusText; // @synthesize secondaryStatusText=_secondaryStatusText;
@property (nonatomic) long long sizeSubclass; // @synthesize sizeSubclass=_sizeSubclass;

+ (BOOL)requiresConstraintBasedLayout;
- (void).cxx_destruct;
- (double)_iconHeight;
- (void)_invalidateContentAndConstraints;
- (id)_statusParagraphStyleWithLineHeight:(double)arg1;
- (void)_updatePrimaryStatusContent;
- (void)_updateSecondaryStatusContent;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)updateConstraints;
- (id)viewForFirstBaselineLayout;
- (id)viewForLastBaselineLayout;

@end

