//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsCore/FCRecordSource.h>

@interface FCForYouConfigRecordSource : FCRecordSource
{
}

+ (unsigned long long)highThresholdDataSizeLimit;
+ (unsigned long long)lowThresholdDataSizeLimit;
+ (id)recordType;
+ (id)storeFilename;
+ (unsigned long long)storeVersion;
- (id)desiredKeys;
- (id)recordFromCKRecord:(id)arg1 base:(id)arg2;

@end
