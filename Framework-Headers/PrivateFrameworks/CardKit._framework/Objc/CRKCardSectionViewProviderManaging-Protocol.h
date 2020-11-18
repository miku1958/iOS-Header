//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CardKit/NSObject-Protocol.h>

@class CRKCardSectionViewConfiguration, NSArray;
@protocol CRCard, CRCardSection, CRKCardSectionViewProviderHelping;

@protocol CRKCardSectionViewProviderManaging <NSObject>

@property (readonly, nonatomic) NSArray *loadedCards;
@property (strong, nonatomic) NSArray *providers;

- (void)loadCardSectionViewsFromCard:(id<CRCard>)arg1 providerHelper:(id<CRKCardSectionViewProviderHelping>)arg2 completion:(void (^)(BOOL))arg3;
- (CRKCardSectionViewConfiguration *)viewConfigurationForCardSection:(id<CRCardSection>)arg1;
@end

