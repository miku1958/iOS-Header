//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoardFoundation/NSSecureCoding-Protocol.h>

@class NSData;

@interface SBFCredentialSet : NSObject <NSSecureCoding>
{
    BOOL _ownsContext;
    NSData *_cachedCredentials;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithSerializedCredentialSet:(id)arg1;
- (id)serializedCredentialSet;

@end

