//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/NSObject-Protocol.h>

@class PUViewModel, PUViewModelChange;

@protocol PUViewModelChangeObserver <NSObject>

@optional
- (void)viewModel:(PUViewModel *)arg1 didChange:(PUViewModelChange *)arg2;
@end

