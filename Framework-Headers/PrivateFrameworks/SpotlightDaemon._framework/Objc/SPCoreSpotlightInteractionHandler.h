//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CNContactStore;

@interface SPCoreSpotlightInteractionHandler : NSObject
{
    CNContactStore *_contactStore;
}

@property (strong, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;

- (void).cxx_destruct;
- (id)attributeForIntent:(id)arg1 direction:(long long)arg2;
- (void)handleInteraction:(id)arg1 bundleID:(id)arg2 protectionClass:(id)arg3;
- (id)interestingContactIdentifiersFromIntent:(id)arg1;

@end

