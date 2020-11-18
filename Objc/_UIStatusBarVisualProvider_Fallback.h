//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UIStatusBarVisualProvider-Protocol.h>

@class NSArray, NSString, _UIStatusBar;

__attribute__((visibility("hidden")))
@interface _UIStatusBarVisualProvider_Fallback : NSObject <_UIStatusBarVisualProvider>
{
    _UIStatusBar *_statusBar;
    NSArray *_placements;
}

@property (readonly, nonatomic) BOOL canFixupDisplayItemAttributes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSArray *placements; // @synthesize placements=_placements;
@property (weak, nonatomic) _UIStatusBar *statusBar; // @synthesize statusBar=_statusBar;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsIndirectPointerTouchActions;

+ (struct CGSize)intrinsicContentSizeForOrientation:(long long)arg1;
- (void).cxx_destruct;
- (id)orderedDisplayItemPlacementsInRegionWithIdentifier:(id)arg1;
- (id)setupInContainerView:(id)arg1;
- (id)styleAttributesForStyle:(long long)arg1;

@end

