//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOMapItemStorage;
@protocol GEOMapItem, NSObject;

__attribute__((visibility("hidden")))
@interface _GEOMapItemStorageNotificationTrampoline : NSObject
{
    id<GEOMapItem> _mapItem;
    GEOMapItemStorage *_storage;
    id<NSObject> _notificationToken;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithMapItem:(id)arg1 mapItemStorage:(id)arg2;

@end
