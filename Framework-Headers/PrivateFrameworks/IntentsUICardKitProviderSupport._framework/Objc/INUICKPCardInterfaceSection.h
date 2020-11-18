//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IntentsUI/INUIInterfaceSection.h>

#import <IntentsUICardKitProviderSupport/INUICKPInterfaceSectionModeling-Protocol.h>

@class NSSet, NSString;
@protocol CRCardSection;

@interface INUICKPCardInterfaceSection : INUIInterfaceSection <INUICKPInterfaceSectionModeling>
{
    NSSet *_cardSectionParameters;
    id<CRCardSection> _cardSection;
}

@property (strong, nonatomic) id<CRCardSection> cardSection; // @synthesize cardSection=_cardSection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) unsigned long long interactiveBehavior;
@property (readonly, nonatomic) BOOL isWildCardSection;
@property (copy, nonatomic) NSSet *parameters; // @synthesize parameters=_cardSectionParameters;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithInteractiveBehavior:(unsigned long long)arg1 parameters:(id)arg2;
- (BOOL)isEqual:(id)arg1;

@end
