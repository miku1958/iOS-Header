//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibraryServices/PLDaemonJob.h>

@class NSArray, NSMutableArray;

@interface PHResourceAvailabilityJob : PLDaemonJob
{
    NSMutableArray *_requests;
    NSArray *_cancelledRequestIdentifiers;
}

- (void).cxx_destruct;
- (void)addRequest:(id)arg1;
- (void)cancelAll;
- (long long)daemonOperation;
- (id)description;
- (void)encodeToXPCObject:(id)arg1;
- (id)initFromXPCObject:(id)arg1 connection:(id)arg2;
- (void)run;
- (void)runDaemonSide;
- (BOOL)shouldRunOnDaemonSerialQueue;

@end

