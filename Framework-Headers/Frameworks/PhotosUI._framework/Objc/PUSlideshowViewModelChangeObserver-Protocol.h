//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/PUViewModelChangeObserver-Protocol.h>

@class PUSlideshowViewModel, PUSlideshowViewModelChange;

@protocol PUSlideshowViewModelChangeObserver <PUViewModelChangeObserver>

@optional
- (void)viewModel:(PUSlideshowViewModel *)arg1 didChange:(PUSlideshowViewModelChange *)arg2;
@end
