//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSCondition;

@interface TTYDictionaryManager : NSObject
{
    NSCondition *_condition;
    NSArray *_availableDictionaries;
}

@property (strong, nonatomic) NSArray *availableDictionaries; // @synthesize availableDictionaries=_availableDictionaries;

+ (id)availableDictionaryAssetsUsingRemoteInfo:(BOOL)arg1;
- (void).cxx_destruct;
- (BOOL)_isStalledAutoDownloadAsset:(id)arg1;
- (id)_ttyDictionaryAsset;
- (void)dealloc;
- (void)deleteIfNeeded;
- (BOOL)downloadAsset:(id)arg1 withError:(id *)arg2;
- (void)downloadIfNeeded;
- (id)init;

@end

