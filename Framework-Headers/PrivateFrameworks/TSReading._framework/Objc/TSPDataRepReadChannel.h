//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSReading/TSUStreamReadChannel-Protocol.h>

@class NSString, SFUDataRepresentation;
@protocol OS_dispatch_queue, SFUInputStream;

@interface TSPDataRepReadChannel : NSObject <TSUStreamReadChannel>
{
    SFUDataRepresentation *_representation;
    id<SFUInputStream> _inputStream;
    NSObject<OS_dispatch_queue> *_readQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)close;
- (void)dealloc;
- (id)initWithRepresentation:(id)arg1;
- (void)readWithQueue:(id)arg1 handler:(CDUnknownBlockType)arg2;

@end

