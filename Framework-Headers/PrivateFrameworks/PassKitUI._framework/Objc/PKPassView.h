//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <PassKitUI/PKPassFaceDelegate-Protocol.h>
#import <PassKitUI/PKPasscodeLockManagerObserver-Protocol.h>
#import <PassKitUI/UIGestureRecognizerDelegate-Protocol.h>

@class NSString, PKPass, PKPassColorProfile, PKPassFrontFaceView, PKPasscodeLockManager, UITapGestureRecognizer;
@protocol WLCardViewDelegate;

@interface PKPassView : UIView <PKPassFaceDelegate, UIGestureRecognizerDelegate, PKPasscodeLockManagerObserver>
{
    PKPassFrontFaceView *_frontFace;
    PKPassColorProfile *_colorProfile;
    UITapGestureRecognizer *_tapRecognizer;
    long long _priorContentMode;
    PKPasscodeLockManager *_passcodeLockManager;
    unsigned long long _contentModeToken;
    NSString *_suppressingIdentifier;
    BOOL _modallyPresented;
    PKPass *_pass;
    id<WLCardViewDelegate> _delegate;
    long long _contentMode;
    unsigned long long _suppressedContent;
    double _modalShadowVisibility;
}

@property (nonatomic) long long contentMode; // @synthesize contentMode=_contentMode;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<WLCardViewDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL frontFaceBodyContentCreated;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL isForcedFrontFaceResized;
@property (readonly, nonatomic) BOOL isFrontFaceResized;
@property (nonatomic) double modalShadowVisibility; // @synthesize modalShadowVisibility=_modalShadowVisibility;
@property (nonatomic, getter=isModallyPresented) BOOL modallyPresented; // @synthesize modallyPresented=_modallyPresented;
@property (readonly, strong, nonatomic) PKPass *pass; // @synthesize pass=_pass;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long suppressedContent; // @synthesize suppressedContent=_suppressedContent;
@property (readonly, nonatomic) NSString *uniqueID;

- (void).cxx_destruct;
- (void)_applyContentMode:(BOOL)arg1;
- (long long)_frontFaceBackgroundModeForContentMode;
- (unsigned long long)_regionsForCurrentModes;
- (void)_resizePassAnimated:(BOOL)arg1 notify:(BOOL)arg2;
- (void)_updateFrontFaceSuppressedContent;
- (void)_updateLayerShadowAnimated:(BOOL)arg1 withDelay:(double)arg2;
- (void)_updateResizeIfNecessary;
- (BOOL)_visibleFaceShouldClipForCurrentViewMode:(double *)arg1;
- (BOOL)canResize;
- (void)dealloc;
- (struct CGRect)frameOfVisibleFace;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithPass:(id)arg1;
- (id)initWithPass:(id)arg1 content:(long long)arg2;
- (id)item;
- (void)layoutSubviews;
- (BOOL)passFaceBarcodeButtonEnabled;
- (void)passFaceBarcodeButtonPressed:(id)arg1;
- (BOOL)passFaceDeleteButtonEnabled;
- (void)passFaceDeleteButtonPressed:(id)arg1;
- (void)passFaceInfoButtonPressed:(id)arg1;
- (void)passcodeLockManager:(id)arg1 didReceivePasscodeSet:(BOOL)arg2;
- (void)presentDiff:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)resizePassAnimated:(BOOL)arg1 notify:(BOOL)arg2;
- (void)setContentMode:(long long)arg1 animated:(BOOL)arg2;
- (void)setContentMode:(long long)arg1 animated:(BOOL)arg2 withDelay:(double)arg3;
- (void)setDimmer:(double)arg1 animated:(BOOL)arg2;
- (void)setLiveMotionEnabled:(BOOL)arg1;
- (void)setModalShadowVisibility:(double)arg1 animated:(BOOL)arg2;
- (void)setModalShadowVisibility:(double)arg1 animated:(BOOL)arg2 withDelay:(double)arg3;
- (struct CGSize)sizeOfFront;
- (struct CGSize)sizeOfFrontFace;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)snapshotOfFrontFace;
- (id)snapshotOfFrontFaceWithRequestedSize:(struct CGSize)arg1;
- (id)snapshotViewOfVisibleFaceAfterScreenUpdates:(BOOL)arg1;
- (void)tapRecognized:(id)arg1;
- (void)updateValidityDisplay;

@end

