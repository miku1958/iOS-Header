//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface BSSignal : NSObject
{
    BOOL _signalled;
}

- (BOOL)hasBeenSignalled;
- (id)init;
- (void)reset;
- (void)signal;

@end

