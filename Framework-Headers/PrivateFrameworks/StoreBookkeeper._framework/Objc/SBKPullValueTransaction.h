//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreBookkeeper/SBKTransaction.h>

@class NSString;
@protocol SBKKeyValuePayloadPair;

@interface SBKPullValueTransaction : SBKTransaction
{
    BOOL _success;
    NSString *_requestedKey;
    id<SBKKeyValuePayloadPair> _clientItemPayloadPair;
    NSString *_clientItemVersionAnchor;
    id<SBKKeyValuePayloadPair> _resultItemPayloadPair;
    NSString *_resultItemVersionAnchor;
    NSString *_resultDomainVersion;
}

@property (readonly) id<SBKKeyValuePayloadPair> clientItemPayloadPair; // @synthesize clientItemPayloadPair=_clientItemPayloadPair;
@property (readonly) NSString *clientItemVersionAnchor; // @synthesize clientItemVersionAnchor=_clientItemVersionAnchor;
@property (readonly, copy) NSString *requestedKey; // @synthesize requestedKey=_requestedKey;
@property (readonly) NSString *resultDomainVersion; // @synthesize resultDomainVersion=_resultDomainVersion;
@property (readonly) id<SBKKeyValuePayloadPair> resultItemPayloadPair; // @synthesize resultItemPayloadPair=_resultItemPayloadPair;
@property (readonly) NSString *resultItemVersionAnchor; // @synthesize resultItemVersionAnchor=_resultItemVersionAnchor;
@property (readonly) BOOL success; // @synthesize success=_success;

- (void).cxx_destruct;
- (id)clampsKey;
- (id)description;
- (id)initWithStoreBagContext:(id)arg1 requestedKey:(id)arg2 clientItemPayloadPair:(id)arg3 clientItemVersionAnchor:(id)arg4;
- (id)newRequest;
- (void)processDataInResponse:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;

@end

