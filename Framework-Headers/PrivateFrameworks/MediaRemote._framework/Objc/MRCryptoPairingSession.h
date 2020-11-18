//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray;
@protocol MRCryptoPairingSessionDelegate;

@interface MRCryptoPairingSession : NSObject
{
    void *_device;
    unsigned long long _role;
    id<MRCryptoPairingSessionDelegate> _delegate;
}

@property (nonatomic) id<MRCryptoPairingSessionDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, nonatomic) void *device; // @synthesize device=_device;
@property (readonly, nonatomic, getter=isPaired) BOOL paired;
@property (readonly, nonatomic) NSArray *pairedDevices;
@property (readonly, nonatomic) unsigned long long role; // @synthesize role=_role;
@property (readonly, nonatomic, getter=isValid) BOOL valid;

+ (id)allocWithZone:(struct _NSZone *)arg1;
- (void)close;
- (void)dealloc;
- (id)decryptData:(id)arg1 withError:(id *)arg2;
- (BOOL)deleteIdentityWithError:(id *)arg1;
- (id)encryptData:(id)arg1 withError:(id *)arg2;
- (void)handlePairingExchangeData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handlePairingFailureWithStatus:(int)arg1;
- (id)init;
- (id)initWithRole:(unsigned long long)arg1 device:(void *)arg2;
- (void)open;
- (id)removePeer;
- (id)updatePeer;

@end

