//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibraryServices/PLPreheatItem.h>

@class PLImageTable;

@interface _PLDataPreheatItem : PLPreheatItem
{
    unsigned long long _thumbIndex;
    PLImageTable *_imageTable;
}

- (void)dealloc;
- (id)initWithThumbIndex:(unsigned long long)arg1 imageTable:(id)arg2 format:(int)arg3 optimalSourcePixelSize:(struct CGSize)arg4;
- (void)startPreheatRequestWithCompletionHandler:(CDUnknownBlockType)arg1;

@end

