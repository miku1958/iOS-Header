//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HFItemManager, NAFuture, NSDictionary;

@interface HFItem : NSObject
{
    BOOL __debug_isChildItem;
    NSDictionary *_latestResults;
    unsigned long long _loadingState;
    NAFuture *_cancellableInFlightUpdateFuture;
    HFItemManager *__debug_owningItemManager;
}

@property (nonatomic) BOOL _debug_isChildItem; // @synthesize _debug_isChildItem=__debug_isChildItem;
@property (weak, nonatomic) HFItemManager *_debug_owningItemManager; // @synthesize _debug_owningItemManager=__debug_owningItemManager;
@property (weak, nonatomic) NAFuture *cancellableInFlightUpdateFuture; // @synthesize cancellableInFlightUpdateFuture=_cancellableInFlightUpdateFuture;
@property (strong, nonatomic) NSDictionary *latestResults; // @synthesize latestResults=_latestResults;
@property (nonatomic) unsigned long long loadingState; // @synthesize loadingState=_loadingState;

- (void).cxx_destruct;
- (unsigned long long)_effectiveLoadingStateForSuggestedLoadingState:(unsigned long long)arg1;
- (id)_finalOutcomeForSubclassOutcome:(id)arg1 previousResults:(id)arg2 updateOptions:(id)arg3;
- (id)_subclass_updateWithOptions:(id)arg1;
- (void)copyLatestResultsFromItem:(id)arg1;
- (id)debugDescription;
- (id)description;
- (BOOL)resultsContainRequiredProperties:(id)arg1;
- (id)updateWithOptions:(id)arg1;

@end

