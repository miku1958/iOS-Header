//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface DCService : NSObject
{
    NSURL *_url;
    NSString *_keychainItemIdentifier;
    NSString *_uniqueIdentifier;
}

@property (readonly, strong) NSString *keychainItemIdentifier; // @synthesize keychainItemIdentifier=_keychainItemIdentifier;
@property (readonly, strong) NSString *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property (readonly, strong) NSURL *url; // @synthesize url=_url;

+ (id)serverIdentifierForURL:(id)arg1;
+ (id)serviceWithAccount:(id)arg1;
+ (id)serviceWithHostName:(id)arg1 uniqueIdentifier:(id)arg2;
+ (id)serviceWithURL:(id)arg1 keychainItemIdentifier:(id)arg2;
- (void).cxx_destruct;
- (id)_initWithAccount:(id)arg1;
- (id)_initWithHostName:(id)arg1 uniqueIdentifier:(id)arg2;
- (id)_initWithURL:(id)arg1 keychainItemIdentifier:(id)arg2;
- (id)description;
- (void)portNumberDidChange:(id)arg1;

@end
