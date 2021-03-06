//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CRKCardSectionViewController, NSString, UIView, UIViewController, _CRKDebugOverlayView;
@protocol CRCardSection, CRKCardSectionView, CRKCardSectionViewControlling, CRKFeedbackDelegateProxying;

@interface CRKCardSectionViewConfiguration : NSObject
{
    BOOL _debugModeEnabled;
    id<CRCardSection> _cardSection;
    UIView<CRKCardSectionView> *_cardSectionView;
    id<CRKFeedbackDelegateProxying> _feedbackDelegateProxy;
    UIViewController<CRKCardSectionViewControlling> *_cardSectionViewController;
    NSString *_providerIdentifier;
    _CRKDebugOverlayView *_debugOverlayView;
    CRKCardSectionViewController *_cardKitCardSectionViewController;
}

@property (strong, nonatomic, getter=_cardKitCardSectionViewController, setter=_setCardKitCardSectionViewController:) CRKCardSectionViewController *cardKitCardSectionViewController; // @synthesize cardKitCardSectionViewController=_cardKitCardSectionViewController;
@property (strong, nonatomic) id<CRCardSection> cardSection; // @synthesize cardSection=_cardSection;
@property (strong, nonatomic) UIView<CRKCardSectionView> *cardSectionView; // @synthesize cardSectionView=_cardSectionView;
@property (strong, nonatomic) UIViewController<CRKCardSectionViewControlling> *cardSectionViewController; // @synthesize cardSectionViewController=_cardSectionViewController;
@property (nonatomic, getter=_debugModeEnabled, setter=_setDebugModeEnabled:) BOOL debugModeEnabled; // @synthesize debugModeEnabled=_debugModeEnabled;
@property (strong, nonatomic, getter=_debugOverlayView, setter=_setDebugOverlayView:) _CRKDebugOverlayView *debugOverlayView; // @synthesize debugOverlayView=_debugOverlayView;
@property (strong, nonatomic) id<CRKFeedbackDelegateProxying> feedbackDelegateProxy; // @synthesize feedbackDelegateProxy=_feedbackDelegateProxy;
@property (copy, nonatomic, getter=_providerIdentifier, setter=_setProviderIdentifier:) NSString *providerIdentifier; // @synthesize providerIdentifier=_providerIdentifier;

- (void).cxx_destruct;
- (void)_updateDebugOverlayViewText:(id)arg1;

@end

