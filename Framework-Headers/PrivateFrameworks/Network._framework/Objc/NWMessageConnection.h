//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Network/NWConnection.h>

@interface NWMessageConnection : NWConnection
{
}

- (void)readMessageWithMaximumCount:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)writeCloseWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)writeMessage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
