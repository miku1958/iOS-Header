//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MessageProtection/NSObject-Protocol.h>

@class NSData;

@protocol P256PublicKeyProtocol <NSObject>
- (NSData *)dataRepresentation;
- (id)initWithData:(NSData *)arg1 error:(id *)arg2;
- (BOOL)verifySignature:(NSData *)arg1 data:(NSData *)arg2;
@end

