//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapKit/NSObject-Protocol.h>

@class UIImage;

@protocol MKUserTrackingButtonTarget <NSObject>
+ (Class)_activityIndicatorClass;
- (long long)_activityIndicatorStyle;
- (UIImage *)_imageForState:(long long)arg1 controlState:(unsigned long long)arg2;
- (BOOL)_isHighlightedForState:(long long)arg1;
- (void)_repositionViews;
- (void)_setInternallyEnabled:(BOOL)arg1;
- (void)_updateForState:(long long)arg1;
@end

