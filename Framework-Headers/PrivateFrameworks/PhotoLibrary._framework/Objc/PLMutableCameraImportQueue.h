//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface PLMutableCameraImportQueue : NSObject
{
    NSMutableArray *_items;
}

- (void).cxx_destruct;
- (id)currentItem;
- (void)dequeueImportItem;
- (id)description;
- (void)enqueueImportItem:(id)arg1;
- (id)init;

@end
