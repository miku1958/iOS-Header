//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@protocol HAPStreamDelegate;

@interface HAPRelayStream : HMFObject
{
    id<HAPStreamDelegate> _delegate;
    unsigned long long _mtu;
}

@property (weak) id<HAPStreamDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, nonatomic) unsigned long long mtu; // @synthesize mtu=_mtu;

- (void).cxx_destruct;
- (void)close;
- (void)open;
- (id)writeData:(id)arg1 error:(id *)arg2;

@end

