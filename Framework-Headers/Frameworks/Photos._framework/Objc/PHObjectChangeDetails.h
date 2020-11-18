//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PHObject;

@interface PHObjectChangeDetails : NSObject
{
    PHObject *_objectBeforeChanges;
    PHObject *_objectAfterChanges;
    BOOL _assetContentChanged;
}

@property (readonly) BOOL assetContentChanged;
@property (readonly) PHObject *objectAfterChanges;
@property (readonly) PHObject *objectBeforeChanges;
@property (readonly) BOOL objectWasDeleted;

- (void).cxx_destruct;
- (void)_calculateDiffs;
- (id)description;
- (id)initWithPHObject:(id)arg1;

@end
