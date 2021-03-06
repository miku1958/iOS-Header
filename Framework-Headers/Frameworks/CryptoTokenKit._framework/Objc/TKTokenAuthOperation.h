//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CryptoTokenKit/NSSecureCoding-Protocol.h>

@class NSError;

@interface TKTokenAuthOperation : NSObject <NSSecureCoding>
{
    NSError *_authenticationError;
}

@property (copy) NSError *authenticationError; // @synthesize authenticationError=_authenticationError;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (Class)baseClassForUI;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)finishWithError:(id *)arg1;
- (void)importOperation:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

