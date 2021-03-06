//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSArray, NSString, _INPBIntentType;

@protocol _INPBIntentSupport <NSObject>

@property (copy, nonatomic) NSArray *intentsRestrictedWhileLockeds;
@property (readonly, nonatomic) unsigned long long intentsRestrictedWhileLockedsCount;
@property (copy, nonatomic) NSArray *intentsSupporteds;
@property (readonly, nonatomic) unsigned long long intentsSupportedsCount;
@property (copy, nonatomic) NSArray *supportedMediaCategories;
@property (readonly, nonatomic) unsigned long long supportedMediaCategoriesCount;

+ (Class)intentsRestrictedWhileLockedType;
+ (Class)intentsSupportedType;
- (void)addIntentsRestrictedWhileLocked:(_INPBIntentType *)arg1;
- (void)addIntentsSupported:(_INPBIntentType *)arg1;
- (void)addSupportedMediaCategories:(NSString *)arg1;
- (void)clearIntentsRestrictedWhileLockeds;
- (void)clearIntentsSupporteds;
- (void)clearSupportedMediaCategories;
- (_INPBIntentType *)intentsRestrictedWhileLockedAtIndex:(unsigned long long)arg1;
- (_INPBIntentType *)intentsSupportedAtIndex:(unsigned long long)arg1;
- (NSString *)supportedMediaCategoriesAtIndex:(unsigned long long)arg1;
@end

