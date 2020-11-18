//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface _UILibArchiveStreamingExtractor : NSObject
{
    NSString *_archivePath;
    NSArray *_extractedContentAbsolutePaths;
}

@property (readonly, nonatomic) NSString *archivePath; // @synthesize archivePath=_archivePath;
@property (readonly, nonatomic) NSArray *extractedContentAbsolutePaths; // @synthesize extractedContentAbsolutePaths=_extractedContentAbsolutePaths;

+ (id)archiveSubpathByStandardizingArchiveSubpath:(id)arg1;
+ (BOOL)shouldExtractPathInArchive:(id)arg1 forExtractionRootedAtStandardizedSubpathInArchive:(id)arg2;
- (void).cxx_destruct;
- (BOOL)extractArchivePath:(id)arg1 toDirectory:(id)arg2 error:(id *)arg3;
- (id)initForExtractingArchivePath:(id)arg1;

@end
