//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ProactiveML/PMLTrackerAdapterProtocol-Protocol.h>

@class NSMutableArray, NSString;

@interface PMLTrackerMockAdapter : NSObject <PMLTrackerAdapterProtocol>
{
    NSMutableArray *_trackedMessages;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)clearAllTrackedMessages;
- (id)init;
- (void)postMetricId:(unsigned int)arg1 message:(id)arg2;
- (id)trackedMessagesByClass:(Class)arg1;

@end

