//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NeutrinoCore/NURenderStatistics-Protocol.h>

@class NSArray, NSString;

@interface NURenderJobStatistics : NSObject <NURenderStatistics>
{
    double _requestTime;
    double _willPrepareTime;
    double _didPrepareTime;
    double _willRenderTime;
    double _didRenderTime;
    double _willCompleteTime;
    double _didCompleteTime;
    double _responseTime;
    NSArray *_dependencies;
}

@property (readonly) double completeDuration;
@property (readonly) double completeLatency;
@property (readonly, copy) NSString *debugDescription;
@property (copy) NSArray *dependencies; // @synthesize dependencies=_dependencies;
@property (readonly, copy) NSString *description;
@property double didCompleteTime; // @synthesize didCompleteTime=_didCompleteTime;
@property double didPrepareTime; // @synthesize didPrepareTime=_didPrepareTime;
@property double didRenderTime; // @synthesize didRenderTime=_didRenderTime;
@property (readonly) double duration;
@property (readonly) unsigned long long hash;
@property (readonly) double latency;
@property (readonly) double prepareDuration;
@property (readonly) double prepareLatency;
@property (readonly) double renderDuration;
@property (readonly) double renderLatency;
@property (readonly) double replyLatency;
@property double requestTime; // @synthesize requestTime=_requestTime;
@property double responseTime; // @synthesize responseTime=_responseTime;
@property (readonly) Class superclass;
@property (readonly) double totalDuration;
@property double willCompleteTime; // @synthesize willCompleteTime=_willCompleteTime;
@property double willPrepareTime; // @synthesize willPrepareTime=_willPrepareTime;
@property double willRenderTime; // @synthesize willRenderTime=_willRenderTime;

+ (id)aggregateStatistics:(id)arg1;
- (void).cxx_destruct;
- (void)renderJob:(id)arg1 didRunStage:(long long)arg2;
- (void)renderJob:(id)arg1 willRunStage:(long long)arg2;

@end

