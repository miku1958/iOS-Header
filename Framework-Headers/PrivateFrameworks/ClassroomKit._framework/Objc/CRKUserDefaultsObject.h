//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol CRKKeyObjectStoring;

@interface CRKUserDefaultsObject : NSObject
{
    NSString *_key;
    NSObject<CRKKeyObjectStoring> *_store;
}

@property (readonly, copy, nonatomic) NSString *key; // @synthesize key=_key;
@property (readonly, nonatomic) NSObject<CRKKeyObjectStoring> *store; // @synthesize store=_store;
@property (copy) id value;

- (void).cxx_destruct;
- (id)initWithDefaults:(id)arg1 key:(id)arg2;
- (id)initWithKey:(id)arg1;
- (id)initWithStore:(id)arg1 key:(id)arg2;
- (void)registerDefaultValue:(id)arg1;

@end

