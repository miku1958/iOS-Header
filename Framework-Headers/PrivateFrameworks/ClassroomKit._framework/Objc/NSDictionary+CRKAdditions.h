//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSDictionary.h>

@class NSString;

@interface NSDictionary (CRKAdditions)

@property (readonly, nonatomic) NSString *crk_JSONString;
@property (readonly, nonatomic) id crk_keyValueObservingNewObject;
@property (readonly, nonatomic) id crk_keyValueObservingOldObject;

- (id)crk_JSONStringWithPrettyPrinting:(BOOL)arg1 sortKeys:(BOOL)arg2;
- (id)crk_dictionaryByAddingEntriesFromDictionary:(id)arg1;
@end

