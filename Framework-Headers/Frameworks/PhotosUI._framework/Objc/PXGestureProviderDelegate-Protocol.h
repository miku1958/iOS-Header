//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/NSObject-Protocol.h>

@class PXGestureProvider;

@protocol PXGestureProviderDelegate <NSObject>
- (void)gestureProvider:(PXGestureProvider *)arg1 didTriggerEvent:(long long)arg2;
- (struct CGRect)gestureProviderCurrentAssetRect:(PXGestureProvider *)arg1;
@end

