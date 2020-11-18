//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, _UILibArchiveStreamingReader;

__attribute__((visibility("hidden")))
@interface _UIArchiveListingController : NSObject
{
    _UILibArchiveStreamingReader *_archiveReader;
    BOOL _isValidArchive;
    BOOL _excludeDotFilesFromResults;
    NSString *_archivePath;
    long long _appleDoubleIdentificationType;
}

@property (nonatomic) long long appleDoubleIdentificationType; // @synthesize appleDoubleIdentificationType=_appleDoubleIdentificationType;
@property (readonly, nonatomic) NSString *archivePath; // @synthesize archivePath=_archivePath;
@property (nonatomic) BOOL excludeDotFilesFromResults; // @synthesize excludeDotFilesFromResults=_excludeDotFilesFromResults;

- (void).cxx_destruct;
- (BOOL)_shouldVisitItem:(id)arg1;
- (void)dealloc;
- (BOOL)determineIsReadableArchive;
- (BOOL)enumerateLogicalItemsWithBlock:(CDUnknownBlockType)arg1 error:(id *)arg2;
- (id)initWithArchivePath:(id)arg1;

@end

