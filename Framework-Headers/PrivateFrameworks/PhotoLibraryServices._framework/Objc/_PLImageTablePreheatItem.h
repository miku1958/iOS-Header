//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibraryServices/PLPreheatItem.h>

@class PLImageTablePreheater;

@interface _PLImageTablePreheatItem : PLPreheatItem
{
    PLImageTablePreheater *_preheater;
    unsigned long long _index;
}

- (void)dealloc;
- (id)initWithIndex:(unsigned long long)arg1 preheater:(id)arg2 format:(int)arg3 optimalSourcePixelSize:(struct CGSize)arg4;
- (void)startPreheatRequestWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
