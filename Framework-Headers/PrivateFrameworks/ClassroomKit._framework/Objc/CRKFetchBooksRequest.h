//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CATTaskRequest.h"

@interface CRKFetchBooksRequest : CATTaskRequest
{
    BOOL _includeImages;
}

@property (nonatomic) BOOL includeImages; // @synthesize includeImages=_includeImages;

+ (BOOL)supportsSecureCoding;
+ (Class)whitelistedClassForResultObject;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isValidWithError:(id *)arg1;

@end

