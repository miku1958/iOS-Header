//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKitDaemon/CKDURLRequest.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CKDFetchWebAuthTokenURLRequest : CKDURLRequest
{
    NSString *_APIToken;
    CDUnknownBlockType _tokenFetchedBlock;
}

@property (copy, nonatomic) NSString *APIToken; // @synthesize APIToken=_APIToken;
@property (copy, nonatomic) CDUnknownBlockType tokenFetchedBlock; // @synthesize tokenFetchedBlock=_tokenFetchedBlock;

- (void).cxx_destruct;
- (id)generateRequestOperations;
- (int)operationType;
- (void)requestDidParseNodeFailure:(id)arg1;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)requestOperationClasses;

@end

