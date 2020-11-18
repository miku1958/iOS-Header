//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsUI/CNContactCell.h>

#import <ContactsUI/CNStarkActionViewDelegate-Protocol.h>

@class CNStarkActionView, NSDictionary, NSString, UILabel;
@protocol CNPropertyCellDelegate;

__attribute__((visibility("hidden")))
@interface CNStarkFaceTimeCell : CNContactCell <CNStarkActionViewDelegate>
{
    id<CNPropertyCellDelegate> _delegate;
    NSDictionary *_labelTextAttributes;
    UILabel *_faceTimeLabel;
    CNStarkActionView *_actionView;
}

@property (readonly, nonatomic) CNStarkActionView *actionView; // @synthesize actionView=_actionView;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<CNPropertyCellDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) UILabel *faceTimeLabel; // @synthesize faceTimeLabel=_faceTimeLabel;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSDictionary *labelTextAttributes; // @synthesize labelTextAttributes=_labelTextAttributes;
@property (readonly) Class superclass;

+ (BOOL)requiresConstraintBasedLayout;
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
- (void)updateTransportButtons;
- (id)variableConstraints;

@end
