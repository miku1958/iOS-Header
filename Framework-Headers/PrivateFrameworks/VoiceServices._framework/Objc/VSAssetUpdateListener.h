//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PCPersistentTimer;

@interface VSAssetUpdateListener : NSObject
{
    BOOL _isListening;
    PCPersistentTimer *_assetCleanupTimer;
}

+ (id)sharedListener;
- (id)_initShared;
- (BOOL)assetDownloadStatus:(id)arg1 progress:(float *)arg2 size:(long long *)arg3;
- (int)assetStatusForLanguage:(id)arg1;
- (void)downloadAssetForLanguage:(id)arg1;
- (id)downloadingAssetLanguage;
- (id)init;
- (void)removeAssetForLanguage:(id)arg1;
- (void)startListening;
- (void)stopListening;

@end

