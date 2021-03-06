//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosGraph/PGDeduper.h>

@class VNCreateSceneprintRequest, VNSequenceRequestHandler;

@interface PGSemanticalDeduper : PGDeduper
{
    VNSequenceRequestHandler *_sequenceRequestHandler;
    VNCreateSceneprintRequest *_sceneprintRequest;
    BOOL _usesAdaptiveSimilarStacking;
}

@property (nonatomic) BOOL usesAdaptiveSimilarStacking; // @synthesize usesAdaptiveSimilarStacking=_usesAdaptiveSimilarStacking;

- (void).cxx_destruct;
- (void)cleanup;
- (void)dealloc;
- (id)deduplicatedItemsWithItems:(id)arg1 debugInfo:(id)arg2 progressBlock:(CDUnknownBlockType)arg3;
- (id)itemsNeedingSceneprintInTimeClusters:(id)arg1;
- (id)sceneprintByItemIdentifierWithItems:(id)arg1;

@end

