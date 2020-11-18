//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Catalyst/CATTaskResultObject.h>

@class DMFSecurityInformation;

@interface DMFFetchSecurityInformationResultObject : CATTaskResultObject
{
    DMFSecurityInformation *_securityInformation;
}

@property (readonly, copy, nonatomic) DMFSecurityInformation *securityInformation; // @synthesize securityInformation=_securityInformation;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSecurityInformation:(id)arg1;

@end

