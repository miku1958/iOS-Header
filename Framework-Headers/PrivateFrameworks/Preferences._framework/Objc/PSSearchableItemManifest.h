//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface PSSearchableItemManifest : NSObject
{
    NSMutableArray *_searchableItems;
}

@property (strong, nonatomic) NSMutableArray *searchableItems; // @synthesize searchableItems=_searchableItems;

- (void).cxx_destruct;
- (id)_escapedStringForString:(id)arg1;
- (id)_stringKeyForString:(id)arg1;
- (void)addSearchableItem:(id)arg1;
- (void)addSearchableItems:(id)arg1;
- (id)init;
- (id)items;
- (void)removeSearchableItem:(id)arg1;
- (BOOL)writeToPlistAndStringsFilesAtURL:(id)arg1 error:(id *)arg2;

@end
