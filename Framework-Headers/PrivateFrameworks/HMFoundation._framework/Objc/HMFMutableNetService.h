//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFNetService.h>

@class NSDictionary;

@interface HMFMutableNetService : HMFNetService
{
    unsigned long long _port;
    BOOL _publishing;
    CDUnknownBlockType _publishBlock;
}

@property (copy, nonatomic) NSDictionary *TXTRecord; // @dynamic TXTRecord;
@property (nonatomic) unsigned long long port; // @synthesize port=_port;
@property (copy, nonatomic) CDUnknownBlockType publishBlock; // @synthesize publishBlock=_publishBlock;
@property (getter=isPublishing) BOOL publishing; // @synthesize publishing=_publishing;

- (void).cxx_destruct;
- (id)initWithDomain:(id)arg1 type:(id)arg2 name:(id)arg3 port:(unsigned long long)arg4;
- (id)initWithNetService:(id)arg1;
- (id)internal;
- (void)netService:(id)arg1 didNotPublish:(id)arg2;
- (void)netServiceDidPublish:(id)arg1;
- (void)netServiceDidStop:(id)arg1;
- (void)netServiceWillPublish:(id)arg1;
- (void)removeTXTRecordValueForKey:(id)arg1;
- (void)setInternal:(id)arg1;
- (void)setTXTRecordValue:(id)arg1 forKey:(id)arg2;
- (void)startPublishingWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)stopPublishing;
- (void)updateTXTRecord;
- (void)updateTXTRecordWithData:(id)arg1;

@end
