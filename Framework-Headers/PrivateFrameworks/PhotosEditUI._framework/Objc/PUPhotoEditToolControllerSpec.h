//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/PUViewControllerSpec.h>

#import <PhotosEditUI/PUPhotoEditLayoutDynamicAdaptable-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface PUPhotoEditToolControllerSpec : PUViewControllerSpec <PUPhotoEditLayoutDynamicAdaptable>
{
    long long _layoutOrientation;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) long long layoutOrientation;
@property (readonly, nonatomic) double standardBottomBarHeight;
@property (readonly, nonatomic) double standardSideBarWidth;
@property (readonly) Class superclass;

- (void)setLayoutOrientation:(long long)arg1;
- (void)setLayoutOrientation:(long long)arg1 withTransitionCoordinator:(id)arg2;

@end

