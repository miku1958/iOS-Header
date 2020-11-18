//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapsSupport/MSPContainerObserver-Protocol.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface MSPContainerPolicyObserver : NSObject <MSPContainerObserver>
{
    unsigned long long _lastKnownItemCount;
    unsigned long long _minimumDeletesForDataLoss;
    double _minimumDeleteRatioForDataLoss;
    NSObject<OS_dispatch_queue> *_observerQueue;
    BOOL _keepMetrics;
    unsigned long long _dataLossPolicyOffenses;
}

@property (nonatomic) unsigned long long dataLossPolicyOffenses; // @synthesize dataLossPolicyOffenses=_dataLossPolicyOffenses;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL keepMetrics; // @synthesize keepMetrics=_keepMetrics;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)container:(id)arg1 didEditWithNewContents:(id)arg2 orderedEdits:(id)arg3 cause:(long long)arg4 context:(id)arg5;
- (void)containerWillEraseContents:(id)arg1;
- (id)init;
- (id)observationQueueForContainer:(id)arg1;
- (void)setContainerItemCount:(unsigned long long)arg1;

@end

