//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/PUViewModelChange.h>

__attribute__((visibility("hidden")))
@interface PUAssetSharedViewModelChange : PUViewModelChange
{
    BOOL _loadingStatusChanged;
}

@property (nonatomic) BOOL loadingStatusChanged; // @synthesize loadingStatusChanged=_loadingStatusChanged;

- (void)_setLoadingStatusChanged:(BOOL)arg1;
- (BOOL)hasChanges;

@end
