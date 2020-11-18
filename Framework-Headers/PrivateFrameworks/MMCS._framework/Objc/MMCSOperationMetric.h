//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <MMCS/MMCSOperationMetric-Protocol.h>

@class NSArray, NSDate, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface MMCSOperationMetric : NSObject <MMCSOperationMetric>
{
    double _queueing;
    double _executing;
    unsigned long long _bytesUploaded;
    unsigned long long _bytesDownloaded;
    unsigned long long _connections;
    unsigned long long _connectionsCreated;
    NSDate *_startDate;
    double _duration;
    NSMutableArray *_ranges;
}

@property unsigned long long bytesDownloaded; // @synthesize bytesDownloaded=_bytesDownloaded;
@property unsigned long long bytesUploaded; // @synthesize bytesUploaded=_bytesUploaded;
@property unsigned long long connections; // @synthesize connections=_connections;
@property unsigned long long connectionsCreated; // @synthesize connectionsCreated=_connectionsCreated;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property double duration; // @synthesize duration=_duration;
@property double executing; // @synthesize executing=_executing;
@property (readonly) unsigned long long hash;
@property double queueing; // @synthesize queueing=_queueing;
@property (strong, nonatomic) NSMutableArray *ranges; // @synthesize ranges=_ranges;
@property (readonly) NSArray *rangesCopy;
@property (strong) NSDate *startDate; // @synthesize startDate=_startDate;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (double)absoluteStart;
- (double)absoluteStop;
- (void)addRange:(id)arg1;
- (long long)compareExecutingStartTime:(id)arg1;
- (long long)compareStartTime:(id)arg1;
- (id)describeRanges;
- (id)initWithDate:(id)arg1;
- (id)newRangeWithOperationState:(unsigned long long)arg1 startDate:(id)arg2 duration:(double)arg3;
- (double)other;
- (void)rangesCompleted;

@end

