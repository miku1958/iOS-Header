//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface CRKFTSEnumeration : NSObject
{
    NSString *mDirectoryPath;
    int mOptions;
}

+ (int)defaultOptions;
- (void).cxx_destruct;
- (void)closeFTS:(CDStruct_2263269c *)arg1;
- (id)entriesWithError:(id *)arg1;
- (id)init;
- (id)initWithDirectoryPath:(id)arg1;
- (id)initWithDirectoryPath:(id)arg1 options:(int)arg2;
- (CDStruct_2263269c *)makeFTSWithError:(id *)arg1;
- (id)readAllEntriesFromFTS:(CDStruct_2263269c *)arg1 error:(id *)arg2;
- (id)readNextEntryFromFTS:(CDStruct_2263269c *)arg1 error:(id *)arg2;
- (BOOL)shouldSkipEntry:(struct _ftsent *)arg1;

@end

