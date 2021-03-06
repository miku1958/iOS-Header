//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowUICore/NSObject-Protocol.h>

@class UIViewController;
@protocol CRKAnimationCoordinating, CRKCardPresenting, CRKCardViewControllerDelegate, CRKCardViewControlling, CRKIdentifiedCardSectionViewProviding, CRKIdentifiedProviding;

@protocol CRKCardPresentationDelegate <NSObject>

@property (readonly, nonatomic) id<CRKCardViewControllerDelegate> cardViewControllerDelegate;


@optional
- (double)boundingWidthForPresentation:(id<CRKCardPresenting>)arg1;
- (long long)cardPresentation:(id<CRKCardPresenting>)arg1 compareCardSectionViewProviderOne:(id<CRKIdentifiedCardSectionViewProviding>)arg2 providerTwo:(id<CRKIdentifiedCardSectionViewProviding>)arg3;
- (long long)cardPresentation:(id<CRKCardPresenting>)arg1 compareCardViewControllerProviderOne:(id<CRKIdentifiedProviding>)arg2 providerTwo:(id<CRKIdentifiedProviding>)arg3;
- (void)cardPresentation:(id<CRKCardPresenting>)arg1 willTransitionFromCardViewController:(UIViewController<CRKCardViewControlling> *)arg2 toCardViewController:(UIViewController<CRKCardViewControlling> *)arg3 withAnimationCoordinator:(id<CRKAnimationCoordinating>)arg4;
- (long long)semanticContentAttributeForCardPresentation:(id<CRKCardPresenting>)arg1;
@end

