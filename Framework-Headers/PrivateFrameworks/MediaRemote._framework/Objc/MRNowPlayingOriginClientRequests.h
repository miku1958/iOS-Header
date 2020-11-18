//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <MediaRemote/MRNowPlayingClientState-Protocol.h>

@class NSMutableArray, NSMutableDictionary, _MRDeviceInfoMessageProtobuf, _MROriginProtobuf;
@protocol OS_dispatch_queue;

@interface MRNowPlayingOriginClientRequests : NSObject <MRNowPlayingClientState>
{
    NSObject<OS_dispatch_queue> *_serialQueue;
    _MRDeviceInfoMessageProtobuf *_deviceInfo;
    NSMutableArray *_nowPlayingClients;
    NSMutableDictionary *_transactionCallbacks;
    _MROriginProtobuf *_origin;
}

@property (copy, nonatomic) _MRDeviceInfoMessageProtobuf *deviceInfo;
@property (readonly, nonatomic) _MROriginProtobuf *origin; // @synthesize origin=_origin;

- (void).cxx_destruct;
- (void)_handleDeviceInfoDidChange:(id)arg1;
- (id)debugDescription;
- (id)existingNowPlayingClientRequestsForPlayerPath:(id)arg1;
- (id)initWithOrigin:(id)arg1;
- (id)nowPlayingClientRequestsForPlayerPath:(id)arg1;
- (id)nowPlayingClients;
- (void)removeClient:(id)arg1;
- (void)restoreNowPlayingClientState;
- (void)setTransactionCallback:(CDUnknownBlockType)arg1 forName:(unsigned long long)arg2;
- (CDUnknownBlockType)transactionCallbackForName:(unsigned long long)arg1;

@end

