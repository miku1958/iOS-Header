//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKit/CKDatabaseOperationInfo.h>

#import <CloudKit/NSSecureCoding-Protocol.h>

@class NSArray, NSDictionary;

@interface CKPublishAssetsOperationInfo : CKDatabaseOperationInfo <NSSecureCoding>
{
    NSArray *_recordIDs;
    NSDictionary *_fileNamesByAssetFieldNames;
    unsigned long long _requestedTTL;
    unsigned long long _URLOptions;
}

@property (nonatomic) unsigned long long URLOptions; // @synthesize URLOptions=_URLOptions;
@property (strong, nonatomic) NSDictionary *fileNamesByAssetFieldNames; // @synthesize fileNamesByAssetFieldNames=_fileNamesByAssetFieldNames;
@property (strong, nonatomic) NSArray *recordIDs; // @synthesize recordIDs=_recordIDs;
@property (nonatomic) unsigned long long requestedTTL; // @synthesize requestedTTL=_requestedTTL;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

