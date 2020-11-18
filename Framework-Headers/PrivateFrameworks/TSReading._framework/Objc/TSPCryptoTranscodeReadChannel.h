//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <TSReading/TSUStreamReadChannel-Protocol.h>

@class NSString, SFUCryptoKey;
@protocol OS_dispatch_queue, TSUStreamReadChannel;

@interface TSPCryptoTranscodeReadChannel : NSObject <TSUStreamReadChannel>
{
    id<TSUStreamReadChannel> _readChannel;
    SFUCryptoKey *_encryptionKey;
    NSObject<OS_dispatch_queue> *_readQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)close;
- (id)initWithReadChannel:(id)arg1 decryptionKey:(id)arg2 encryptionKey:(id)arg3;
- (void)readWithQueue:(id)arg1 handler:(CDUnknownBlockType)arg2;

@end
