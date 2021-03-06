//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RelevanceEngine/REPredictor.h>

#import <RelevanceEngine/REPortraitPredictorProperties-Protocol.h>

@class NSDictionary, NSMutableDictionary, PPNamedEntityStore;

@interface REPortraitPredictor : REPredictor <REPortraitPredictorProperties>
{
    PPNamedEntityStore *_namedEntityStore;
    NSMutableDictionary *_namedEntityScores;
}

@property (readonly, nonatomic) NSDictionary *namedEntityScores;

+ (double)updateInterval;
- (void).cxx_destruct;
- (id)_init;
- (void)_loadStoreIfNeeded;
- (void)dealloc;
- (void)update;
- (float)userAffinityToContent:(id)arg1;

@end

