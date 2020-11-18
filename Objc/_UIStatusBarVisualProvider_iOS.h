//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/_UIStatusBarVisualProvider-Protocol.h>

@class NSString, _UIStatusBar, _UIStatusBarStyleAttributes;

__attribute__((visibility("hidden")))
@interface _UIStatusBarVisualProvider_iOS : NSObject <_UIStatusBarVisualProvider>
{
    _UIStatusBar *_statusBar;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (weak, nonatomic) _UIStatusBar *statusBar; // @synthesize statusBar=_statusBar;
@property (readonly, nonatomic) _UIStatusBarStyleAttributes *styleAttributes;
@property (readonly) Class superclass;

+ (struct CGSize)intrinsicContentSizeForOrientation:(long long)arg1;
- (void).cxx_destruct;
- (id)orderedDisplayItemPlacementsInRegionWithIdentifier:(id)arg1;
- (id)setupInContainerView:(id)arg1;

@end

