//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UserNotificationsUIKit/BNBannerSourceDelegate-Protocol.h>
#import <UserNotificationsUIKit/BNBannerSourceProvidingPrivate-Protocol.h>
#import <UserNotificationsUIKit/BNPresentableObserving-Protocol.h>

@class BNBannerSource, BSTimer, NSPointerArray, NSString;
@protocol BNBannerSourceDelegate;

@interface NCCarPlayBannerSource : NSObject <BNBannerSourceDelegate, BNPresentableObserving, BNBannerSourceProvidingPrivate>
{
    BNBannerSource *_bannerSource;
    NSPointerArray *_postedPresentables;
    id<BNBannerSourceDelegate> delegate;
    BSTimer *_dismissTimer;
    BSTimer *_replaceTimer;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<BNBannerSourceDelegate> delegate; // @synthesize delegate;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) long long destination;
@property (strong, nonatomic, getter=_dismissTimer, setter=_setDismissTimer:) BSTimer *dismissTimer; // @synthesize dismissTimer=_dismissTimer;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic, getter=_replaceTimer, setter=_setReplaceTimer:) BSTimer *replaceTimer; // @synthesize replaceTimer=_replaceTimer;
@property (readonly, copy, nonatomic) NSString *requesterIdentifier;
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=isValid) BOOL valid;

+ (void)initialize;
- (void).cxx_destruct;
- (void)_allPresentablesDidDisappear;
- (id)_bannerSource;
- (void)_cancelDismissTimer;
- (void)_cancelReplaceTimer;
- (void)_enqueuePostedPresentable:(id)arg1;
- (unsigned long long)_indexOfPostedPresentable:(id)arg1;
- (BOOL)_isPresentableSticky:(id)arg1;
- (id)_peekPostedPresentable;
- (unsigned long long)_postedPresentableCount;
- (id)_postedPresentablesWithIdentification:(id)arg1;
- (void)_presentableDidDisappear:(id)arg1;
- (void)_presentableWithIdentificationDidDisappear:(id)arg1;
- (id)_pullPostedPresentableAtIndex:(unsigned long long)arg1;
- (void)_revokePreviouslyPostedPresentableIfPossible;
- (BOOL)_setSuspended:(BOOL)arg1 forReason:(id)arg2 revokingCurrent:(BOOL)arg3;
- (void)_startDismissTimer;
- (void)_startReplaceTimer;
- (void)bannerSourceDidInvalidate:(id)arg1;
- (void)invalidate;
- (id)keyWindowForScreen:(id)arg1;
- (id)layoutDescriptionWithError:(out id *)arg1;
- (BOOL)postPresentable:(id)arg1 options:(unsigned long long)arg2 userInfo:(id)arg3 error:(out id *)arg4;
- (void)presentableDidAppearAsBanner:(id)arg1;
- (void)presentableDidDisappearAsBanner:(id)arg1 withReason:(id)arg2;
- (id)revokeAllPresentablesWithReason:(id)arg1 userInfo:(id)arg2 error:(out id *)arg3;
- (id)revokePresentableWithIdentification:(id)arg1 reason:(id)arg2 animated:(BOOL)arg3 userInfo:(id)arg4 error:(out id *)arg5;
- (id)revokePresentableWithRequestIdentifier:(id)arg1 reason:(id)arg2 animated:(BOOL)arg3 userInfo:(id)arg4 error:(out id *)arg5;
- (BOOL)setSuspended:(BOOL)arg1 forReason:(id)arg2 revokingCurrent:(BOOL)arg3 error:(out id *)arg4;

@end

