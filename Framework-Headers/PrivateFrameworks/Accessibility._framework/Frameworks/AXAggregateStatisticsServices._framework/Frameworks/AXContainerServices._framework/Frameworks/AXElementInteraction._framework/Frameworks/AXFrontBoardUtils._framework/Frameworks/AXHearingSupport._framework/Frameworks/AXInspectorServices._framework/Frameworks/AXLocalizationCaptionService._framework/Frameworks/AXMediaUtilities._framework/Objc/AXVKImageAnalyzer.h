//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface AXVKImageAnalyzer : NSObject
{
    NSObject<OS_dispatch_queue> *_analyzeQueue;
    NSObject<OS_dispatch_queue> *_requestsQueue;
}

@property (strong, nonatomic) NSObject<OS_dispatch_queue> *analyzeQueue; // @synthesize analyzeQueue=_analyzeQueue;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *requestsQueue; // @synthesize requestsQueue=_requestsQueue;

+ (id)sharedInstance;
- (void)analyzeImage:(struct CGImage *)arg1 withOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (id)init;
- (id)requestNamesWithOptions;
- (id)resultsFromRequests:(id)arg1;

@end

