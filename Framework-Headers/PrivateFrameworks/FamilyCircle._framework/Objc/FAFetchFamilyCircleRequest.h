//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FamilyCircle/FAFamilyCircleRequest.h>

@class NSArray, NSDictionary;

@interface FAFetchFamilyCircleRequest : FAFamilyCircleRequest
{
    BOOL _signedInAccountShouldBeApprover;
    BOOL _forceServerFetch;
    BOOL _doNotFetchFromServer;
    BOOL _promptUserToResolveAuthenticatonFailure;
    NSArray *_expectedDSIDs;
    NSDictionary *_serverResponse;
}

@property BOOL doNotFetchFromServer; // @synthesize doNotFetchFromServer=_doNotFetchFromServer;
@property (copy) NSArray *expectedDSIDs; // @synthesize expectedDSIDs=_expectedDSIDs;
@property BOOL forceServerFetch; // @synthesize forceServerFetch=_forceServerFetch;
@property BOOL promptUserToResolveAuthenticatonFailure; // @synthesize promptUserToResolveAuthenticatonFailure=_promptUserToResolveAuthenticatonFailure;
@property (readonly, strong) NSDictionary *serverResponse; // @synthesize serverResponse=_serverResponse;
@property BOOL signedInAccountShouldBeApprover; // @synthesize signedInAccountShouldBeApprover=_signedInAccountShouldBeApprover;

- (void).cxx_destruct;
- (id)requestOptions;
- (void)startRequestWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
