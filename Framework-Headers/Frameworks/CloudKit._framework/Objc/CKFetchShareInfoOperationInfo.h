//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKit/CKOperationInfo.h>

@class NSArray;

@interface CKFetchShareInfoOperationInfo : CKOperationInfo
{
    NSArray *_shareURLsToFetch;
}

@property (strong, nonatomic) NSArray *shareURLsToFetch; // @synthesize shareURLsToFetch=_shareURLsToFetch;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
