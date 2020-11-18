//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <CFNetwork/NSURLSessionTaskDelegate-Protocol.h>

@class NSString, NSURLSessionTaskMetrics;

__attribute__((visibility("hidden")))
@interface VaryHeaderSupportTaskDelegate : NSObject <NSURLSessionTaskDelegate>
{
    NSURLSessionTaskMetrics *_metrics;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSURLSessionTaskMetrics *metrics; // @synthesize metrics=_metrics;
@property (readonly) Class superclass;

- (void)URLSession:(id)arg1 task:(id)arg2 didFinishCollectingMetrics:(id)arg3;
- (void)dealloc;

@end

