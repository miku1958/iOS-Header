//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HMFUnfairLock, NSData;

__attribute__((visibility("hidden")))
@interface HMDIdentifierSaltStore : NSObject
{
    HMFUnfairLock *_lock;
    NSData *_identifierSalt;
    NSData *_assistantIdentifierSalt;
}

@property (strong, nonatomic) NSData *assistantIdentifierSalt; // @synthesize assistantIdentifierSalt=_assistantIdentifierSalt;
@property (strong, nonatomic) NSData *identifierSalt; // @synthesize identifierSalt=_identifierSalt;

- (void).cxx_destruct;
- (id)init;

@end
