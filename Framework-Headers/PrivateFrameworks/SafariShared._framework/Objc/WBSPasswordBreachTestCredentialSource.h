//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariShared/WBSPasswordBreachCredentialSource-Protocol.h>

@class NSArray;

@interface WBSPasswordBreachTestCredentialSource : NSObject <WBSPasswordBreachCredentialSource>
{
    NSArray *_credentials;
}

@property (readonly, nonatomic) NSArray *credentials;

- (void).cxx_destruct;
- (id)initWithPasswords:(id)arg1;
- (id)savedPasswordsForPersistentIdentifiers:(id)arg1;

@end
