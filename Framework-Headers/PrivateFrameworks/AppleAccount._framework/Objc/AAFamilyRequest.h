//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppleAccount/AARequest.h>

@class AAGrandSlamSigner;

@interface AAFamilyRequest : AARequest
{
    AAGrandSlamSigner *_grandSlamSigner;
}

@property (readonly, nonatomic) BOOL isUserInitiated;

- (void).cxx_destruct;
- (id)initWithAppleAccount:(id)arg1 grandSlamAccount:(id)arg2 accountStore:(id)arg3;
- (id)initWithGrandSlamSigner:(id)arg1;
- (id)urlRequest;

@end
