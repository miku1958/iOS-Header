//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface _UILibArchiveStreamingReader : NSObject
{
    long long _state;
    struct ui_archive *_laArchive;
    int _laArchiveType;
    NSString *_laArchiveTypeName;
    int _laProcessingState;
    long long _nextLoadedItemEntrySequenceIndex;
    NSMutableArray *_readableLoadedItemEntryQueue;
    NSError *_readError;
    NSString *_archivePath;
    struct ui_archive *_underlyingArchive;
    long long _appleDoubleIdentificationType;
}

@property (nonatomic) long long appleDoubleIdentificationType; // @synthesize appleDoubleIdentificationType=_appleDoubleIdentificationType;
@property (readonly, nonatomic) NSString *archivePath; // @synthesize archivePath=_archivePath;
@property (readonly, nonatomic) NSString *openedArchiveUnderlyingFormatName;
@property (readonly, nonatomic) struct ui_archive *underlyingArchive; // @synthesize underlyingArchive=_underlyingArchive;

- (void).cxx_destruct;
- (void)_closeArchive;
- (id)_debugLoadAndPrintAllRemainingItems;
- (id)_loadItemByReadingAttributesFromUnderlyingArchiveEntry:(struct ui_archive_entry *)arg1;
- (id)_nextSimpleItemFromPendingQueueOrLibArchiveRead;
- (BOOL)_openArchive;
- (BOOL)_readItemsWithShouldVisitBlock:(CDUnknownBlockType)arg1 visitorBlock:(CDUnknownBlockType)arg2 error:(id *)arg3;
- (BOOL)_shouldReportAsAppleDoubleItem:(id)arg1 withConfirmedAppleDoubleFiles:(id)arg2;
- (BOOL)_shouldReportAsLogicalItem:(id)arg1 withConfirmedAppleDoubleFiles:(id)arg2;
- (void)close;
- (id)initForReadingArchivePath:(id)arg1;
- (BOOL)open;
- (BOOL)readAllItemsWithBlock:(CDUnknownBlockType)arg1 error:(id *)arg2;
- (BOOL)readLogicalItemsWithBlock:(CDUnknownBlockType)arg1 error:(id *)arg2;

@end

