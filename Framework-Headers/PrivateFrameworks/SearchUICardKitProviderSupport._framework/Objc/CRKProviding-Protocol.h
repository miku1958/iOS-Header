//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchUICardKitProviderSupport/CRKCardViewControllerProviding-Protocol.h>

@protocol CRCard, CRKCardSectionViewProviderDelegate;

@protocol CRKProviding <CRKCardViewControllerProviding>

@optional
- (void)requestCardSectionViewProviderForCard:(id<CRCard>)arg1 delegate:(id<CRKCardSectionViewProviderDelegate>)arg2 reply:(void (^)(NSError *, id<CRKCardSectionViewProviding>))arg3;
@end

