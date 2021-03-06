//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsCore/FCOperation.h>

@class FCPersonalizationTreatment, NSArray, NSDictionary;
@protocol FCReadonlyPersonalizationAggregateStore;

@interface NTSectionPresencePersonalizationOperation : FCOperation
{
    id<FCReadonlyPersonalizationAggregateStore> _aggregateStore;
    FCPersonalizationTreatment *_personalizationTreatment;
    NSArray *_absoluteRequests;
    NSArray *_relativeRequests;
    CDUnknownBlockType _personalizationCompletion;
    NSDictionary *_result;
}

@property (copy, nonatomic) NSArray *absoluteRequests; // @synthesize absoluteRequests=_absoluteRequests;
@property (strong, nonatomic) id<FCReadonlyPersonalizationAggregateStore> aggregateStore; // @synthesize aggregateStore=_aggregateStore;
@property (copy, nonatomic) CDUnknownBlockType personalizationCompletion; // @synthesize personalizationCompletion=_personalizationCompletion;
@property (copy, nonatomic) FCPersonalizationTreatment *personalizationTreatment; // @synthesize personalizationTreatment=_personalizationTreatment;
@property (copy, nonatomic) NSArray *relativeRequests; // @synthesize relativeRequests=_relativeRequests;
@property (copy, nonatomic) NSDictionary *result; // @synthesize result=_result;

- (void).cxx_destruct;
- (id)init;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (BOOL)validateOperation;

@end

