//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/FCReadonlyPersonalizationAggregateStore-Protocol.h>

@class NSMutableDictionary, NSString;
@protocol FCDerivedPersonalizationData;

@interface FCReadonlyPersonalizationAggregateStore : NSObject <FCReadonlyPersonalizationAggregateStore>
{
    id<FCDerivedPersonalizationData> _derivedPersonalizationData;
    NSMutableDictionary *_overrideAggregatesByFeatureKey;
}

@property (readonly, copy) NSString *debugDescription;
@property (strong, nonatomic) id<FCDerivedPersonalizationData> derivedPersonalizationData; // @synthesize derivedPersonalizationData=_derivedPersonalizationData;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSMutableDictionary *overrideAggregatesByFeatureKey; // @synthesize overrideAggregatesByFeatureKey=_overrideAggregatesByFeatureKey;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)aggregatesForFeatures:(id)arg1;
- (id)baselineAggregateWithConfigurableValues:(id)arg1;
- (id)init;
- (id)initWithDerivedPersonalizationData:(id)arg1;
- (void)modifyLocalAggregatesForFeatureKeys:(id)arg1 withAction:(unsigned long long)arg2 actionCount:(unsigned long long)arg3 defaultClicks:(double)arg4 defaultImpressions:(double)arg5 impressionBias:(double)arg6 configurableValues:(id)arg7;
- (void)processTodayPersonalizationUpdates:(id)arg1 withConfigurableValues:(id)arg2;
- (void)updateFeatures:(id)arg1 withAction:(unsigned long long)arg2 displayRank:(long long)arg3 groupRank:(long long)arg4 individually:(BOOL)arg5 configurableValues:(id)arg6;

@end

