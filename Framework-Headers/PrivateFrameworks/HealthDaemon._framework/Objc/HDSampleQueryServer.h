//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDQueryServer.h>

@class NSArray, NSObject;
@protocol OS_dispatch_queue;

@interface HDSampleQueryServer : HDQueryServer
{
    BOOL _suspended;
    NSObject<OS_dispatch_queue> *_batchQueue;
    unsigned long long _maxResults;
    NSArray *_sortDescriptors;
}

@property (readonly, nonatomic) unsigned long long maxResults; // @synthesize maxResults=_maxResults;
@property (readonly, nonatomic) NSArray *sortDescriptors; // @synthesize sortDescriptors=_sortDescriptors;

- (void).cxx_destruct;
- (void)_queue_start;
- (id)initWithQueryUUID:(id)arg1 dataObject:(id)arg2 clientProxy:(id)arg3 client:(id)arg4 delegate:(id)arg5 profile:(id)arg6;

@end

