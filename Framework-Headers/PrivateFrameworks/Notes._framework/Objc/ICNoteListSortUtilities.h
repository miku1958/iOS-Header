//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface ICNoteListSortUtilities : NSObject
{
}

+ (long long)currentNoteListSortType;
+ (id)descriptionForNoteListSortType:(long long)arg1;
+ (BOOL)isMenuItemCurrentSortTypeForTag:(long long)arg1;
+ (void)setCurrentNoteListSortType:(long long)arg1;
+ (void)setCurrentNoteListSortTypeByTag:(long long)arg1;
+ (id)sortDescriptorsForCurrentType;
+ (id)sortDescriptorsForCurrentTypeIncludingPinnedNotes:(BOOL)arg1;
+ (id)sortDescriptorsForPinnedNotes;
+ (id)sortDescriptorsForType:(long long)arg1;
+ (long long)sortTypeForTag:(long long)arg1;
+ (long long)tagForSortType:(long long)arg1;

@end

