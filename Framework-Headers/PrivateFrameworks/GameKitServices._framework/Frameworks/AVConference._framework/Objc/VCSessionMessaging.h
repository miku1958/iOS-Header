//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface VCSessionMessaging : NSObject
{
    NSMutableDictionary *topics;
    unsigned int p2pID;
}

- (void)addTopic:(id)arg1 associatedStrings:(id)arg2 allowConcurrent:(BOOL)arg3 receiveHandler:(CDUnknownBlockType)arg4;
- (void)dealloc;
- (id)initWithP2PID:(unsigned int)arg1 remoteVersion:(id)arg2;
- (id)newDictionaryFromUnpackedMessage:(id)arg1;
- (id)newPackedMessageFromDictionary:(id)arg1;
- (void)sendMessage:(id)arg1 withTopic:(id)arg2;
- (void)stopMessaging;

@end

