//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CPDistributedMessagingDelayedReplyContext : NSObject
{
    unsigned int _replyPort;
    BOOL _portPassing;
}

@property (nonatomic) BOOL portPassing; // @synthesize portPassing=_portPassing;
@property (nonatomic) unsigned int replyPort; // @synthesize replyPort=_replyPort;

- (void)dealloc;
- (id)initWithReplyPort:(unsigned int)arg1 portPassing:(BOOL)arg2;

@end
