//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SafariShared/WBSAutomaticReadingListSocialSource.h>

@interface WBSAutomaticReadingListSinaWeiboSource : WBSAutomaticReadingListSocialSource
{
}

+ (id)sharedSource;
- (id)accountTypeIdentifier;
- (long long)compareItem:(id)arg1 toItem:(id)arg2;
- (long long)compareNewestRecordInRange:(id)arg1 toNewestRecordInRange:(id)arg2;
- (long long)compareNewestRecordInRange:(id)arg1 toOldestRecordInRange:(id)arg2;
- (long long)compareOldestRecordInRange:(id)arg1 toOldestRecordInRange:(id)arg2;
- (Class)itemClass;
- (id)requestParametersForRecordsWithAge:(int)arg1 relativeTo:(id)arg2;
- (id)resourceURLString;
- (id)serviceName;
- (id)serviceType;

@end
