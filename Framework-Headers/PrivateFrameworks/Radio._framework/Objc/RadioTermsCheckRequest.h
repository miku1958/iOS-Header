//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Radio/RadioRequest.h>

@class SSURLConnectionRequest;

@interface RadioTermsCheckRequest : RadioRequest
{
    SSURLConnectionRequest *_request;
    unsigned long long _acceptedTermsVersion;
}

@property (nonatomic) unsigned long long acceptedTermsVersion; // @synthesize acceptedTermsVersion=_acceptedTermsVersion;

- (void).cxx_destruct;
- (void)cancel;
- (void)startWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
