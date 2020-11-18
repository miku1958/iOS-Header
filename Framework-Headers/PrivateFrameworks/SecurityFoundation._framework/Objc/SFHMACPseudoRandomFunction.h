//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SecurityFoundation/SFPseudoRandomFunction-Protocol.h>

@class NSString;
@protocol SFDigestOperation;

@interface SFHMACPseudoRandomFunction : NSObject <SFPseudoRandomFunction>
{
    id _hmacPseudoRandomFunctionInternal;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) id<SFDigestOperation> digestOperation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)generateBytesWithLength:(long long)arg1 key:(id)arg2 error:(id)arg3;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDigestOperation:(id)arg1;

@end
