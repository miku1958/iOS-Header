//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKit/CKOperationInfo.h>

@class NSArray;

@interface CKFetchShareMetadataOperationInfo : CKOperationInfo
{
    BOOL _shouldFetchRootRecord;
    NSArray *_shareURLsToFetch;
    NSArray *_rootRecordDesiredKeys;
}

@property (strong, nonatomic) NSArray *rootRecordDesiredKeys; // @synthesize rootRecordDesiredKeys=_rootRecordDesiredKeys;
@property (strong, nonatomic) NSArray *shareURLsToFetch; // @synthesize shareURLsToFetch=_shareURLsToFetch;
@property (nonatomic) BOOL shouldFetchRootRecord; // @synthesize shouldFetchRootRecord=_shouldFetchRootRecord;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

