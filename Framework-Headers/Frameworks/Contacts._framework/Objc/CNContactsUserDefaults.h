//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface CNContactsUserDefaults : NSObject
{
}

@property (readonly, copy, nonatomic) NSString *countryCode;
@property (nonatomic) long long displayNameOrder;
@property (nonatomic) long long shortNameFormat;
@property (nonatomic, getter=isShortNameFormatEnabled) BOOL shortNameFormatEnabled;
@property (nonatomic) BOOL shortNameFormatPrefersNicknames;
@property (readonly, nonatomic) long long sortOrder;

+ (void)flushSharedInstance;
+ (id)sharedDefaults;
- (id)filteredGroupAndContainerIDs;
- (id)init;
- (long long)newContactDisplayNameOrder;
- (void)setFilteredGroupAndContainerIDs:(id)arg1;

@end

