//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <PhotoLibraryServices/PLPreheatItemSource-Protocol.h>

@class NSString, PLThumbFileManager;

@interface PLJPEGThumbnailPreheater : NSObject <PLPreheatItemSource>
{
    PLThumbFileManager *_manager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)dealloc;
- (id)initWithThumbFileManager:(id)arg1;
- (id)originalPreheatItemForAsset:(id)arg1 optimalSourcePixelSize:(struct CGSize)arg2 options:(unsigned int)arg3;
- (id)preheatItemForAsset:(id)arg1 format:(int)arg2 optimalSourcePixelSize:(struct CGSize)arg3 options:(unsigned int)arg4;

@end

