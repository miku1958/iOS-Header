//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class APReceiverMediaRemoteCommunicationChannelInternal, NSString;

@interface APReceiverMediaRemoteCommunicationChannel : NSObject
{
    APReceiverMediaRemoteCommunicationChannelInternal *_commChannel;
}

@property (readonly, nonatomic) NSString *uuid;

- (void)dealloc;
- (id)initWithDictionary:(id)arg1;
- (void)invalidate;
- (void)sendData:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end

