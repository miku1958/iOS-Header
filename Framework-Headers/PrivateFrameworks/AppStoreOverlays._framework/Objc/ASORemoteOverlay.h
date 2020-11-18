//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppStoreOverlays/ASORemoteAppOverlayDelegate-Protocol.h>

@class ASCSignpostSpan, ASOOverlayTransitionContext, NSString;
@protocol ASOOverlay, ASOOverlayConfiguration, ASORemoteContextProvider;

__attribute__((visibility("hidden")))
@interface ASORemoteOverlay : NSObject <ASORemoteAppOverlayDelegate>
{
    BOOL _isLoaded;
    BOOL _isActive;
    id<ASORemoteContextProvider> _contextProvider;
    id<ASOOverlay> _overlay;
    ASCSignpostSpan *_hostSpan;
    ASOOverlayTransitionContext *_presentationTransitionContext;
}

@property (weak, nonatomic) id<ASORemoteContextProvider> contextProvider; // @synthesize contextProvider=_contextProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, strong, nonatomic) ASCSignpostSpan *hostSpan; // @synthesize hostSpan=_hostSpan;
@property (nonatomic) BOOL isActive; // @synthesize isActive=_isActive;
@property (nonatomic) BOOL isLoaded; // @synthesize isLoaded=_isLoaded;
@property (strong, nonatomic) id<ASOOverlay> overlay; // @synthesize overlay=_overlay;
@property (readonly, copy, nonatomic) id<ASOOverlayConfiguration> overlayConfiguration;
@property (strong, nonatomic) ASOOverlayTransitionContext *presentationTransitionContext; // @synthesize presentationTransitionContext=_presentationTransitionContext;
@property (readonly) Class superclass;

+ (id)dismissOverlayOperationWithContextProvider:(id)arg1;
+ (id)log;
- (void).cxx_destruct;
- (id)context;
- (void)finishWithError:(id)arg1;
- (id)initWithOverlay:(id)arg1 contextProvider:(id)arg2 hostSpan:(id)arg3;
- (id)presentOverlayOperation;
- (void)remoteStoreOverlayDidFailToLoadWithError:(id)arg1;
- (void)remoteStoreOverlayDidFinishDismissal:(id)arg1;
- (void)remoteStoreOverlayDidFinishPresentation:(id)arg1;
- (void)remoteStoreOverlayWillStartDismissing:(id)arg1 executeBlock:(CDUnknownBlockType)arg2;
- (void)remoteStoreOverlayWillStartPresenting:(id)arg1 executeBlock:(CDUnknownBlockType)arg2;

@end
