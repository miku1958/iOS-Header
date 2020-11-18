//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL;
@protocol OS_dispatch_queue;

@interface TPFileStorageManager : NSObject
{
    BOOL _hasClearedLegacyStorage;
    NSURL *_urlForFileSystem;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (nonatomic) BOOL hasClearedLegacyStorage; // @synthesize hasClearedLegacyStorage=_hasClearedLegacyStorage;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property (readonly, nonatomic) NSURL *urlForFileSystem; // @synthesize urlForFileSystem=_urlForFileSystem;

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)clearLegacyStorageIfNecessary;
- (void)dealloc;
- (void)deleteStorageAtURLs:(id)arg1;
- (id)imageWithName:(id)arg1;
- (id)init;
- (void)localeChanged;
- (void)saveImage:(id)arg1 withName:(id)arg2;
- (id)urlsForLegacyFileSystem;

@end

