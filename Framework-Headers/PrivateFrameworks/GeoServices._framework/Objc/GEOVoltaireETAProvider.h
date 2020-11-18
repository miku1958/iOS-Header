//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/GEOETAProvider.h>

#import <GeoServices/PBRequesterDelegate-Protocol.h>

@class GEORequester, NSString;

__attribute__((visibility("hidden")))
@interface GEOVoltaireETAProvider : GEOETAProvider <PBRequesterDelegate>
{
    GEORequester *_requester;
    CDUnknownBlockType _errorHandler;
    CDUnknownBlockType _finishedHandler;
    CDUnknownBlockType _willSendRequestHandler;
    CDUnknownBlockType _simpleETARequestFinishedHandler;
    BOOL _cancelled;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)cancelRequest;
- (void)dealloc;
- (void)requester:(id)arg1 didFailWithError:(id)arg2;
- (void)requesterDidCancel:(id)arg1;
- (void)requesterDidFinish:(id)arg1;
- (void)requesterWillSendRequestForEstablishedConnection:(id)arg1;
- (void)startRequest:(id)arg1 connectionProperties:(const CDStruct_96e0509c *)arg2 willSendRequest:(CDUnknownBlockType)arg3 finished:(CDUnknownBlockType)arg4 error:(CDUnknownBlockType)arg5;
- (void)startRequest:(id)arg1 finished:(CDUnknownBlockType)arg2 error:(CDUnknownBlockType)arg3;
- (void)startSimpleETARequest:(id)arg1 finished:(CDUnknownBlockType)arg2 error:(CDUnknownBlockType)arg3;
- (void)updateRequest:(id)arg1 finished:(CDUnknownBlockType)arg2 error:(CDUnknownBlockType)arg3;

@end
