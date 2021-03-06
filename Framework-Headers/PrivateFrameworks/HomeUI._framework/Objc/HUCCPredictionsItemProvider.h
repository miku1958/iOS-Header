//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFItemProvider.h>

@class HMHome, HUCCPredictionManager, NSArray, NSMutableDictionary, NSMutableSet;

@interface HUCCPredictionsItemProvider : HFItemProvider
{
    HMHome *_home;
    NSMutableSet *_allItems;
    NSArray *_predictions;
    NSMutableDictionary *_objectPriorities;
    HUCCPredictionManager *_predictionManager;
    unsigned long long _itemLimit;
}

@property (strong, nonatomic) NSMutableSet *allItems; // @synthesize allItems=_allItems;
@property (readonly, nonatomic) HMHome *home; // @synthesize home=_home;
@property (nonatomic) unsigned long long itemLimit; // @synthesize itemLimit=_itemLimit;
@property (strong, nonatomic) NSMutableDictionary *objectPriorities; // @synthesize objectPriorities=_objectPriorities;
@property (strong, nonatomic) HUCCPredictionManager *predictionManager; // @synthesize predictionManager=_predictionManager;
@property (strong, nonatomic) NSArray *predictions; // @synthesize predictions=_predictions;

- (void).cxx_destruct;
- (id)_loadHomeKitObjectsWithPredictions:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithHome:(id)arg1 predictionManager:(id)arg2 itemLimit:(unsigned long long)arg3;
- (id)invalidationReasons;
- (id)itemPriority:(id)arg1;
- (id)items;
- (id)reloadItems;

@end

