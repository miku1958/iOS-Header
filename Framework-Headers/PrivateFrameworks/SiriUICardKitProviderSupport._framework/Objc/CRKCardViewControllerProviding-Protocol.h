//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SiriUICardKitProviderSupport/NSObject-Protocol.h>

@class UIViewController;
@protocol CRCard, CRKCardPresenting, CRKCardSectionViewSourcing, CRKCardViewControlling;

@protocol CRKCardViewControllerProviding <NSObject>

@optional
- (UIViewController<CRKCardViewControlling> *)cardViewControllerForCard:(id<CRCard>)arg1;
- (unsigned long long)displayPriorityForCard:(id<CRCard>)arg1;
- (void)presentation:(id<CRKCardPresenting>)arg1 didApplyCardSectionViewSource:(id<CRKCardSectionViewSourcing>)arg2 toCardViewController:(UIViewController<CRKCardViewControlling> *)arg3;
@end

