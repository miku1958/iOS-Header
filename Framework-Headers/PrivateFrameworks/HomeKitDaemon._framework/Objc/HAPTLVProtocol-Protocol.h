//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class NSData;

@protocol HAPTLVProtocol <NSObject>
- (BOOL)parseFromData:(NSData *)arg1 error:(id *)arg2;
- (NSData *)serializeWithError:(id *)arg1;
@end

