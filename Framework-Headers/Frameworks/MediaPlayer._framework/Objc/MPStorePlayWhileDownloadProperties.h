//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, NSURL;

@interface MPStorePlayWhileDownloadProperties : NSObject
{
    unsigned long long _downloadToken;
    NSString *_localFilePath;
    NSArray *_sinfs;
    NSURL *_sourceURL;
}

@property (nonatomic) unsigned long long downloadToken; // @synthesize downloadToken=_downloadToken;
@property (copy, nonatomic) NSString *localFilePath; // @synthesize localFilePath=_localFilePath;
@property (copy, nonatomic) NSArray *sinfs; // @synthesize sinfs=_sinfs;
@property (copy, nonatomic) NSURL *sourceURL; // @synthesize sourceURL=_sourceURL;

- (void).cxx_destruct;

@end

