//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CATTaskResultObject.h"

@class NSDictionary;

@interface CRKFetchAdHocConfigurationResultObject : CATTaskResultObject
{
    NSDictionary *_configuration;
}

@property (copy, nonatomic) NSDictionary *configuration; // @synthesize configuration=_configuration;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

