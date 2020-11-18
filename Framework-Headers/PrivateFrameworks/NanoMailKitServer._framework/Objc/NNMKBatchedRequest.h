//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NNMKProtoFetchRequest, NSMutableDictionary;

@interface NNMKBatchedRequest : NSObject
{
    NSMutableDictionary *_messagesToBeSentInBatch;
    NNMKProtoFetchRequest *_latestFetchRequest;
}

@property (strong, nonatomic) NNMKProtoFetchRequest *latestFetchRequest; // @synthesize latestFetchRequest=_latestFetchRequest;
@property (strong, nonatomic) NSMutableDictionary *messagesToBeSentInBatch; // @synthesize messagesToBeSentInBatch=_messagesToBeSentInBatch;

- (void).cxx_destruct;
- (id)diffFromMessages:(id)arg1 maxMessagesToAdd:(unsigned long long)arg2;
- (id)init;

@end

