//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CardKit/CRKCardSectionViewSourcing-Protocol.h>

@class NSMutableDictionary, NSMutableSet, NSString;
@protocol CRCard, _CRKCardSectionViewLoaderDelegate;

@interface _CRKCardSectionViewLoader : NSObject <CRKCardSectionViewSourcing>
{
    NSMutableDictionary *_cardSectionViewConfigurationsByCardSectionIdentifiersByProviderIdentifiers;
    NSMutableDictionary *_vetoingProviderIdentifiersByVetoedCardSectionIdentifiers;
    NSMutableSet *_identifiedCardSectionViewProviders;
    id<_CRKCardSectionViewLoaderDelegate> _delegate;
    id<CRCard> _loadedCard;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<_CRKCardSectionViewLoaderDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSMutableSet *identifiedCardSectionViewProviders; // @synthesize identifiedCardSectionViewProviders=_identifiedCardSectionViewProviders;
@property (strong, nonatomic) id<CRCard> loadedCard; // @synthesize loadedCard=_loadedCard;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_allViewConfigurations;
- (void)_loadIdentifiedCardSectionViewProvidersFromCard:(id)arg1 identifiedProviders:(id)arg2 delegate:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)_viewConfigurationForCardSection:(id)arg1 providerIdentifier:(id)arg2;
- (BOOL)cardSectionShouldBeDisplayed:(id)arg1;
- (id)init;
- (id)viewConfigurationForCardSection:(id)arg1;

@end

