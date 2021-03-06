//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/NSObject-Protocol.h>

@protocol _UIImageContentEffect, _UIImageContentLayoutSource;

@protocol _UIImageContentLayoutTarget <NSObject>

@property (readonly, nonatomic) BOOL _hasContentGravity;
@property (readonly, nonatomic) BOOL _layoutShouldFlipHorizontalOrientations;
@property (readonly, nonatomic) long long contentMode;
@property (readonly, nonatomic) double preferredContentScaleFactor;
@property (readonly, nonatomic) long long semanticContentAttribute;

- (id<_UIImageContentEffect>)_effectForRenderingSource:(id<_UIImageContentLayoutSource>)arg1;
@end

