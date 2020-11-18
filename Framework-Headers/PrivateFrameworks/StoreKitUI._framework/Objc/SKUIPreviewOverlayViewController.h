//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/SKUIViewController.h>

#import <StoreKitUI/SKUIArtworkRequestDelegate-Protocol.h>
#import <StoreKitUI/SKUIItemStateCenterObserver-Protocol.h>
#import <StoreKitUI/SKUILayoutCacheDelegate-Protocol.h>
#import <StoreKitUI/UIGestureRecognizerDelegate-Protocol.h>

@class IKAppDocument, NSString, SKUIHorizontalLockupView, SKUILayoutCache, SKUIViewElementLayoutContext, SUPlayerStatus, UITapGestureRecognizer;

__attribute__((visibility("hidden")))
@interface SKUIPreviewOverlayViewController : SKUIViewController <SKUIItemStateCenterObserver, SKUIArtworkRequestDelegate, SKUILayoutCacheDelegate, UIGestureRecognizerDelegate>
{
    long long _backgroundStyle;
    IKAppDocument *_document;
    SKUILayoutCache *_layoutCache;
    SKUIViewElementLayoutContext *_layoutContext;
    SKUIHorizontalLockupView *_lockupView;
    SUPlayerStatus *_previewStatus;
    UITapGestureRecognizer *_tapGestureRecognizer;
}

@property (nonatomic) long long backgroundStyle; // @synthesize backgroundStyle=_backgroundStyle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_layoutCache;
- (double)_overlayWidth;
- (void)_tapAction:(id)arg1;
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;
- (void)dealloc;
- (void)documentDidUpdate:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (id)initWithDocument:(id)arg1;
- (void)itemStateCenter:(id)arg1 itemStatesChanged:(id)arg2;
- (void)layoutCacheDidFinishBatch:(id)arg1;
- (void)loadView;
- (void)prepareOverlayView;
- (void)reloadOverlayView;
- (void)showPreviewProgressWithStatus:(id)arg1 animated:(BOOL)arg2;

@end
