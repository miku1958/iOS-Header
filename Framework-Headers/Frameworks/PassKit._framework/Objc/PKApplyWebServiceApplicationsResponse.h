//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKApplyWebServiceResponse.h>

@class NSArray, NSString;

@interface PKApplyWebServiceApplicationsResponse : PKApplyWebServiceResponse
{
    NSArray *_allFeatureApplications;
    NSString *_lastUpdated;
}

@property (readonly, nonatomic) NSArray *allFeatureApplications; // @synthesize allFeatureApplications=_allFeatureApplications;
@property (readonly, copy, nonatomic) NSString *lastUpdated; // @synthesize lastUpdated=_lastUpdated;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1;

@end

