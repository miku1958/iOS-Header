//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKitDaemon/CKDURLRequest.h>

@class NSArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface CKDAcceptSharesURLRequest : CKDURLRequest
{
    CDUnknownBlockType _shareAcceptedBlock;
    NSArray *_shareMetadatasToAccept;
    NSMutableDictionary *_shareMetadataByRequestID;
}

@property (copy, nonatomic) CDUnknownBlockType shareAcceptedBlock; // @synthesize shareAcceptedBlock=_shareAcceptedBlock;
@property (strong, nonatomic) NSMutableDictionary *shareMetadataByRequestID; // @synthesize shareMetadataByRequestID=_shareMetadataByRequestID;
@property (strong, nonatomic) NSArray *shareMetadatasToAccept; // @synthesize shareMetadatasToAccept=_shareMetadatasToAccept;

- (void).cxx_destruct;
- (id)generateRequestOperations;
- (id)initWithOperation:(id)arg1 shareMetadatasToAccept:(id)arg2;
- (void)requestDidParseNodeFailure:(id)arg1;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)requestOperationClasses;

@end

