//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapsSupport/MSPSenderStrategy.h>

__attribute__((visibility("hidden")))
@interface MSPSenderMinimalStrategy : MSPSenderStrategy
{
    BOOL _needToSendInit;
}

- (BOOL)_needToSendEtaRefreshFor:(id)arg1 state:(id)arg2;
- (void)_sendDestinationIfNeeded;
- (BOOL)_validDestinationState:(id)arg1;
- (void)addParticipants:(id)arg1;
- (void)destinationUpdated:(id)arg1;
- (void)etaUpdated:(id)arg1;

@end

