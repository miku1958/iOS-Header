//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsCore/FCKeyValueStoreSavePolicy.h>

@interface FCKeyValueStoreSavePolicyThrottle : FCKeyValueStoreSavePolicy
{
    double _delay;
}

- (id)initWithDelay:(double)arg1;
- (void)scheduleSaveOnQueue:(id)arg1 handler:(CDUnknownBlockType)arg2;

@end
