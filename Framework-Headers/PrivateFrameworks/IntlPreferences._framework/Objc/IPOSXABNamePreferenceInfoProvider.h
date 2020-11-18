//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <IntlPreferences/IPNamePreferenceInfoProvider-Protocol.h>

@class NSString;

@interface IPOSXABNamePreferenceInfoProvider : NSObject <IPNamePreferenceInfoProvider>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)canonicalKeyToValueIdentifierToNumericValueMap;
+ (id)canonicalNameToNativeKeyName;
+ (id)domain;
+ (id)nativeKeyNameToCanonicalKeyName;
+ (id)valueIdentifierToValueMapFromCanonicalKey:(id)arg1;
+ (id)valueToValueIdentifierMapFromCanonicalKey:(id)arg1;

@end
