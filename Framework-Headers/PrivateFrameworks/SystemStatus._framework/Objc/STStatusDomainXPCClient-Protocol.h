//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SystemStatus/NSObject-Protocol.h>

@protocol STStatusDomainData, STStatusDomainDataDiff;

@protocol STStatusDomainXPCClient <NSObject>
- (void)observeData:(id<STStatusDomainData>)arg1 forDomain:(unsigned long long)arg2;
- (void)observeDiff:(id<STStatusDomainDataDiff>)arg1 forDomain:(unsigned long long)arg2;
@end

