//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface PKPassOwnershipToken : NSObject
{
    NSString *_ownershipToken;
    NSString *_ownershipTokenIdentifier;
}

@property (copy, nonatomic) NSString *ownershipToken;
@property (readonly, copy, nonatomic) NSString *ownershipTokenIdentifier; // @synthesize ownershipTokenIdentifier=_ownershipTokenIdentifier;

+ (void)deleteAllLocalKeychainOwnershipTokens;
+ (void)queryKeychainForOwnershipTokens:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
- (void)_readFromKeychain;
- (id)_wrapperWithType:(unsigned long long)arg1 identifier:(id)arg2;
- (void)_writeToKeychain;
- (void)deleteTokenFromKeychain;
- (void)deleteTokenFromLocalKeychain;
- (id)description;
- (id)initWithIdentifier:(id)arg1;
- (id)initWithOwnershipToken:(id)arg1 identifier:(id)arg2;

@end

