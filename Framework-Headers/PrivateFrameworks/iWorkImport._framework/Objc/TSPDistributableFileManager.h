//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSString, TSUPathSet, TSUTemporaryDirectory;

__attribute__((visibility("hidden")))
@interface TSPDistributableFileManager : NSObject
{
    NSString *_directoryPath;
    BOOL _shouldCreate;
    TSUPathSet *_claimedPaths;
    NSMutableSet *_newIdentifiers;
    NSMutableSet *_modifiedIdentifiers;
    NSMutableSet *_deletedIdentifiers;
    TSUTemporaryDirectory *_modifiedFilesDirectory;
    BOOL _isCullingDisabled;
}

- (void).cxx_destruct;
- (id)_claimedPaths;
- (id)_filePathForIdentifier:(id)arg1;
- (id)_filePathForModifiedIdentifier:(id)arg1;
- (id)_modifiedFilesDirectoryPath;
- (void)_writeDataFromInputStream:(id)arg1 length:(long long)arg2 toPath:(id)arg3;
- (id)addDataFromInputStream:(id)arg1 length:(long long)arg2 filenameHint:(id)arg3;
- (id)addDataRepresentation:(id)arg1 filenameHint:(id)arg2;
- (BOOL)commitWithError:(id *)arg1;
- (void)disableFileCulling;
- (id)initWithPath:(id)arg1 shouldCreate:(BOOL)arg2;
- (BOOL)prepareForSaveToPath:(id)arg1 error:(id *)arg2;
- (BOOL)rehomeOntoPath:(id)arg1;
- (void)removeIdentifier:(id)arg1;
- (id)representationForIdentifier:(id)arg1;
- (void)setDataFromInputStream:(id)arg1 length:(long long)arg2 forIdentifier:(id)arg3;
- (void)setDataRepresentation:(id)arg1 forIdentifier:(id)arg2;

@end

