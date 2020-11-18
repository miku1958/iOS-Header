//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, NSOperationQueue;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _UIDocumentPickerContainerModel : NSObject
{
    NSObject<OS_dispatch_queue> *_underlyingQueue;
    int _sortOrder;
    NSMutableArray *_updateHandlers;
    NSOperationQueue *_thumbnailQueue;
}

@property (readonly, nonatomic) BOOL afterInitialUpdate;
@property (readonly, nonatomic) NSArray *modelObjects;
@property (readonly, copy, nonatomic) NSArray *pickableTypes;
@property (readonly, nonatomic) unsigned long long pickerMode;
@property (nonatomic) int sortOrder; // @synthesize sortOrder=_sortOrder;
@property (strong, nonatomic) NSOperationQueue *thumbnailQueue; // @synthesize thumbnailQueue=_thumbnailQueue;
@property (strong, nonatomic) NSMutableArray *updateHandlers; // @synthesize updateHandlers=_updateHandlers;

- (void).cxx_destruct;
- (void)dealloc;
- (id)displayTitle;
- (id)init;
- (void)refreshItem:(id)arg1 thumbnailOnly:(BOOL)arg2;
- (void)startMonitoringChanges;
- (void)stopMonitoringChanges;
- (void)updateSortDescriptors;

@end

