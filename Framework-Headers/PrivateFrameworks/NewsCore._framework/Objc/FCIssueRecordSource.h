//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsCore/FCRecordSource.h>

@interface FCIssueRecordSource : FCRecordSource
{
}

+ (id)_URLStringForCoverImageKey:(id)arg1 inRecord:(id)arg2;
+ (BOOL)_useTaggedImages;
- (unsigned long long)highThresholdDataSizeLimit;
- (id)localizableKeys;
- (unsigned long long)lowThresholdDataSizeLimit;
- (id)nonLocalizableKeys;
- (int)pbRecordType;
- (id)recordFromCKRecord:(id)arg1 base:(id)arg2;
- (id)recordIDPrefix;
- (id)recordType;
- (id)storeFilename;
- (unsigned long long)storeVersion;

@end
