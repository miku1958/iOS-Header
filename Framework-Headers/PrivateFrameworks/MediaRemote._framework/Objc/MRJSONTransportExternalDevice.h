//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaRemote/MRTransportExternalDevice.h>

#import <MediaRemote/MRProtocolClientConnectionDelegate-Protocol.h>

@class NSString;

@interface MRJSONTransportExternalDevice : MRTransportExternalDevice <MRProtocolClientConnectionDelegate>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)_handleSetStateMessage:(id)arg1;
- (id)_onWorkerQueue_createClientConnectionWithInputStream:(id)arg1 outputStream:(id)arg2;
- (BOOL)isPaired;

@end

