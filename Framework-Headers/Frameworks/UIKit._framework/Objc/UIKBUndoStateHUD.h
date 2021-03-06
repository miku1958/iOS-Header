//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIView.h>

@class NSLayoutConstraint, UIKBUndoStyling, UILabel, UIVisualEffectView;

__attribute__((visibility("hidden")))
@interface UIKBUndoStateHUD : UIView
{
    long long _controlType;
    NSLayoutConstraint *_undoStateHUDWidthConstraint;
    NSLayoutConstraint *_undoStateHUDHeightConstraint;
    UIVisualEffectView *_shadowView;
    UIView *_containerView;
    UILabel *_labelView;
    UIKBUndoStyling *_style;
}

@property (strong, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property (nonatomic) long long controlType; // @synthesize controlType=_controlType;
@property (strong, nonatomic) UILabel *labelView; // @synthesize labelView=_labelView;
@property (strong, nonatomic) UIVisualEffectView *shadowView; // @synthesize shadowView=_shadowView;
@property (strong, nonatomic) UIKBUndoStyling *style; // @synthesize style=_style;
@property (strong, nonatomic) NSLayoutConstraint *undoStateHUDHeightConstraint; // @synthesize undoStateHUDHeightConstraint=_undoStateHUDHeightConstraint;
@property (strong, nonatomic) NSLayoutConstraint *undoStateHUDWidthConstraint; // @synthesize undoStateHUDWidthConstraint=_undoStateHUDWidthConstraint;

- (void).cxx_destruct;
- (id)initWithKeyboardAppearance:(long long)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateUndoStateHUDControlType:(long long)arg1 available:(BOOL)arg2;

@end

