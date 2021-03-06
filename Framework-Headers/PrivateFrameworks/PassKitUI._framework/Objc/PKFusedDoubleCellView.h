//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <PassKitUI/PKPaymentDashboardCellActionHandleable-Protocol.h>

@class NSString, PKPaymentPass, UIColor, UIImageView, UILabel;

@interface PKFusedDoubleCellView : UIView <PKPaymentDashboardCellActionHandleable>
{
    UIView *_separatorView;
    UIImageView *_disclosureView;
    double _topPadding;
    double _middlePadding;
    BOOL _isTemplateLayout;
    UILabel *_leftTitleView;
    UILabel *_leftDetailView;
    UILabel *_leftSubDetailView;
    UILabel *_rightTitleView;
    UILabel *_rightDetailView;
    UILabel *_rightSubDetailView;
    unsigned long long _deferUpdateCounter;
    BOOL _animated;
    BOOL _enableDisclosure;
    PKPaymentPass *_pass;
    UIColor *_leftTitleColor;
    UIColor *_leftDetailColor;
    UIColor *_leftSubDetailColor;
    UIColor *_rightTitleColor;
    UIColor *_rightDetailColor;
    UIColor *_rightSubDetailColor;
    long long _leftTitleLineBreakMode;
    long long _leftDetailLineBreakMode;
    long long _leftSubDetailLineBreakMode;
    long long _rightTitleLineBreakMode;
    long long _rightDetailLineBreakMode;
    long long _rightSubDetailLineBreakMode;
    NSString *_leftTitle;
    NSString *_leftDetail;
    NSString *_leftSubDetail;
    NSString *_rightTitle;
    NSString *_rightDetail;
    NSString *_rightSubDetail;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL enableDisclosure; // @synthesize enableDisclosure=_enableDisclosure;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSString *leftDetail; // @synthesize leftDetail=_leftDetail;
@property (copy, nonatomic) UIColor *leftDetailColor; // @synthesize leftDetailColor=_leftDetailColor;
@property (nonatomic) long long leftDetailLineBreakMode; // @synthesize leftDetailLineBreakMode=_leftDetailLineBreakMode;
@property (copy, nonatomic) NSString *leftSubDetail; // @synthesize leftSubDetail=_leftSubDetail;
@property (copy, nonatomic) UIColor *leftSubDetailColor; // @synthesize leftSubDetailColor=_leftSubDetailColor;
@property (nonatomic) long long leftSubDetailLineBreakMode; // @synthesize leftSubDetailLineBreakMode=_leftSubDetailLineBreakMode;
@property (copy, nonatomic) NSString *leftTitle; // @synthesize leftTitle=_leftTitle;
@property (copy, nonatomic) UIColor *leftTitleColor; // @synthesize leftTitleColor=_leftTitleColor;
@property (nonatomic) long long leftTitleLineBreakMode; // @synthesize leftTitleLineBreakMode=_leftTitleLineBreakMode;
@property (copy, nonatomic) PKPaymentPass *pass; // @synthesize pass=_pass;
@property (copy, nonatomic) NSString *rightDetail; // @synthesize rightDetail=_rightDetail;
@property (copy, nonatomic) UIColor *rightDetailColor; // @synthesize rightDetailColor=_rightDetailColor;
@property (nonatomic) long long rightDetailLineBreakMode; // @synthesize rightDetailLineBreakMode=_rightDetailLineBreakMode;
@property (copy, nonatomic) NSString *rightSubDetail; // @synthesize rightSubDetail=_rightSubDetail;
@property (copy, nonatomic) UIColor *rightSubDetailColor; // @synthesize rightSubDetailColor=_rightSubDetailColor;
@property (nonatomic) long long rightSubDetailLineBreakMode; // @synthesize rightSubDetailLineBreakMode=_rightSubDetailLineBreakMode;
@property (copy, nonatomic) NSString *rightTitle; // @synthesize rightTitle=_rightTitle;
@property (copy, nonatomic) UIColor *rightTitleColor; // @synthesize rightTitleColor=_rightTitleColor;
@property (nonatomic) long long rightTitleLineBreakMode; // @synthesize rightTitleLineBreakMode=_rightTitleLineBreakMode;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_detailFont;
- (struct CGSize)_layoutWithBounds:(struct CGRect)arg1;
- (BOOL)_leftNeedsThirdLine;
- (void)_performInit;
- (BOOL)_rightNeedsThirdLine;
- (void)_setupViews;
- (id)_subDetailFont;
- (id)_titleFont;
- (void)_updateContent:(BOOL)arg1;
- (void)beginUpdates;
- (void)endUpdates:(BOOL)arg1;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutIfNeededAnimated:(BOOL)arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (long long)viewType;

@end

