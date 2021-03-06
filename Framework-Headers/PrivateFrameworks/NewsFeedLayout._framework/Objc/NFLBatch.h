//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NFLBatchContext, NSMutableArray;

@interface NFLBatch : NSObject
{
    double _batchHeight;
    NFLBatchContext *_batchContext;
    NSMutableArray *_layoutInfos;
}

@property (copy, nonatomic) NFLBatchContext *batchContext; // @synthesize batchContext=_batchContext;
@property (nonatomic) double batchHeight; // @synthesize batchHeight=_batchHeight;
@property (strong, nonatomic) NSMutableArray *layoutInfos; // @synthesize layoutInfos=_layoutInfos;

- (void).cxx_destruct;
- (void)addLayoutInfo:(id)arg1;
- (void)addLayoutInfos:(id)arg1;
- (id)init;

@end

