//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSDictionary.h>

@interface NSDictionary (FezAdditions)
+ (id)_dictionaryWithData:(id)arg1 isPlist:(BOOL)arg2 allowedClasses:(id)arg3;
+ (id)dictionaryWithArchiveData:(id)arg1;
+ (id)dictionaryWithArchiveData:(id)arg1 allowedClasses:(id)arg2;
+ (id)dictionaryWithKeyArray:(id)arg1 defaultValue:(id)arg2;
+ (id)dictionaryWithPlistData:(id)arg1;
- (id)__imDeepCopy;
- (BOOL)__imIsMutable;
- (id)archiveData;
- (id)dictionaryFromChanges:(id)arg1;
- (id)keysOfChangedEntriesComparedTo:(id)arg1;
- (id)plistData;
@end

