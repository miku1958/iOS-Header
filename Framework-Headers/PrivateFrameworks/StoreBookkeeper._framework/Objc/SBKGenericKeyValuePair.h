//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <StoreBookkeeper/SBKKeyValuePayloadPair-Protocol.h>

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface SBKGenericKeyValuePair : NSObject <SBKKeyValuePayloadPair>
{
    NSString *_kvsKey;
    NSData *_kvsPayload;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSString *kvsKey; // @synthesize kvsKey=_kvsKey;
@property (readonly, nonatomic) NSData *kvsPayload; // @synthesize kvsPayload=_kvsPayload;
@property (readonly) Class superclass;

+ (id)pairWithKVSKey:(id)arg1 kvsPayload:(id)arg2;
- (void).cxx_destruct;
- (id)initWithKVSKey:(id)arg1 kvsPayload:(id)arg2;
- (id)kvsValueDescription;
- (double)timestamp;

@end
