//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Social/SLRequest.h>

@class NSString;

@interface SLFacebookRequest : SLRequest
{
}

@property (strong) NSString *accessToken; // @dynamic accessToken;
@property int responseDataFormat; // @dynamic responseDataFormat;

- (id)initWithURL:(id)arg1 parameters:(id)arg2 requestMethod:(long long)arg3;
- (void)preflightRequest;
- (id)preparedURLRequest;

@end
