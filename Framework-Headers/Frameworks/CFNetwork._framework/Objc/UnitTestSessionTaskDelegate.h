//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CFNetwork/NSURLSessionTaskDelegate-Protocol.h>

@class NSString;

@interface UnitTestSessionTaskDelegate : NSObject <NSURLSessionTaskDelegate>
{
    SmartBlockWithArgs_02d865d6 _didFinishCollectingMetricsCompletionBlock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) SmartBlockWithArgs_02d865d6 didFinishCollectingMetricsCompletionBlock; // @synthesize didFinishCollectingMetricsCompletionBlock=_didFinishCollectingMetricsCompletionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)URLSession:(id)arg1 task:(id)arg2 didFinishCollectingMetrics:(id)arg3;

@end
