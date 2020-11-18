//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKApplyWebServiceResponse.h>

@class PKAccount, PKFeatureApplication;

@interface PKApplyWebServiceApplyResponse : PKApplyWebServiceResponse
{
    PKFeatureApplication *_featureApplication;
    PKAccount *_account;
}

@property (readonly, nonatomic) PKAccount *account; // @synthesize account=_account;
@property (readonly, nonatomic) PKFeatureApplication *featureApplication; // @synthesize featureApplication=_featureApplication;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)nextStepInfo;

@end

