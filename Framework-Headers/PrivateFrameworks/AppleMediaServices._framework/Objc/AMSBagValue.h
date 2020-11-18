//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ACAccount, NSArray, NSString;
@protocol AMSBagDataSourceProtocol;

@interface AMSBagValue : NSObject
{
    ACAccount *_account;
    id<AMSBagDataSourceProtocol> _dataSource;
    NSString *_key;
    NSArray *_transformBlocks;
    unsigned long long _valueType;
}

@property (copy, nonatomic) ACAccount *account; // @synthesize account=_account;
@property (weak, nonatomic) id<AMSBagDataSourceProtocol> dataSource; // @synthesize dataSource=_dataSource;
@property (strong, nonatomic) NSString *key; // @synthesize key=_key;
@property (readonly, nonatomic, getter=isLoaded) BOOL loaded;
@property (strong, nonatomic) NSArray *transformBlocks; // @synthesize transformBlocks=_transformBlocks;
@property (nonatomic) unsigned long long valueType; // @synthesize valueType=_valueType;

+ (BOOL)_value:(id)arg1 isKindOfValueType:(unsigned long long)arg2;
+ (id)_valueFromDictionary:(id)arg1 forBagKey:(id)arg2;
+ (id)bagValueWithKey:(id)arg1 valueType:(unsigned long long)arg2 valuePromise:(id)arg3;
+ (id)failingBagValueWithKey:(id)arg1 valueType:(unsigned long long)arg2 error:(id)arg3;
+ (id)frozenBagValueWithKey:(id)arg1 value:(id)arg2 valueType:(unsigned long long)arg3;
+ (id)globalBagValueStorage;
- (void).cxx_destruct;
- (void)_applyTransformsToValue:(id)arg1 index:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_processedDefaultValue:(id)arg1;
- (id)initWithDataSource:(id)arg1 key:(id)arg2 valueType:(unsigned long long)arg3;
- (id)initWithDataSource:(id)arg1 key:(id)arg2 valueType:(unsigned long long)arg3 account:(id)arg4;
- (id)transformWithBlock:(CDUnknownBlockType)arg1;
- (id)valuePromise;
- (void)valueWithCompletion:(CDUnknownBlockType)arg1;
- (id)valueWithError:(id *)arg1;

@end
