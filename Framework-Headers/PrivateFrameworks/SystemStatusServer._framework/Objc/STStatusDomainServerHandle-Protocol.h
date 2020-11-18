//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SystemStatusServer/NSObject-Protocol.h>

@protocol STStatusDomainClientHandle, STStatusDomainData, STStatusDomainUserInteraction;

@protocol STStatusDomainServerHandle <NSObject>
- (id<STStatusDomainData>)dataForDomain:(unsigned long long)arg1;
- (void)registerClient:(id<STStatusDomainClientHandle>)arg1 forDomain:(unsigned long long)arg2;
- (void)removeClient:(id<STStatusDomainClientHandle>)arg1 forDomain:(unsigned long long)arg2;
- (void)reportUserInteraction:(id<STStatusDomainUserInteraction>)arg1 forClient:(id<STStatusDomainClientHandle>)arg2 domain:(unsigned long long)arg3;
@end
