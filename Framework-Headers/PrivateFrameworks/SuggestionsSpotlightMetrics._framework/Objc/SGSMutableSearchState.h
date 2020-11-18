//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet, SGMContactOpportunityInSpotlight, SGMContactResultInSpotlight, SGMContactResultSelectedInSpotlight, SGMEventOpportunityInSpotlight, SGMEventResultInSpotlight, SGMEventResultSelectedInSpotlight, SGMNoResultSelectedInSpotlight, SGMOtherResultSelectedInSpotlight;

@interface SGSMutableSearchState : NSObject
{
    SGMContactOpportunityInSpotlight *_contactOpportunity;
    SGMEventOpportunityInSpotlight *_eventOpportunity;
    SGMContactResultInSpotlight *_contactResult;
    SGMEventResultInSpotlight *_eventResult;
    SGMContactResultSelectedInSpotlight *_contactSelected;
    SGMEventResultSelectedInSpotlight *_eventSelected;
    SGMNoResultSelectedInSpotlight *_noneSelected;
    SGMOtherResultSelectedInSpotlight *_otherSelected;
    unsigned short _contactResultCount;
    unsigned short _contactOpportunityCount;
    unsigned char _contactConversionCount;
    unsigned char _contactLossCount;
    unsigned short _curatedOrPseudoContactOpportunityCount;
    unsigned short _eventResultCount;
    unsigned short _eventOpportunityCount;
    unsigned char _eventConversionCount;
    unsigned char _eventLossCount;
    unsigned char _otherSelectedCount;
    unsigned char _nonOpportunityCount;
    BOOL _justEngaged;
    NSMutableSet *_resultsSeen;
}

- (void).cxx_destruct;
- (void)commit;
- (id)description;
- (id)init;
- (BOOL)isFirstTimeSeeingResult:(id)arg1;
- (BOOL)justEngaged;
- (void)resetConversionCounts;
- (void)resetCounts;
- (void)resetJustEngaged;
- (void)scoreAsContactConversion;
- (void)scoreAsContactLoss;
- (void)scoreAsContactOpportunity;
- (void)scoreAsContactResult;
- (void)scoreAsCuratedOrPseudoContactOpportunity;
- (void)scoreAsEventConversion;
- (void)scoreAsEventLoss;
- (void)scoreAsEventOpportunity;
- (void)scoreAsEventResult;
- (void)scoreAsNonOpportunity;
- (void)scoreAsOtherConversion;
- (void)setJustEngaged;

@end

