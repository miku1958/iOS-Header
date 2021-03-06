//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet, NSUUID;

@interface TITextCheckerExemptionsImpl : NSObject
{
    CDUnknownBlockType _contactObserver;
    id _userDictionaryObserver;
    unsigned long long _observerAssertionCount;
    NSSet *_addressBookTokens;
    NSSet *_userDictionaryTokens;
    NSUUID *_userDictionaryUUID;
}

@property (strong, nonatomic) NSSet *addressBookTokens; // @synthesize addressBookTokens=_addressBookTokens;
@property (strong, nonatomic) NSSet *userDictionaryTokens; // @synthesize userDictionaryTokens=_userDictionaryTokens;
@property (copy, nonatomic) NSUUID *userDictionaryUUID; // @synthesize userDictionaryUUID=_userDictionaryUUID;

+ (id)sharedTextCheckerExemptionsImpl;
- (void).cxx_destruct;
- (void)addObserverAssertion;
- (void)dealloc;
- (void)removeObserverAssertion;
- (BOOL)stringIsExemptFromChecker:(id)arg1;

@end

