//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaRemote/NSObject-Protocol.h>

@class MRProtocolMessage, MRProtocolMessageQueue, NSData;

@protocol MRProtocolMessageQueueDataSource <NSObject>
- (NSData *)messageQueue:(MRProtocolMessageQueue *)arg1 dataForMessage:(MRProtocolMessage *)arg2;
@end

