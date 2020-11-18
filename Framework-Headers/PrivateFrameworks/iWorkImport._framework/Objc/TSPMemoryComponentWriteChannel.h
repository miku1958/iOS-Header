//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/TSPComponentWriteChannel-Protocol.h>

@class NSString, TSUDispatchData;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface TSPMemoryComponentWriteChannel : NSObject <TSPComponentWriteChannel>
{
    NSObject<OS_dispatch_queue> *_streamQueue;
    TSUDispatchData *_streamData;
    BOOL _isClosed;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_close;
- (void)close;
- (id)init;
- (id)initWithAlwaysDefragmentData:(BOOL)arg1;
- (id)serializedData;
- (void)writeData:(id)arg1;

@end
