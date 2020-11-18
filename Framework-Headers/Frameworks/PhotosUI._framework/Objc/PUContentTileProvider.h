//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PUMediaProvider, UIWindow;

@interface PUContentTileProvider : NSObject
{
    PUMediaProvider *_mediaProvider;
    UIWindow *_window;
}

@property (readonly, nonatomic) PUMediaProvider *mediaProvider; // @synthesize mediaProvider=_mediaProvider;
@property (strong, nonatomic) UIWindow *window; // @synthesize window=_window;

- (void).cxx_destruct;
- (id)init;
- (id)initWithMediaProvider:(id)arg1;
- (void)registerTileControllerClassesWithTilingView:(id)arg1;
- (id)tileControllerForAsset:(id)arg1 viewModel:(id)arg2 tilingView:(id)arg3;

@end
