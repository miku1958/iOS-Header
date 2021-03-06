//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <CarPlaySupport/CPSActionButtonLayoutDelegate-Protocol.h>
#import <CarPlaySupport/CPSButtonDelegate-Protocol.h>
#import <CarPlaySupport/CPSLinearFocusProviding-Protocol.h>

@class CPPointOfInterest, CPSStyledTextButton, NSString, UILabel, UIStackView;
@protocol CPSPointsOfInterestPickerInfoDelegate;

@interface CPSPointsOfInterestPickerInfoView : UIView <CPSButtonDelegate, CPSActionButtonLayoutDelegate, CPSLinearFocusProviding>
{
    CPPointOfInterest *_model;
    id<CPSPointsOfInterestPickerInfoDelegate> _delegate;
    UIStackView *_topStackView;
    UIStackView *_bottomStackView;
    UILabel *_detailsTitle;
    UILabel *_detailsSubtitle;
    UILabel *_detailsInformativeText;
    CPSStyledTextButton *_primaryButton;
    CPSStyledTextButton *_secondaryButton;
}

@property (strong, nonatomic) UIStackView *bottomStackView; // @synthesize bottomStackView=_bottomStackView;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<CPSPointsOfInterestPickerInfoDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) UILabel *detailsInformativeText; // @synthesize detailsInformativeText=_detailsInformativeText;
@property (strong, nonatomic) UILabel *detailsSubtitle; // @synthesize detailsSubtitle=_detailsSubtitle;
@property (strong, nonatomic) UILabel *detailsTitle; // @synthesize detailsTitle=_detailsTitle;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) CPPointOfInterest *model; // @synthesize model=_model;
@property (strong, nonatomic) CPSStyledTextButton *primaryButton; // @synthesize primaryButton=_primaryButton;
@property (strong, nonatomic) CPSStyledTextButton *secondaryButton; // @synthesize secondaryButton=_secondaryButton;
@property (readonly) Class superclass;
@property (strong, nonatomic) UIStackView *topStackView; // @synthesize topStackView=_topStackView;
@property (readonly, nonatomic) BOOL useRightHandDriveFocusGuide;

- (void).cxx_destruct;
- (id)_linearFocusItems;
- (void)didSelectButton:(id)arg1;
- (struct UIEdgeInsets)safeAreaInsets;
- (void)setupViews;
- (void)updateWithModel:(id)arg1;

@end

