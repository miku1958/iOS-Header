//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <PromotedContentUI/APPCMetricRegister-Protocol.h>

@class APPCPromotedContentInfo, APPrivacyMarker, MISSING_TYPE;
@protocol APPCDiagnosticMetricsHelping, APPCMetricsInteractionPresentationDelegate, APPCMetricsViewReadyDelegate;

@interface APPCMetricsView : UIView <APPCMetricRegister>
{
    MISSING_TYPE *startsCollapsed;
    MISSING_TYPE *frameObserver;
    MISSING_TYPE *currentlyViewable;
    MISSING_TYPE *context;
    MISSING_TYPE *promotedContent;
    MISSING_TYPE *debugView;
    MISSING_TYPE *forcedReadiness;
    MISSING_TYPE *wasTapped;
    MISSING_TYPE *isBackgrounded;
    MISSING_TYPE *timingTracking;
    MISSING_TYPE *visibilityChecker;
    MISSING_TYPE *needToSendOnScreen;
    MISSING_TYPE *interactionPresentationDelegate;
    MISSING_TYPE *visbilityCheckingView;
    MISSING_TYPE *offsetObserver;
    MISSING_TYPE *_isCollapsed;
    MISSING_TYPE *readinessObserver;
    MISSING_TYPE *visibleThresholds;
    MISSING_TYPE *contentView;
    MISSING_TYPE *ready;
    MISSING_TYPE *readyDelegate;
    MISSING_TYPE *promotedContentInfo;
}

@property (nonatomic, readonly) id<APPCDiagnosticMetricsHelping> diagnosticMetricHelper;
@property (nonatomic) struct CGRect frame;
@property (nonatomic, weak) id<APPCMetricsInteractionPresentationDelegate> interactionPresentationDelegate; // @synthesize interactionPresentationDelegate;
@property (nonatomic, readonly) struct CGRect privacyMarkerFrame;
@property (nonatomic, readonly) APPrivacyMarker *privacyMarkerView;
@property (nonatomic, strong) APPCPromotedContentInfo *promotedContentInfo; // @synthesize promotedContentInfo;
@property (nonatomic) BOOL ready; // @synthesize ready;
@property (nonatomic, weak) id<APPCMetricsViewReadyDelegate> readyDelegate; // @synthesize readyDelegate;

- (void).cxx_destruct;
- (void)appBackgrounded:(id)arg1;
- (void)appForegrounded:(id)arg1;
- (void)appWillResignActive:(id)arg1;
- (void)collapse;
- (void)dealloc;
- (void)didMoveToSuperview;
- (void)didMoveToWindow;
- (void)expand;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)registerHandlerForAllMetricsWithClosure:(CDUnknownBlockType)arg1;
- (void)removeHandler;
- (BOOL)safeCollapseAndReturnError:(id *)arg1;
- (BOOL)safeExpandAndReturnError:(id *)arg1;
- (void)unloadAdViewIfRequired;
- (void)willEnterforeground;
- (void)willMoveToSuperview:(id)arg1;

@end

