//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SGMContactOpportunityInSpotlight, SGMContactResultInSpotlight, SGMContactResultSelectedInSpotlight, SGMEventOpportunityInSpotlight, SGMEventResultInSpotlight, SGMEventResultSelectedInSpotlight, SGMNoResultSelectedInSpotlight, SGMOtherResultSelectedInSpotlight;

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
    int _resultContactCount;
    int _opportunityContactCount;
    int _conversionContactCount;
    int _resultEventCount;
    int _opportunityEventCount;
    int _conversionEventCount;
    int _nonOpportunity;
}

- (void).cxx_destruct;
- (void)commit;
- (id)init;
- (void)scoreAsContactConversion;
- (void)scoreAsContactOpportunity;
- (void)scoreAsContactResult;
- (void)scoreAsEventConversion;
- (void)scoreAsEventOpportunity;
- (void)scoreAsEventResult;
- (void)scoreAsNonOpportunity;

@end
