//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ChatKit/CKCoreTranscriptController.h>

#import <ChatKit/CKCoreTranscriptControllerProtocol-Protocol.h>

@class CKConversation, CKFullScreenEffectManager, CKImpactEffectManager, CKTranscriptCollectionView, IMChat, NSArray, NSIndexSet, NSObject, NSString, UITapGestureRecognizer, UIView;
@protocol CKGradientReferenceView, CKTranscriptCollectionViewControllerDelegate, OS_dispatch_group, UIDragInteractionDelegate;

@interface CKTranscriptController : CKCoreTranscriptController <CKCoreTranscriptControllerProtocol>
{
}

@property (strong, nonatomic, setter=__setCurrentTestName:) NSString *__CurrentTestName;
@property (nonatomic) BOOL allowsPluginPlayback;
@property (readonly, copy, nonatomic) NSArray *associatedChatItems;
@property (readonly, nonatomic) double balloonMaxWidth;
@property (readonly, nonatomic) IMChat *chat;
@property (readonly, copy, nonatomic) NSArray *chatItems;
@property (readonly, nonatomic) CKTranscriptCollectionView *collectionView;
@property (nonatomic) long long contentAnimationPauseReasons;
@property (readonly, nonatomic) CKConversation *conversation;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<CKTranscriptCollectionViewControllerDelegate> delegate;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) id<UIDragInteractionDelegate> dragInteractionDelegate;
@property (strong, nonatomic) CKFullScreenEffectManager *fullscreenEffectManager;
@property (strong, nonatomic) UIView<CKGradientReferenceView> *gradientReferenceView;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSIndexSet *hiddenAssociatedItems;
@property (copy, nonatomic) NSIndexSet *hiddenBalloonViews;
@property (copy, nonatomic) NSIndexSet *hiddenItems;
@property (strong, nonatomic) CKImpactEffectManager *impactEffectManager;
@property (nonatomic, getter=isInitialLoad) BOOL initialLoad;
@property (strong, nonatomic) UITapGestureRecognizer *loggingTapGestureRecognizer;
@property (readonly, nonatomic) struct UIEdgeInsets marginInsets;
@property (nonatomic) double pluginPlaybackDelay;
@property (nonatomic) BOOL shouldLoadDefaultConversationViewingMessageCountOnAppear;
@property (readonly) Class superclass;
@property (nonatomic, getter=isTranscriptUpdateAnimated) BOOL transcriptUpdateAnimated;
@property (nonatomic) BOOL transitionedFromComposing;
@property (nonatomic) BOOL transitioningFromComposing;
@property (readonly, nonatomic) NSObject<OS_dispatch_group> *updateAnimationGroup;

@end
