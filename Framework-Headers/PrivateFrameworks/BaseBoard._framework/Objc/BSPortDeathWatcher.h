//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BaseBoard/BSPortDeathSentinel.h>

@interface BSPortDeathWatcher : BSPortDeathSentinel
{
}

- (id)initWithPort:(unsigned int)arg1 queue:(id)arg2 deathHandler:(CDUnknownBlockType)arg3;
- (id)initWithSendRight:(id)arg1 queue:(id)arg2 deathHandler:(CDUnknownBlockType)arg3;

@end

