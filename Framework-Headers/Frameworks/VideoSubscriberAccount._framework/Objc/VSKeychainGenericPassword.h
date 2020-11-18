//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideoSubscriberAccount/VSKeychainItem.h>

@class NSDate, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface VSKeychainGenericPassword : VSKeychainItem
{
}

@property (copy, nonatomic) NSString *accessGroup;
@property (copy, nonatomic) NSString *account;
@property (copy, nonatomic) NSString *comment;
@property (readonly, copy, nonatomic) NSDate *creationDate;
@property (copy, nonatomic) NSNumber *creatorCode;
@property (copy, nonatomic) NSString *generic;
@property (nonatomic, getter=isInvisible) BOOL invisible;
@property (copy, nonatomic) NSString *itemDescription;
@property (copy, nonatomic) NSString *label;
@property (readonly, copy, nonatomic) NSDate *modificationDate;
@property (nonatomic, getter=isNegative) BOOL negative;
@property (copy, nonatomic) NSString *service;
@property (nonatomic, getter=isSynchronizable) BOOL synchronizable;
@property (copy, nonatomic) NSNumber *typeCode;

- (id)_faultWhileAccessingPrimitiveValueForKey:(id)arg1;
- (void)_notifyWhileSettingPrimitiveValue:(id)arg1 forKey:(id)arg2;

@end

