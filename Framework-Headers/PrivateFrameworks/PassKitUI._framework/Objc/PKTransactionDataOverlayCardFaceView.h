//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <PassKitUI/PKForegroundActiveArbiterObserver-Protocol.h>
#import <PassKitUI/PKPaymentServiceDelegate-Protocol.h>

@class NSString, PKCategoryVisualizationCardView, PKPass, PKPaymentService, UIImageView;

@interface PKTransactionDataOverlayCardFaceView : UIView <PKPaymentServiceDelegate, PKForegroundActiveArbiterObserver>
{
    PKPass *_pass;
    UIImageView *_maskView;
    PKCategoryVisualizationCardView *_overlayView;
    PKPaymentService *_paymentService;
    BOOL _invalidated;
    BOOL _foregroundActive;
    int _unlockNotifyToken;
    BOOL _contentSuppressed;
}

@property (nonatomic, getter=isContentSuppressed) BOOL contentSuppressed; // @synthesize contentSuppressed=_contentSuppressed;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, getter=isMotionEnabled) BOOL motionEnabled;
@property (nonatomic, getter=isPaused) BOOL paused;
@property (readonly) Class superclass;

+ (id)borderColor;
+ (double)borderWidth;
- (void).cxx_destruct;
- (void)_updateContentIfPossible;
- (void)_updateMagnitudesWithStyle:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (void)foregroundActiveArbiter:(id)arg1 didUpdateForegroundActiveState:(CDStruct_973bafd3)arg2;
- (id)initWithFrame:(struct CGRect)arg1 pass:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 pass:(id)arg2 rendererState:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1 pass:(id)arg2 rendererState:(id)arg3 fetchInitialContentSynchronously:(BOOL)arg4;
- (void)invalidate;
- (void)layoutSubviews;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didUpdateCategoryVisualizationWithStyle:(long long)arg2;
- (id)rendererState;

@end

