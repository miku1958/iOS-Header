//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsUI/CNPropertyPostalAddressCell.h>

#import <ContactsUI/CNStarkActionViewDelegate-Protocol.h>

@class CNStarkActionView, NSLayoutConstraint, NSString;

__attribute__((visibility("hidden")))
@interface CNStarkContactAddressPropertyCell : CNPropertyPostalAddressCell <CNStarkActionViewDelegate>
{
    CNStarkActionView *_actionView;
    NSLayoutConstraint *_labelViewFirstBaselineAnchorConstraint;
    NSLayoutConstraint *_valueViewFirstBaselineAnchorConstraint;
    NSLayoutConstraint *_contentViewBottomAnchorConstraint;
}

@property (readonly, nonatomic) CNStarkActionView *actionView; // @synthesize actionView=_actionView;
@property (strong, nonatomic) NSLayoutConstraint *contentViewBottomAnchorConstraint; // @synthesize contentViewBottomAnchorConstraint=_contentViewBottomAnchorConstraint;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSLayoutConstraint *labelViewFirstBaselineAnchorConstraint; // @synthesize labelViewFirstBaselineAnchorConstraint=_labelViewFirstBaselineAnchorConstraint;
@property (readonly) Class superclass;
@property (strong, nonatomic) NSLayoutConstraint *valueViewFirstBaselineAnchorConstraint; // @synthesize valueViewFirstBaselineAnchorConstraint=_valueViewFirstBaselineAnchorConstraint;

- (void).cxx_destruct;
- (void)_cnui_applyContactStyle;
- (void)actionViewTapped:(id)arg1;
- (id)constantConstraints;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)performDefaultAction;
- (void)setSeparatorStyle:(long long)arg1;
- (BOOL)shouldShowStar;
- (BOOL)supportsTintColorValue;
- (BOOL)supportsValueColorUsesLabelColor;
- (void)updateTransportButtons;
- (id)variableConstraints;

@end

