//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SilexVideo/NSObject-Protocol.h>

@class UIView;
@protocol SVVideoControlVisibilityItem;

@protocol SVVideoControlItemFactory <NSObject>
- (id<SVVideoControlVisibilityItem>)createControlItemWithView:(UIView *)arg1 hideable:(BOOL)arg2;
@end

