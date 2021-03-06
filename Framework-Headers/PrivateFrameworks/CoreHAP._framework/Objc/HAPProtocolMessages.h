//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@interface HAPProtocolMessages : HMFObject
{
}

+ (id)constructInfoRequest:(id)arg1 outTID:(char *)arg2;
+ (id)constructInfoRequest:(id)arg1 serviceUUID:(id)arg2 outTID:(char *)arg3;
+ (id)constructRequestHeaderFor:(unsigned long long)arg1 instanceID:(id)arg2 outTID:(char *)arg3;
+ (id)constructTokenRequest:(id)arg1 outTID:(char *)arg2;
+ (id)constructTokenUpdateRequest:(id)arg1 token:(id)arg2 outTID:(char *)arg3;
+ (id)logCategory;
+ (id)parseInfoResponse:(id)arg1 expectedTID:(unsigned char)arg2 withHeader:(BOOL)arg3;
+ (BOOL)parseTokenResponse:(id)arg1 expectedTID:(unsigned char)arg2 withHeader:(BOOL)arg3 outToken:(id *)arg4 outUUID:(id *)arg5;
+ (BOOL)parseTokenUpdateResponse:(id)arg1 expectedTID:(unsigned char)arg2 withHeader:(BOOL)arg3;

@end

