//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class NSObject, NSString, TSKDocumentRoot, TSUImage, UIView;
@protocol TSDSwatchRenderingOperationDelegate, TSKAccessControllerReadTicket, TSSPreset;

__attribute__((visibility("hidden")))
@interface TSDSwatchRenderingOperation : NSOperation
{
    UIView *mView;
    NSObject<TSSPreset> *mPreset;
    struct CGSize mImageSize;
    double mImageScale;
    struct CGRect mSwatchFrame;
    TSKDocumentRoot *mDocumentRoot;
    struct CGImage *mDeliveredImage;
    unsigned long long mInsertPopoverPageType;
    unsigned long long mInsertPopoverPageNumber;
    NSString *mIdentifier;
    TSUImage *mSwatch;
    id<TSKAccessControllerReadTicket> mRenderingTicket;
    BOOL mWaitingToBecomeReady;
    BOOL mRenderForWideGamut;
    BOOL mSuppressesAnimation;
    id<TSDSwatchRenderingOperationDelegate> mDelegate;
    BOOL mDeliversImageAutomatically;
}

@property (weak, nonatomic) id<TSDSwatchRenderingOperationDelegate> delegate; // @synthesize delegate=mDelegate;
@property (readonly, nonatomic) struct CGImage *deliveredImage;
@property (nonatomic) BOOL deliversImageAutomatically; // @synthesize deliversImageAutomatically=mDeliversImageAutomatically;
@property (readonly) TSKDocumentRoot *documentRoot; // @synthesize documentRoot=mDocumentRoot;
@property (copy) NSString *identifier; // @synthesize identifier=mIdentifier;
@property (readonly) double imageScale; // @synthesize imageScale=mImageScale;
@property (readonly) struct CGSize imageSize; // @synthesize imageSize=mImageSize;
@property unsigned long long insertPopoverPageNumber; // @synthesize insertPopoverPageNumber=mInsertPopoverPageNumber;
@property unsigned long long insertPopoverPageType; // @synthesize insertPopoverPageType=mInsertPopoverPageType;
@property (readonly) NSObject<TSSPreset> *preset; // @synthesize preset=mPreset;
@property (readonly, nonatomic) BOOL renderForWideGamut; // @synthesize renderForWideGamut=mRenderForWideGamut;
@property (strong, nonatomic) id<TSKAccessControllerReadTicket> renderingTicket;
@property (nonatomic) BOOL suppressesAnimation; // @synthesize suppressesAnimation=mSuppressesAnimation;
@property (readonly) struct CGRect swatchFrame; // @synthesize swatchFrame=mSwatchFrame;
@property (strong) UIView *view; // @synthesize view=mView;

- (void).cxx_destruct;
- (void)cancel;
- (void)dealloc;
- (void)deliverCGImage:(struct CGImage *)arg1;
- (void)deliverSwatch;
- (void)doWorkWithReadLock;
- (id)initWithPreset:(id)arg1 imageSize:(struct CGSize)arg2 imageScale:(double)arg3 swatchFrame:(struct CGRect)arg4 documentRoot:(id)arg5;
- (BOOL)isReady;
- (BOOL)isReadyToRender;
- (void)main;
- (BOOL)needsPressedStateBackground;
- (void)p_applicationDidBecomeActive:(id)arg1;
- (void)p_deliverResultOnMainThread:(id)arg1;
- (void)p_didFinishRendering;
- (id)p_extendedRenderingTicket;
- (struct CGImage *)p_newSwatchPressedStateBackgroundFromCGImage:(struct CGImage *)arg1;
- (void)p_showSwatchInViewAnimated:(BOOL)arg1;
- (struct UIEdgeInsets)swatchEdgeInsets;

@end

