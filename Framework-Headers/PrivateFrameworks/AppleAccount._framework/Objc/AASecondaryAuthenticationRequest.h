//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppleAccount/AARequest.h>

@class NSString;

@interface AASecondaryAuthenticationRequest : AARequest
{
    NSString *_primaryToken;
    NSString *_dsid;
}

+ (Class)responseClass;
- (void).cxx_destruct;
- (id)initWithDSID:(id)arg1 primaryToken:(id)arg2;
- (id)urlRequest;
- (id)urlString;

@end

