//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CKDAssetDirectoryContext : NSObject
{
    NSString *_mmcsWorkingDirectory;
    NSString *_assetDbPath;
    NSString *_fileStagingPath;
    NSString *_fileDownloadPath;
}

@property (strong, nonatomic) NSString *assetDbPath; // @synthesize assetDbPath=_assetDbPath;
@property (strong, nonatomic) NSString *fileDownloadPath; // @synthesize fileDownloadPath=_fileDownloadPath;
@property (strong, nonatomic) NSString *fileStagingPath; // @synthesize fileStagingPath=_fileStagingPath;
@property (strong, nonatomic) NSString *mmcsWorkingDirectory; // @synthesize mmcsWorkingDirectory=_mmcsWorkingDirectory;

- (void).cxx_destruct;

@end
