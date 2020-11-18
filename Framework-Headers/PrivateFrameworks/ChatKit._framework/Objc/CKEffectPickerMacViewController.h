//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <ChatKit/CKEffectPickerViewControllerProtocol-Protocol.h>
#import <ChatKit/CKEffectPreviewCollectionViewControllerDelegate-Protocol.h>
#import <ChatKit/CKEffectSelectionViewControllerDelegate-Protocol.h>

@class CKBalloonView, CKChatControllerDummyAnimator, CKComposition, CKEffectPreviewCollectionViewController, CKEffectSelectionViewController, CKFullScreenEffectManager, NSLayoutConstraint, UIButton, UILabel, UIVibrancyEffect, UIView, UIVisualEffectView;
@protocol CKEffectPickerViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface CKEffectPickerMacViewController : UIViewController <CKEffectPreviewCollectionViewControllerDelegate, CKEffectSelectionViewControllerDelegate, CKEffectPickerViewControllerProtocol>
{
    BOOL _color;
    BOOL _isFirstLayout;
    id<CKEffectPickerViewControllerDelegate> _delegate;
    CKBalloonView *_balloonView;
    CKEffectPreviewCollectionViewController *_effectCollectionViewController;
    CKEffectSelectionViewController *_selectionViewController;
    CKChatControllerDummyAnimator *_dummyAnimator;
    UIView *_balloonContainer;
    UILabel *_titleLabel;
    UIVisualEffectView *_titleContainerView;
    UIVibrancyEffect *_titleVibrancyEffect;
    UIButton *_sendButton;
    UIButton *_closeButton;
    CKComposition *_composition;
    NSLayoutConstraint *_heightConstraint;
    CKFullScreenEffectManager *_fsem;
    UIView *_contentView;
    struct CGPoint _balloonViewOrigin;
}

@property (strong, nonatomic) UIView *balloonContainer; // @synthesize balloonContainer=_balloonContainer;
@property (strong, nonatomic) CKBalloonView *balloonView; // @synthesize balloonView=_balloonView;
@property (nonatomic) struct CGPoint balloonViewOrigin; // @synthesize balloonViewOrigin=_balloonViewOrigin;
@property (strong, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property (nonatomic) BOOL color; // @synthesize color=_color;
@property (strong, nonatomic) CKComposition *composition; // @synthesize composition=_composition;
@property (strong, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property (nonatomic) id<CKEffectPickerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (strong, nonatomic) CKChatControllerDummyAnimator *dummyAnimator; // @synthesize dummyAnimator=_dummyAnimator;
@property (strong, nonatomic) CKEffectPreviewCollectionViewController *effectCollectionViewController; // @synthesize effectCollectionViewController=_effectCollectionViewController;
@property (strong, nonatomic) CKFullScreenEffectManager *fsem; // @synthesize fsem=_fsem;
@property (strong, nonatomic) NSLayoutConstraint *heightConstraint; // @synthesize heightConstraint=_heightConstraint;
@property (nonatomic) BOOL isFirstLayout; // @synthesize isFirstLayout=_isFirstLayout;
@property (strong, nonatomic) CKEffectSelectionViewController *selectionViewController; // @synthesize selectionViewController=_selectionViewController;
@property (strong, nonatomic) UIButton *sendButton; // @synthesize sendButton=_sendButton;
@property (strong, nonatomic) UIVisualEffectView *titleContainerView; // @synthesize titleContainerView=_titleContainerView;
@property (strong, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property (strong, nonatomic) UIVibrancyEffect *titleVibrancyEffect; // @synthesize titleVibrancyEffect=_titleVibrancyEffect;

- (void).cxx_destruct;
- (id)_defaultSendAnimationContextForAnimationPreview;
- (BOOL)canBecomeFirstResponder;
- (void)closeButtonPressed:(id)arg1;
- (void)effectCollectionViewController:(id)arg1 willDisplayEffect:(id)arg2;
- (void)effectSelectionViewController:(id)arg1 didSelectEffectWithIdentifier:(id)arg2;
- (BOOL)effectShouldDisplayOverBalloon:(id)arg1;
- (void)handleTouchMoved:(struct CGPoint)arg1;
- (void)handleTouchUp:(struct CGPoint)arg1;
- (id)initWithComposition:(id)arg1 balloonViewOrigin:(struct CGPoint)arg2 color:(BOOL)arg3;
- (void)keyCommandReturn:(id)arg1;
- (id)keyCommands;
- (void)presentPicker;
- (void)setCloseButtonYPosition:(double)arg1;
- (void)startAnimationPreviewForIdentifier:(id)arg1;
- (void)touchUpInsideSendButton:(id)arg1;
- (void)updateColor:(BOOL)arg1;
- (void)updateHintTransition:(double)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end
