//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SystemStatus/STStatusDomainPublisher.h>

@interface STUserInteractionHandlingStatusDomainPublisher : STStatusDomainPublisher
{
    CDUnknownBlockType _userInteractionHandlerBlock;
}

@property (copy, nonatomic) CDUnknownBlockType userInteractionHandlerBlock; // @synthesize userInteractionHandlerBlock=_userInteractionHandlerBlock;

- (void).cxx_destruct;
- (void)handleUserInteraction:(id)arg1 forDomain:(unsigned long long)arg2;
- (void)handleUserInteractionsWithBlock:(CDUnknownBlockType)arg1;

@end
