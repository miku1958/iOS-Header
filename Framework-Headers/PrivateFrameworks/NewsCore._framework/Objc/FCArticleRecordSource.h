//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsCore/FCRecordSource.h>

@class NSArray;

@interface FCArticleRecordSource : FCRecordSource
{
    NSArray *_genericKeys;
}

+ (id)canaryRecordName;
+ (id)changeTagFromCKRecord:(id)arg1;
+ (unsigned long long)highThresholdDataSizeLimit;
+ (id)identifierFromCKRecord:(id)arg1;
+ (unsigned long long)lowThresholdDataSizeLimit;
+ (id)modificationDateFromCKRecord:(id)arg1;
+ (id)recordType;
+ (id)storeFilename;
+ (unsigned long long)storeVersion;
+ (BOOL)supportsDeletions;
+ (BOOL)useTaggedImages;
- (void).cxx_destruct;
- (id)desiredKeys;
- (id)genericKeys;
- (id)initWithContentDatabase:(id)arg1 contentDirectory:(id)arg2;
- (id)initWithContentDatabase:(id)arg1 contentDirectory:(id)arg2 desiredArticleRecordFieldOptions:(unsigned long long)arg3;
- (id)localizableKeys;
- (id)localizedKeysByOriginalKey;
- (id)recordFromCKRecord:(id)arg1 base:(id)arg2;
- (id)saveArticleRecords:(id)arg1;
- (id)saveFeedItemAndArticleRecords:(id)arg1;
- (id)urlStringForThumbnailKey:(id)arg1 inRecord:(id)arg2;

@end
