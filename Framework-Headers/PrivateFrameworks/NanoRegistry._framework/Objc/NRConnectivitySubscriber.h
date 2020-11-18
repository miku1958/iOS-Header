//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface NRConnectivitySubscriber : NSObject
{
    BOOL _connected;
    unsigned long long _dropoutCounter;
}

@property (nonatomic) BOOL connected; // @synthesize connected=_connected;
@property (nonatomic) unsigned long long dropoutCounter; // @synthesize dropoutCounter=_dropoutCounter;

+ (BOOL)getDropoutCounter:(unsigned long long *)arg1;
- (void)_readConnectivityStatus;
- (id)init;

@end

