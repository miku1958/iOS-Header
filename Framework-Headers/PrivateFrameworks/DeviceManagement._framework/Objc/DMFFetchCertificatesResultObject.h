//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Catalyst/CATTaskResultObject.h>

@class NSArray;

@interface DMFFetchCertificatesResultObject : CATTaskResultObject
{
    NSArray *_certificates;
}

@property (readonly, copy, nonatomic) NSArray *certificates; // @synthesize certificates=_certificates;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCertificates:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
