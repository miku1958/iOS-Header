//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WiFiPeerToPeer/NSObject-Protocol.h>

@class NSData, WiFiMACAddress;

@protocol WiFiAwareSubscriberXPC <NSObject>
- (void)cancel;
- (void)sendMessage:(NSData *)arg1 toPeerAddress:(WiFiMACAddress *)arg2 withInstanceID:(unsigned char)arg3 completionHandler:(void (^)(long long))arg4;
@end

