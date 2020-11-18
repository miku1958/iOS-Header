//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppleMediaServices/AMSTask.h>

@class NSString;

@interface AMSCardRegistrationTask : AMSTask
{
    NSString *_countryCode;
    NSString *_merchantIdentifier;
}

@property (copy, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property (copy, nonatomic) NSString *merchantIdentifier; // @synthesize merchantIdentifier=_merchantIdentifier;

- (void).cxx_destruct;
- (id)_performCardRegistration;
- (id)initWithCountryCode:(id)arg1 merchantIdentifier:(id)arg2;
- (id)performCardRegistration;

@end

