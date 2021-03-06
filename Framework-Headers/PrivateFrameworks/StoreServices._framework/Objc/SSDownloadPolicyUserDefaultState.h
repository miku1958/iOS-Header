//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <StoreServices/NSCopying-Protocol.h>
#import <StoreServices/NSSecureCoding-Protocol.h>
#import <StoreServices/SSXPCCoding-Protocol.h>

@class NSNumber, NSString;

@interface SSDownloadPolicyUserDefaultState : NSObject <NSSecureCoding, SSXPCCoding, NSCopying>
{
    NSString *_domain;
    NSNumber *_fallbackNumberValue;
    NSString *_key;
    BOOL _shouldInvertBoolValue;
}

@property (readonly, nonatomic) BOOL currentBoolValue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *domain; // @synthesize domain=_domain;
@property (copy, nonatomic) NSNumber *fallbackNumberValue; // @synthesize fallbackNumberValue=_fallbackNumberValue;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSString *key; // @synthesize key=_key;
@property (nonatomic) BOOL shouldInvertBoolValue; // @synthesize shouldInvertBoolValue=_shouldInvertBoolValue;
@property (readonly) Class superclass;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copyXPCEncoding;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end

