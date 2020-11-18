//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKitDaemon/CKDURLRequest.h>

@class NSArray, NSMutableDictionary, NSSet;

__attribute__((visibility("hidden")))
@interface CKDRecordResolveTokenURLRequest : CKDURLRequest
{
    BOOL _shouldFetchRootRecord;
    NSSet *_rootRecordDesiredKeySet;
    CDUnknownBlockType _tokenResolveBlock;
    NSArray *_lookupInfos;
    NSMutableDictionary *_lookupInfosByRequestID;
}

@property (strong, nonatomic) NSArray *lookupInfos; // @synthesize lookupInfos=_lookupInfos;
@property (strong, nonatomic) NSMutableDictionary *lookupInfosByRequestID; // @synthesize lookupInfosByRequestID=_lookupInfosByRequestID;
@property (strong, nonatomic) NSSet *rootRecordDesiredKeySet; // @synthesize rootRecordDesiredKeySet=_rootRecordDesiredKeySet;
@property (nonatomic) BOOL shouldFetchRootRecord; // @synthesize shouldFetchRootRecord=_shouldFetchRootRecord;
@property (copy, nonatomic) CDUnknownBlockType tokenResolveBlock; // @synthesize tokenResolveBlock=_tokenResolveBlock;

- (void).cxx_destruct;
- (id)initWithShortTokenLookupInfos:(id)arg1;
- (int)operationType;
- (void)requestDidParseNodeFailure:(id)arg1;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)requestOperationClasses;
- (id)requestOperations;
- (id)sourceApplicationBundleIdentifier;

@end

