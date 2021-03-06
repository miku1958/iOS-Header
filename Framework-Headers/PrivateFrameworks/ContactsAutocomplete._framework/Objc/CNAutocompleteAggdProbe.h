//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsAutocomplete/CNAutocompleteProbe-Protocol.h>

@class NSMutableDictionary, NSString;

@interface CNAutocompleteAggdProbe : NSObject <CNAutocompleteProbe>
{
    NSString *_keyPrefix;
    NSMutableDictionary *_setData;
    NSMutableDictionary *_addData;
    NSString *_bundleID;
}

@property (strong, nonatomic) NSMutableDictionary *addData; // @synthesize addData=_addData;
@property (readonly, copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy, nonatomic) NSString *keyPrefix; // @synthesize keyPrefix=_keyPrefix;
@property (strong, nonatomic) NSMutableDictionary *setData; // @synthesize setData=_setData;
@property (readonly) Class superclass;

+ (id)preparedBundleIdentifier:(id)arg1;
- (void).cxx_destruct;
- (id)fullKey:(id)arg1;
- (id)init;
- (id)initWithKeyPrefix:(id)arg1;
- (id)initWithKeyPrefix:(id)arg1 bundleIdentifier:(id)arg2;
- (void)recordAddValue:(id)arg1 forKey:(id)arg2;
- (void)recordSetValue:(id)arg1 forKey:(id)arg2;
- (void)sendData;

@end

