//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <MobileMailUI/MFReusable-Protocol.h>

@class MFMessageDisplayMetrics, MessageHeaderViewModel, NSLayoutConstraint, NSString, SeparatorLayer, UILayoutGuide;
@protocol EFCancelable;

@interface MFMessageHeaderViewBlock : UIView <MFReusable>
{
    BOOL _separatorIsHidden;
    BOOL _separatorDrawsFlushWithLeadingEdge;
    BOOL _separatorDrawsFlushWithTrailingEdge;
    BOOL _usingLargeTextLayout;
    BOOL _interactivelyResizing;
    MessageHeaderViewModel *_viewModel;
    MFMessageDisplayMetrics *_displayMetrics;
    SeparatorLayer *_separator;
    UILayoutGuide *_trailingAccessoryViewLayoutGuide;
    NSLayoutConstraint *_trailingAccessoryViewLayoutGuideWidth;
    NSLayoutConstraint *_trailingAccessoryViewLayoutGuideTrailing;
    NSLayoutConstraint *_separatorLeading;
    NSLayoutConstraint *_separatorTrailing;
    id<EFCancelable> _observableCancelable;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) MFMessageDisplayMetrics *displayMetrics; // @synthesize displayMetrics=_displayMetrics;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL interactivelyResizing; // @synthesize interactivelyResizing=_interactivelyResizing;
@property (strong, nonatomic) id<EFCancelable> observableCancelable; // @synthesize observableCancelable=_observableCancelable;
@property (strong, nonatomic) SeparatorLayer *separator; // @synthesize separator=_separator;
@property (nonatomic) BOOL separatorDrawsFlushWithLeadingEdge; // @synthesize separatorDrawsFlushWithLeadingEdge=_separatorDrawsFlushWithLeadingEdge;
@property (nonatomic) BOOL separatorDrawsFlushWithTrailingEdge; // @synthesize separatorDrawsFlushWithTrailingEdge=_separatorDrawsFlushWithTrailingEdge;
@property (nonatomic) BOOL separatorIsHidden; // @synthesize separatorIsHidden=_separatorIsHidden;
@property (strong, nonatomic) NSLayoutConstraint *separatorLeading; // @synthesize separatorLeading=_separatorLeading;
@property (strong, nonatomic) NSLayoutConstraint *separatorTrailing; // @synthesize separatorTrailing=_separatorTrailing;
@property (readonly) Class superclass;
@property (strong, nonatomic) UILayoutGuide *trailingAccessoryViewLayoutGuide; // @synthesize trailingAccessoryViewLayoutGuide=_trailingAccessoryViewLayoutGuide;
@property (strong, nonatomic) NSLayoutConstraint *trailingAccessoryViewLayoutGuideTrailing; // @synthesize trailingAccessoryViewLayoutGuideTrailing=_trailingAccessoryViewLayoutGuideTrailing;
@property (strong, nonatomic) NSLayoutConstraint *trailingAccessoryViewLayoutGuideWidth; // @synthesize trailingAccessoryViewLayoutGuideWidth=_trailingAccessoryViewLayoutGuideWidth;
@property (nonatomic) BOOL usingLargeTextLayout; // @synthesize usingLargeTextLayout=_usingLargeTextLayout;
@property (strong, nonatomic) MessageHeaderViewModel *viewModel; // @synthesize viewModel=_viewModel;

- (void).cxx_destruct;
- (void)createPrimaryViews;
- (void)displayMessageUsingViewModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)initializePrimaryLayoutConstraints;
- (void)prepareForReuse;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateConstraints;

@end

