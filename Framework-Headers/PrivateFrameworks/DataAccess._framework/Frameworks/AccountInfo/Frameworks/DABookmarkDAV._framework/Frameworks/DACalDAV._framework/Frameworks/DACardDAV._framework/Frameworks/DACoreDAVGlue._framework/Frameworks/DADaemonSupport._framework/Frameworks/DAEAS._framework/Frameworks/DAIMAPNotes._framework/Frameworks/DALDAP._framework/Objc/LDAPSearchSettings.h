//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface LDAPSearchSettings : NSObject
{
    NSString *_searchDescription;
    NSString *_searchBase;
    unsigned long long _scope;
}

@property (nonatomic) unsigned long long scope; // @synthesize scope=_scope;
@property (strong, nonatomic) NSString *searchBase; // @synthesize searchBase=_searchBase;
@property (strong, nonatomic) NSString *searchDescription; // @synthesize searchDescription=_searchDescription;

- (void).cxx_destruct;
- (id)description;
- (BOOL)hasSameScopeAndBaseAsOther:(id)arg1;
- (unsigned long long)hash;
- (id)initWithSettingsDict:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)settingsDict;

@end

