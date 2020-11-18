//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSURL;

@interface OSLogEventStore : NSObject
{
    NSURL *_archiveURL;
    NSArray *_relativeFilePaths;
    CDUnknownBlockType _progressHandler;
    CDUnknownBlockType _upgradeHandler;
}

@property (strong, nonatomic) NSURL *_archiveURL; // @synthesize _archiveURL;
@property (copy, nonatomic) CDUnknownBlockType _progressHandler; // @synthesize _progressHandler;
@property (strong, nonatomic) NSArray *_relativeFilePaths; // @synthesize _relativeFilePaths;
@property (copy, nonatomic) CDUnknownBlockType _upgradeHandler; // @synthesize _upgradeHandler;

+ (id)localStore;
+ (id)storeWithArchiveURL:(id)arg1;
+ (id)storeWithArchiveURL:(id)arg1 relativePaths:(id)arg2;
+ (id)storeWithFileURL:(id)arg1;
- (void).cxx_destruct;
- (id)initWithArchiveURL:(id)arg1;
- (id)initWithArchiveURL:(id)arg1 relativePaths:(id)arg2;
- (void)prepareWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)setProgressHandler:(CDUnknownBlockType)arg1;
- (void)setUpgradeConfirmationHandler:(CDUnknownBlockType)arg1;

@end
