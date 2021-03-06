//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthKit/HKQuery.h>

#import <HealthKit/HKDocumentQueryClientInterface-Protocol.h>

@class NSArray, NSString;

@interface HKDocumentQuery : HKQuery <HKDocumentQueryClientInterface>
{
    BOOL _includeDocumentData;
    unsigned long long _limit;
    NSArray *_sortDescriptors;
    CDUnknownBlockType _resultsHandler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) BOOL includeDocumentData; // @synthesize includeDocumentData=_includeDocumentData;
@property (readonly) unsigned long long limit; // @synthesize limit=_limit;
@property (copy, nonatomic) CDUnknownBlockType resultsHandler; // @synthesize resultsHandler=_resultsHandler;
@property (readonly, copy) NSArray *sortDescriptors; // @synthesize sortDescriptors=_sortDescriptors;
@property (readonly) Class superclass;

+ (id)clientInterfaceProtocol;
+ (Class)configurationClass;
- (void).cxx_destruct;
- (void)client_deliverDocument:(id)arg1 query:(id)arg2;
- (id)initWithDocumentType:(id)arg1 predicate:(id)arg2 limit:(unsigned long long)arg3 sortDescriptors:(id)arg4 includeDocumentData:(BOOL)arg5 resultsHandler:(CDUnknownBlockType)arg6;
- (void)queue_deliverError:(id)arg1;
- (void)queue_populateConfiguration:(id)arg1;
- (void)queue_queryDidDeactivate:(id)arg1;
- (void)queue_validate;

@end

