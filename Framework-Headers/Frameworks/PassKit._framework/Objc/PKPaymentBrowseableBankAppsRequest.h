//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKPaymentWebServiceRequest.h>

@class NSString;

@interface PKPaymentBrowseableBankAppsRequest : PKPaymentWebServiceRequest
{
    NSString *_region;
}

@property (copy, nonatomic) NSString *region; // @synthesize region=_region;

- (void).cxx_destruct;
- (id)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 appleAccountInformation:(id)arg3;
- (id)initWithRegion:(id)arg1;

@end

