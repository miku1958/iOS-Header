//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MetricsKit/MTObject.h>

@class MTCallerSuppliedFields, MTPromise, NSDictionary, NSMutableArray, NSMutableDictionary;

@interface MTMetricsData : MTObject
{
    MTCallerSuppliedFields *_callerSuppliedFields;
    NSDictionary *_baseFields;
    NSDictionary *_eventSpecificFields;
    MTPromise *_configBaseFields;
    NSMutableDictionary *_performanceData;
    NSMutableArray *_postProcessingBlocks;
}

@property (strong, nonatomic) NSDictionary *baseFields; // @synthesize baseFields=_baseFields;
@property (strong, nonatomic) MTCallerSuppliedFields *callerSuppliedFields; // @synthesize callerSuppliedFields=_callerSuppliedFields;
@property (strong, nonatomic) MTPromise *configBaseFields; // @synthesize configBaseFields=_configBaseFields;
@property (strong, nonatomic) NSDictionary *eventSpecificFields; // @synthesize eventSpecificFields=_eventSpecificFields;
@property (strong, nonatomic) NSMutableDictionary *performanceData; // @synthesize performanceData=_performanceData;
@property (strong, nonatomic) NSMutableArray *postProcessingBlocks; // @synthesize postProcessingBlocks=_postProcessingBlocks;

- (void).cxx_destruct;
- (void)addPostProcessingBlock:(CDUnknownBlockType)arg1;
- (void)cancelUnfinishedPromisedEventData;
- (id)composeFieldsMaps;
- (id)description;
- (id)recordEvent;
- (id)toDictionary;

@end
