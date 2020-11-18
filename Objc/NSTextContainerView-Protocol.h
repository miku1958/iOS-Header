//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/NSObject-Protocol.h>
#import <UIKitCore/NSTextLayoutOrientationProvider-Protocol.h>

@class NSDictionary;

@protocol NSTextContainerView <NSObject, NSTextLayoutOrientationProvider>

@optional
- (NSDictionary *)linkTextAttributes;
- (void)setNeedsDisplayInRect:(struct CGRect)arg1 avoidAdditionalLayout:(BOOL)arg2;
- (struct CGRect)textContainerFrameForBounds:(struct CGRect)arg1;
- (void)updateInsertionPointStateAndRestartTimer:(BOOL)arg1;
@end

