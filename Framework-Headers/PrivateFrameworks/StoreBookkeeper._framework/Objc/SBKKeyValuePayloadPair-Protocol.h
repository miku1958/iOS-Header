//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreBookkeeper/NSObject-Protocol.h>
#import <StoreBookkeeper/NSSecureCoding-Protocol.h>

@class NSData, NSString;

@protocol SBKKeyValuePayloadPair <NSObject, NSSecureCoding>
+ (id)pairWithKVSKey:(NSString *)arg1 kvsPayload:(NSData *)arg2;
- (NSString *)kvsKey;
- (NSData *)kvsPayload;
- (id)kvsValueDescription;
- (double)timestamp;
@end

