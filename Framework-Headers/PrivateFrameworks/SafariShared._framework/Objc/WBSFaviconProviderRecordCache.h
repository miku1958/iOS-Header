//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface WBSFaviconProviderRecordCache : NSObject
{
    NSMutableDictionary *_iconURLStringToInfoDictionary;
    NSMutableDictionary *_iconUUIDToURLStringDictionary;
}

- (void).cxx_destruct;
- (id)dateAddedForFaviconURLString:(id)arg1 iconUUID:(id *)arg2 size:(struct CGSize *)arg3;
- (id)init;
- (void)removeAllRecords;
- (void)removeRecordForIconUUIDs:(id)arg1;
- (void)setDateAdded:(id)arg1 forFaviconURLString:(id)arg2 iconUUID:(id)arg3 iconSize:(struct CGSize)arg4;

@end

