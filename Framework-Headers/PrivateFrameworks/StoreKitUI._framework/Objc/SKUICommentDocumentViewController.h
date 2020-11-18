//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/SKUIViewController.h>

#import <StoreKitUI/SKUIArtworkRequestDelegate-Protocol.h>
#import <StoreKitUI/SKUICommentDelegate-Protocol.h>
#import <StoreKitUI/SKUIDocumentViewController-Protocol.h>
#import <StoreKitUI/SKUILayoutCacheDelegate-Protocol.h>

@class NSArray, NSMutableSet, NSString, SKUICommentPostBarView, SKUICommentTemplateViewElement, SKUILayoutCache, SKUIMediaSocialAuthor, SKUIStackDocumentViewController, SKUIStackTemplateElement, SKUIViewElementLayoutContext;

@interface SKUICommentDocumentViewController : SKUIViewController <SKUIArtworkRequestDelegate, SKUILayoutCacheDelegate, SKUICommentDelegate, SKUIDocumentViewController>
{
    SKUIMediaSocialAuthor *_authorForActiveAccount;
    SKUIStackDocumentViewController *_childViewController;
    NSArray *_commenters;
    BOOL _didShowKeyboard;
    BOOL _keyboardVisible;
    struct CGRect _keyboardRect;
    SKUIViewElementLayoutContext *_layoutContext;
    NSMutableSet *_observedArtworkRequestIDs;
    SKUICommentPostBarView *_postView;
    BOOL _scrollNewCommentToView;
    long long _selectedCommenter;
    SKUIStackTemplateElement *_stackTemplateElement;
    SKUICommentTemplateViewElement *_templateElement;
    SKUILayoutCache *_textLayoutCache;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_backgroundColor;
- (void)_changeCommenter;
- (void)_checkSubscriptionStatus:(id)arg1 isFinal:(BOOL)arg2 error:(id)arg3;
- (id)_getSelectedCommenter;
- (void)_getSubscriptionStatus;
- (void)_keyboardDidHideChangeNotification:(id)arg1;
- (void)_keyboardWillChangeFrameNotification:(id)arg1;
- (void)_keyboardWillChangeNotification:(id)arg1 accountForGuideLines:(BOOL)arg2 applyKeyboardOffset:(BOOL)arg3;
- (void)_keyboardWillHideNotification:(id)arg1;
- (void)_keyboardWillShowNotification:(id)arg1;
- (id)_layoutContext;
- (void)_layoutKeyboard;
- (void)_layoutScrollView:(double)arg1;
- (BOOL)_loadImageForURL:(id)arg1 cacheKey:(id)arg2 dataConsumer:(id)arg3 reason:(long long)arg4;
- (void)_preloadCommenterImages;
- (void)_reloadContentSize:(double)arg1;
- (void)_setSelectedCommenter:(long long)arg1;
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;
- (void)commentPostBarView:(id)arg1 changeCommenter:(id)arg2;
- (void)commentPostBarView:(id)arg1 text:(id)arg2 as:(id)arg3;
- (void)dealloc;
- (void)documentDidUpdate:(id)arg1;
- (id)initWithTemplateElement:(id)arg1;
- (void)layoutCacheDidFinishBatch:(id)arg1;
- (void)loadView;
- (void)updateStackElement:(id)arg1 withView:(id)arg2;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;

@end

