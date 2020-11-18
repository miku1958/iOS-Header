//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface QLThumbnailUTICache : NSObject
{
    NSMutableDictionary *_itemTypeCache;
    NSObject<OS_dispatch_queue> *_synchronizationQueue;
}

+ (id)_iWorkUTIs;
+ (id)sharedCache;
- (void).cxx_destruct;
- (BOOL)_contentType:(id)arg1 isEqualToContentTypeInArray:(id)arg2;
- (BOOL)_contentTypeIsIWorkType:(id)arg1;
- (unsigned long long)_itemTypeByUTIResolutionForContentType:(id)arg1;
- (id)init;
- (unsigned long long)itemTypeForItem:(id)arg1;
- (BOOL)requestedBadgeType:(unsigned long long)arg1 isValidForContentType:(id)arg2;

@end

