//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppleAccount/AAResponse.h>

@class NSData, NSDictionary, NSString;

@interface AAGenericTermsUIResponse : AAResponse
{
    NSDictionary *_responseTermsDictionary;
    NSString *_responseAgreeURL;
    NSData *_responseData;
}

@property (readonly, nonatomic) NSString *agreeURL;
@property (readonly, nonatomic) NSData *responseData;
@property (readonly, nonatomic) NSDictionary *termsDictionary;

- (void).cxx_destruct;
- (id)initWithHTTPResponse:(id)arg1 data:(id)arg2;

@end
