//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;
@protocol OS_dispatch_queue;

@interface RTPredictionExpertDataSource : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSDictionary *_dataProviders;
}

@property (readonly, nonatomic) NSDictionary *dataProviders; // @synthesize dataProviders=_dataProviders;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;

- (void).cxx_destruct;
- (id)dataProviderForName:(id)arg1;
- (id)initWithDataProviders:(id)arg1;
- (void)prefetch:(CDUnknownBlockType)arg1;
- (void)reset;

@end

