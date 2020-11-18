//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface RTArchiver : NSObject
{
    struct archive *_archive;
    BOOL _valid;
}

@property (nonatomic) BOOL valid; // @synthesize valid=_valid;

+ (BOOL)extractArchiveAtURL:(id)arg1 error:(id *)arg2;
- (void)addDirectoryToArchive:(id)arg1;
- (void)addFileToArchive:(id)arg1;
- (void)closeArchive;
- (void)dealloc;
- (id)init;
- (id)initWithOutputURL:(id)arg1 compress:(BOOL)arg2;

@end
