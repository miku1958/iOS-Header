//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIArchiveItem.h>

__attribute__((visibility("hidden")))
@interface _UILibArchiveItem : _UIArchiveItem
{
    struct ui_archive_entry *_underlyingArchiveEntry;
    struct ui_archive *_underlyingArchive;
}

@property (readonly) struct ui_archive *underlyingArchive; // @synthesize underlyingArchive=_underlyingArchive;
@property (readonly) struct ui_archive_entry *underlyingArchiveEntry; // @synthesize underlyingArchiveEntry=_underlyingArchiveEntry;

+ (id)itemByReadingAttributesFromUnderlyingArchiveEntry:(struct ui_archive_entry *)arg1 archive:(struct ui_archive *)arg2;

@end

