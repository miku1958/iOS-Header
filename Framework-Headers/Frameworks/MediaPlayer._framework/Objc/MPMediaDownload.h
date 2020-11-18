//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface MPMediaDownload : NSObject
{
    long long _deviceLibraryID;
    long long _storeItemID;
    long long _downloadReason;
    double _downloadProgress;
    unsigned long long _downloadPausedReason;
    long long _libraryID;
    long long _storeSagaID;
}

@property (readonly, nonatomic) long long deviceLibraryID; // @synthesize deviceLibraryID=_deviceLibraryID;
@property (nonatomic) unsigned long long downloadPausedReason; // @synthesize downloadPausedReason=_downloadPausedReason;
@property (nonatomic) double downloadProgress; // @synthesize downloadProgress=_downloadProgress;
@property (nonatomic) long long downloadReason; // @synthesize downloadReason=_downloadReason;
@property long long libraryID; // @synthesize libraryID=_libraryID;
@property (readonly, nonatomic) long long storeItemID; // @synthesize storeItemID=_storeItemID;
@property long long storeSagaID; // @synthesize storeSagaID=_storeSagaID;

+ (unsigned long long)MPMediaDownloadPauseReasonForATAsset:(id)arg1;
+ (id)MPMediaDownloadsFromATAssets:(id)arg1;
+ (id)MPMediaDownloadsFromMPStoreDownloads:(id)arg1;
+ (long long)_downloadReasonFromStoreDownload:(id)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithMPStoreDownload:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end
