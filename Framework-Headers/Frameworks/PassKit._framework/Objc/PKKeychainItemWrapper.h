//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface PKKeychainItemWrapper : NSObject
{
    NSMutableDictionary *keychainItemData;
    NSMutableDictionary *genericPasswordQuery;
}

@property (strong, nonatomic) NSMutableDictionary *genericPasswordQuery; // @synthesize genericPasswordQuery;
@property (strong, nonatomic) NSMutableDictionary *keychainItemData; // @synthesize keychainItemData;

- (void).cxx_destruct;
- (id)dictionaryToSecItemFormat:(id)arg1;
- (id)initWithIdentifier:(id)arg1 accessGroup:(id)arg2 serviceName:(id)arg3;
- (id)objectForKey:(id)arg1;
- (void)resetKeychainItem;
- (id)secItemFormatToDictionary:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)writeToKeychain;

@end

