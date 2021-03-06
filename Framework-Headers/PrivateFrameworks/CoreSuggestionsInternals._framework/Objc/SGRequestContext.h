//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSOperationQueue, SGServiceContext;

@interface SGRequestContext : NSObject
{
    int _concurrencyBehavior;
    int _backpressureHazard;
    int _extractionMode;
    SGServiceContext *_serviceContext;
}

@property (readonly, nonatomic) int backpressureHazard; // @synthesize backpressureHazard=_backpressureHazard;
@property (readonly, nonatomic) int concurrencyBehavior; // @synthesize concurrencyBehavior=_concurrencyBehavior;
@property (readonly, nonatomic) int extractionMode; // @synthesize extractionMode=_extractionMode;
@property (readonly, nonatomic) NSOperationQueue *processingQueue;
@property (readonly, nonatomic) SGServiceContext *serviceContext; // @synthesize serviceContext=_serviceContext;
@property (readonly, nonatomic) NSOperationQueue *storageQueue;

- (void).cxx_destruct;
- (id)init;
- (id)initWithServiceContext:(id)arg1 concurrencyBehavior:(int)arg2 backpressureHazard:(int)arg3;
- (id)initWithServiceContext:(id)arg1 concurrencyBehavior:(int)arg2 backpressureHazard:(int)arg3 extractionMode:(int)arg4;

@end

