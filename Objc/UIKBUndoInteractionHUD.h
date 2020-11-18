//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIView.h>

@class UIKBUndoControl, UIKBUndoStyling, UILabel, UIVisualEffectView;
@protocol UIInteractiveUndoHUDActionDelegate;

__attribute__((visibility("hidden")))
@interface UIKBUndoInteractionHUD : UIView
{
    id<UIInteractiveUndoHUDActionDelegate> _actionDelegate;
    long long _mode;
    UIKBUndoControl *_leftButtonView;
    UIKBUndoControl *_rightButtonView;
    UIKBUndoControl *_aCutButtonView;
    UIKBUndoControl *_aCopyButtonView;
    UIKBUndoControl *_aPasteButtonView;
    UIVisualEffectView *_backgroundEffectView;
    UIVisualEffectView *_shadowView;
    UIView *_containerView;
    UIKBUndoStyling *_style;
    UILabel *_instructionalLabel;
}

@property (strong, nonatomic) UIKBUndoControl *aCopyButtonView; // @synthesize aCopyButtonView=_aCopyButtonView;
@property (strong, nonatomic) UIKBUndoControl *aCutButtonView; // @synthesize aCutButtonView=_aCutButtonView;
@property (strong, nonatomic) UIKBUndoControl *aPasteButtonView; // @synthesize aPasteButtonView=_aPasteButtonView;
@property (weak, nonatomic) id<UIInteractiveUndoHUDActionDelegate> actionDelegate; // @synthesize actionDelegate=_actionDelegate;
@property (strong, nonatomic) UIVisualEffectView *backgroundEffectView; // @synthesize backgroundEffectView=_backgroundEffectView;
@property (strong, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property (strong, nonatomic) UILabel *instructionalLabel; // @synthesize instructionalLabel=_instructionalLabel;
@property (strong, nonatomic) UIKBUndoControl *leftButtonView; // @synthesize leftButtonView=_leftButtonView;
@property (nonatomic) long long mode; // @synthesize mode=_mode;
@property (strong, nonatomic) UIKBUndoControl *rightButtonView; // @synthesize rightButtonView=_rightButtonView;
@property (strong, nonatomic) UIVisualEffectView *shadowView; // @synthesize shadowView=_shadowView;
@property (strong, nonatomic) UIKBUndoStyling *style; // @synthesize style=_style;

- (void).cxx_destruct;
- (BOOL)availableOfControl:(id)arg1;
- (void)controlActionDown:(id)arg1;
- (void)controlActionUpInside:(id)arg1;
- (void)controlActionUpOutside:(id)arg1;
- (id)createSeparatorView;
- (id)initWithKeyboardAppearance:(long long)arg1 isRTL:(BOOL)arg2 mode:(long long)arg3 sceneBounds:(struct CGRect)arg4;
- (void)performDelegateRedoAndUpdateHUDIfNeeded;
- (void)performDelegateUndoAndUpdateHUDIfNeeded;
- (BOOL)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateControlWithDirection:(long long)arg1 travelProgress:(double)arg2 isRTL:(BOOL)arg3;
- (void)updateHUDControlState;

@end

