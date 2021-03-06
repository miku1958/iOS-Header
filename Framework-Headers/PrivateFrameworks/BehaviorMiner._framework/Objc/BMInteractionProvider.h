//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BMMiningTaskConfig, _CDInteractionStore;

@interface BMInteractionProvider : NSObject
{
    _CDInteractionStore *_interactionStore;
    id _contextKitClient;
    BMMiningTaskConfig *_bmMiningTaskConfig;
}

@property (strong) BMMiningTaskConfig *bmMiningTaskConfig; // @synthesize bmMiningTaskConfig=_bmMiningTaskConfig;
@property (strong, nonatomic) id contextKitClient; // @synthesize contextKitClient=_contextKitClient;
@property (readonly, nonatomic) _CDInteractionStore *interactionStore; // @synthesize interactionStore=_interactionStore;

- (void).cxx_destruct;
- (id)batchFetchedPhotoSuggestionsForInteractions:(id)arg1;
- (id)getResultsForRequest:(id)arg1;
- (id)init;
- (id)initWithBMMiningTaskConfig:(id)arg1;
- (id)initWithInteractionStore:(id)arg1;
- (id)initWithInteractionStore:(id)arg1 bmMiningTaskConfig:(id)arg2;
- (id)interactionEventsForTypes:(id)arg1 error:(id *)arg2;

@end

