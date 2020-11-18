//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet, NSPointerArray;

@interface _SFDownloadIconCache : NSObject
{
    NSPointerArray *_observers;
    NSMutableDictionary *_thumbnailCache;
    NSMutableDictionary *_utiCache;
    NSMutableSet *_activeRequestIdentifiers;
}

- (void).cxx_destruct;
- (void)_didGenerateThumbnail:(id)arg1 forSource:(id)arg2;
- (void)_generateThumbnailForURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)_genericIconForUTI:(id)arg1;
- (id)_lookupGenericIconForType:(id)arg1;
- (void)_startThumbnailRequestForSource:(id)arg1 reportGenericIcons:(BOOL)arg2;
- (void)addObserver:(id)arg1;
- (id)iconForSource:(id)arg1;
- (id)init;
- (void)regenerateIconForSource:(id)arg1;
- (void)removeObserver:(id)arg1;

@end
