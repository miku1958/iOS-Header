//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <CoreNFC/NFCTag-Protocol.h>

@class NFWeakReference, NSData, NSString;
@protocol NFCReaderSession, NFTag;

@interface NFCTag : NSObject <NFCTag>
{
    id<NFTag> _tag;
    NFWeakReference *_session;
}

@property (readonly, nonatomic, getter=isAvailable) BOOL available;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, strong, nonatomic) NSData *identifier;
@property (readonly, weak, nonatomic) id<NFCReaderSession> session;
@property (readonly) Class superclass;
@property (readonly, nonatomic) unsigned long long type;

+ (unsigned long long)_MaxRetry;
+ (double)_MaxRetryInterval;
+ (BOOL)supportsSecureCoding;
- (BOOL)_connectWithError:(id *)arg1;
- (BOOL)_disconnectWithError:(id *)arg1;
- (id)_getInternalReaderSession;
- (void)_setSession:(id)arg1;
- (void)_setTag:(id)arg1;
- (BOOL)_transceiveWithData:(id)arg1 receivedData:(id *)arg2 error:(id *)arg3;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSession:(id)arg1 tag:(id)arg2;

@end

