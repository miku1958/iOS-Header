//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppleAccount/AAAppleIDSettingsRequest.h>

@class NSString;

@interface AAPaymentSummaryRequest : AAAppleIDSettingsRequest
{
    NSString *_secondaryAuthToken;
    NSString *_heartbeatToken;
}

@property (copy, nonatomic) NSString *heartbeatToken; // @synthesize heartbeatToken=_heartbeatToken;
@property (copy, nonatomic) NSString *secondaryAuthToken; // @synthesize secondaryAuthToken=_secondaryAuthToken;

+ (Class)responseClass;
- (void).cxx_destruct;
- (BOOL)forceGSToken;
- (id)urlRequest;
- (id)urlString;

@end

