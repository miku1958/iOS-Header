//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CATTaskResultObject.h"

@class NSString;

@interface CRKIdentityPublishCertificateResultObject : CATTaskResultObject
{
    NSString *_certificateID;
}

@property (copy, nonatomic) NSString *certificateID; // @synthesize certificateID=_certificateID;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

