//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/NSObject-Protocol.h>

@class PXBarAppearance;

@protocol PXBarAppearanceImplementationDelegate <NSObject>

@optional
- (void)barAppearance:(PXBarAppearance *)arg1 willUpdateBarAppearanceOnViewWillAppear:(BOOL)arg2;
- (BOOL)barAppearanceIsStatusBarVisible:(PXBarAppearance *)arg1;
@end

