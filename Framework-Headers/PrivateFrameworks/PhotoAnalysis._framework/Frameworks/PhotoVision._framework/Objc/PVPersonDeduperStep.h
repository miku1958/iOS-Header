//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMapTable, NSString, PVPersonClusterManager, PVPersonDeduperProfile;
@protocol PVPersonPromoterDelegate;

__attribute__((visibility("hidden")))
@interface PVPersonDeduperStep : NSObject
{
    BOOL _shouldStop;
    float _progress;
    PVPersonClusterManager *_personClusterManager;
    NSDictionary *_invalidCandidatesMapping;
    NSMapTable *_mergeRelations;
    id<PVPersonPromoterDelegate> _delegate;
    PVPersonDeduperProfile *_profile;
}

@property (weak, nonatomic) id<PVPersonPromoterDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, nonatomic) NSDictionary *invalidCandidatesMapping; // @synthesize invalidCandidatesMapping=_invalidCandidatesMapping;
@property (readonly, nonatomic) NSMapTable *mergeRelations; // @synthesize mergeRelations=_mergeRelations;
@property (readonly, nonatomic) NSString *metricsKey;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) PVPersonClusterManager *personClusterManager; // @synthesize personClusterManager=_personClusterManager;
@property (readonly, nonatomic) PVPersonDeduperProfile *profile; // @synthesize profile=_profile;
@property (nonatomic) float progress; // @synthesize progress=_progress;
@property (nonatomic) BOOL shouldStop; // @synthesize shouldStop=_shouldStop;

- (void).cxx_destruct;
- (id)_resolveMergeCandidate:(id)arg1 forPerson:(id)arg2;
- (BOOL)addPotentialMergeCandidateForPerson:(id)arg1 withOtherPerson:(id)arg2 updateBlock:(CDUnknownBlockType)arg3;
- (void)dedupePersons:(id)arg1 withOtherPersons:(id)arg2 updateBlock:(CDUnknownBlockType)arg3 resultBlock:(CDUnknownBlockType)arg4;
- (id)initWithPersonClusterManager:(id)arg1 invalidCandidatesMapping:(id)arg2 profile:(id)arg3;
- (BOOL)isPersonSimilar:(id)arg1 withOtherPerson:(id)arg2 withDistance:(float)arg3;
- (id)mergeCandidatePersonsWithUpdateBlock:(CDUnknownBlockType)arg1;
- (BOOL)shouldStopWithUpdateBlock:(CDUnknownBlockType)arg1;

@end

