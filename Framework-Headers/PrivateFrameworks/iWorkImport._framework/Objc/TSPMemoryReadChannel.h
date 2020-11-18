//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/TSUReadChannel-Protocol.h>

@class NSString;
@protocol OS_dispatch_data, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface TSPMemoryReadChannel : NSObject <TSUReadChannel>
{
    NSObject<OS_dispatch_data> *_dispatchData;
    NSObject<OS_dispatch_queue> *_readQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL isValid;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_close;
- (void)addBarrier:(CDUnknownBlockType)arg1;
- (void)close;
- (id)init;
- (id)initWithDispatchData:(id)arg1;
- (id)initWithNSData:(id)arg1;
- (void)readFromOffset:(long long)arg1 length:(unsigned long long)arg2 handler:(CDUnknownBlockType)arg3;
- (void)readWithHandler:(CDUnknownBlockType)arg1;
- (void)setLowWater:(unsigned long long)arg1;

@end

