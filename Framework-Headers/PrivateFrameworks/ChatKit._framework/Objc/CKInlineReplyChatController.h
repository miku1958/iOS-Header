//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ChatKit/CKChatController.h>

@class CKInlineReplyCollectionViewController, CKInlineReplyTransitionContext, IMMessageItem, NSString, UINavigationBarAppearance, UIVisualEffectView;
@protocol CKInlineReplyInteractionDelegate;

@interface CKInlineReplyChatController : CKChatController
{
    BOOL _animatingIn;
    BOOL _animatingOut;
    BOOL _isInitialLoad;
    BOOL _isInitialSizing;
    BOOL _showNavbarKeyline;
    NSString *_threadIdentifier;
    IMMessageItem *_threadOriginator;
    CKInlineReplyTransitionContext *_transitionContext;
    id<CKInlineReplyInteractionDelegate> _interactionDelegate;
    UIVisualEffectView *_blurView;
    UINavigationBarAppearance *_navBarAppearance;
}

@property (nonatomic) BOOL animatingIn; // @synthesize animatingIn=_animatingIn;
@property (nonatomic) BOOL animatingOut; // @synthesize animatingOut=_animatingOut;
@property (strong, nonatomic) UIVisualEffectView *blurView; // @synthesize blurView=_blurView;
@property (readonly, nonatomic) CKInlineReplyCollectionViewController *inlineCollectionViewController;
@property (weak, nonatomic) id<CKInlineReplyInteractionDelegate> interactionDelegate; // @synthesize interactionDelegate=_interactionDelegate;
@property (nonatomic) BOOL isInitialLoad; // @synthesize isInitialLoad=_isInitialLoad;
@property (nonatomic) BOOL isInitialSizing; // @synthesize isInitialSizing=_isInitialSizing;
@property (strong, nonatomic) UINavigationBarAppearance *navBarAppearance; // @synthesize navBarAppearance=_navBarAppearance;
@property (nonatomic) BOOL showNavbarKeyline; // @synthesize showNavbarKeyline=_showNavbarKeyline;
@property (copy, nonatomic) NSString *threadIdentifier; // @synthesize threadIdentifier=_threadIdentifier;
@property (strong, nonatomic) IMMessageItem *threadOriginator; // @synthesize threadOriginator=_threadOriginator;
@property (strong, nonatomic) CKInlineReplyTransitionContext *transitionContext; // @synthesize transitionContext=_transitionContext;

+ (Class)_gradientReferenceViewClass;
+ (Class)transcriptControllerClass;
- (void).cxx_destruct;
- (void)_animateIn;
- (void)_animateOut;
- (struct UIEdgeInsets)_contentInsetForSendAnimation;
- (id)_defaultTranscriptNavBarAppearance;
- (void)_didSendCompositionInConversation:(id)arg1;
- (id)_imMessageForIMMessageItem:(id)arg1;
- (struct CGRect)_initialFrameForCollectionView;
- (id)_navigationBarAppearanceWithKeyline:(BOOL)arg1;
- (void)_requestDismissal;
- (void)_restoreDraftState;
- (void)_saveDraftState;
- (void)_setInitialScrollPositionIfNecessary;
- (void)_updateNavigationUI;
- (id)_visibleGUIDs;
- (double)accessoryViewHeight;
- (BOOL)becomeFirstResponder;
- (void)cleanUpDarkEffectStyle;
- (struct CGSize)contentSizeForPinning;
- (void)dismissController;
- (BOOL)getContainerWidth:(double *)arg1 offset:(double *)arg2;
- (struct CGRect)gradientFrameWithInsets:(struct UIEdgeInsets)arg1;
- (id)initWithConversation:(id)arg1 threadIdentifier:(id)arg2 threadOriginator:(id)arg3 transitionContext:(id)arg4;
- (id)inputAccessoryView;
- (id)inputController;
- (id)inputViewController;
- (BOOL)isInline;
- (void)messageEntryViewDidBeginEditing:(id)arg1;
- (struct UIEdgeInsets)navigationBarInsetsWithoutPalette;
- (void)reloadEntryViewIfNeeded;
- (void)reloadInputViews;
- (void)sendMessage:(id)arg1 forConversation:(id)arg2 newComposition:(BOOL)arg3;
- (void)sendMessage:(id)arg1 forConversation:(id)arg2 onService:(id)arg3 newComposition:(BOOL)arg4;
- (void)setIsShowingPreview:(BOOL)arg1;
- (void)setTargetFirstResponder:(long long)arg1;
- (void)setUpStyleForDarkEffect;
- (BOOL)shouldListParticipantsInTitle;
- (void)stageAssetArchive:(id)arg1 skipShelf:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)tapGestureRecognized:(id)arg1;
- (long long)targetFirstResponder;
- (double)throwAnimationFinalFrameOffset:(id)arg1;
- (double)throwAnimationManagerTopHeaderHeight:(id)arg1;
- (void)transcriptCollectionViewController:(id)arg1 collectionViewContentSizeDidChange:(struct CGSize)arg2;
- (void)transcriptCollectionViewController:(id)arg1 didScroll:(struct CGPoint)arg2;
- (double)transcriptCollectionViewController:(id)arg1 targetAlphaForChatItem:(id)arg2;
- (void)transcriptCollectionViewControllerChatItemsDidChange:(id)arg1;
- (void)transcriptCollectionViewControllerRestingStateDidChange:(id)arg1;
- (void)updateScrollGeometry;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end

