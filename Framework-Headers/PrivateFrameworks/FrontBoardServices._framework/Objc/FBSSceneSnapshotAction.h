//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FrontBoardServices/FBSSceneAction.h>

#import <FrontBoardServices/FBSSceneSnapshotRequestDelegate-Protocol.h>

@class FBSSceneSnapshotRequestHandle, NSMutableArray, NSString;

@interface FBSSceneSnapshotAction : FBSSceneAction <FBSSceneSnapshotRequestDelegate>
{
    NSMutableArray *_requests;
    CDUnknownBlockType _requestHandler;
    CDUnknownBlockType _completionHandler;
    FBSSceneSnapshotRequestHandle *_outgoingRequestHandle;
    int _expired;
}

@property (copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) double expirationInterval; // @dynamic expirationInterval;
@property (readonly, getter=isExpired) BOOL expired; // @dynamic expired;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) CDUnknownBlockType requestHandler; // @synthesize requestHandler=_requestHandler;
@property (readonly) Class superclass;

- (void)_executeNextRequest;
- (void)_finishAllRequests;
- (BOOL)_remainsActionable;
- (void)dealloc;
- (void)encodeWithXPCDictionary:(id)arg1;
- (void)executeRequestsWithHandler:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2 expirationHandler:(CDUnknownBlockType)arg3;
- (Class)fallbackXPCEncodableClass;
- (id)initWithRequests:(id)arg1 expirationInterval:(double)arg2 responseHandler:(CDUnknownBlockType)arg3;
- (id)initWithXPCDictionary:(id)arg1;
- (void)setExpired:(BOOL)arg1;
- (void)setInvalidationHandler:(CDUnknownBlockType)arg1;
- (BOOL)snapshotRequest:(id)arg1 performWithContext:(id)arg2;
- (BOOL)snapshotRequestAllowSnapshot:(id)arg1;

@end

