//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKit/CKDatabaseOperationInfo.h>

#import <CloudKit/NSSecureCoding-Protocol.h>

@class NSString;

@interface CKFetchWebAuthTokenOperationInfo : CKDatabaseOperationInfo <NSSecureCoding>
{
    NSString *_APIToken;
}

@property (strong, nonatomic) NSString *APIToken; // @synthesize APIToken=_APIToken;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
