//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <SearchUI/_UIMultilineTextContentSizing-Protocol.h>

@class NSString;

@interface UIView (NUIContainerViewHack) <_UIMultilineTextContentSizing>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (BOOL)isDebugBoundingBoxesEnabled;
+ (void)load;
- (void)_beginObservingSubviewVisibility:(id)arg1;
- (void)_endObservingSubviewVisibility:(id)arg1;
- (void)_notifySubviewVisibilityChanged:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
@end
