//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreNFC/NSCopying-Protocol.h>
#import <CoreNFC/NSObject-Protocol.h>
#import <CoreNFC/NSSecureCoding-Protocol.h>

@class NFCNDEFMessage;

@protocol NFCNDEFTag <NSObject, NSSecureCoding, NSCopying>

@property (readonly, nonatomic, getter=isAvailable) BOOL available;

- (void)queryNDEFStatusWithCompletionHandler:(void (^)(unsigned long long, unsigned long long, NSError *))arg1;
- (void)readNDEFWithCompletionHandler:(void (^)(NFCNDEFMessage *, NSError *))arg1;
- (void)writeLockWithCompletionHandler:(void (^)(NSError *))arg1;
- (void)writeNDEF:(NFCNDEFMessage *)arg1 completionHandler:(void (^)(NSError *))arg2;
@end
