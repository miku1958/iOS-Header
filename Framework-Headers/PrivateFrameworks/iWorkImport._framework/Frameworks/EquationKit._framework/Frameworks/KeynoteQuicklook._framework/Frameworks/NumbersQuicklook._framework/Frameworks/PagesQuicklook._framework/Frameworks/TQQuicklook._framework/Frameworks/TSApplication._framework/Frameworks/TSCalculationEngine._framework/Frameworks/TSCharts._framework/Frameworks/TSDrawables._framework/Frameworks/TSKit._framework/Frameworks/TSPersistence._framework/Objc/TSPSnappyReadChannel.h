//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSPersistence/TSUStreamReadChannel-Protocol.h>

@class NSString;
@protocol TSUStreamReadChannel;

@interface TSPSnappyReadChannel : NSObject <TSUStreamReadChannel>
{
    id<TSUStreamReadChannel> _readChannel;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)close;
- (void)dealloc;
- (id)initWithReadChannel:(id)arg1;
- (BOOL)processData:(id *)arg1 isDone:(BOOL)arg2 handler:(CDUnknownBlockType)arg3;
- (void)readWithHandler:(CDUnknownBlockType)arg1;
- (void)readWithHandlerAndWait:(CDUnknownBlockType)arg1;
- (id)uncompressData:(id)arg1;
- (id)uncompressDataFromSource:(struct SnappySource *)arg1;

@end

