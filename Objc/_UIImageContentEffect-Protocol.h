//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/NSObject-Protocol.h>

@class _UIImageContentRendition;
@protocol _UIImageContentLayoutSource;

@protocol _UIImageContentEffect <NSObject>
- (_UIImageContentRendition *)_renditionForSource:(id<_UIImageContentLayoutSource>)arg1 size:(struct CGSize)arg2 withCGImageProvider:(struct CGImage * (^)(void))arg3 lazy:(BOOL)arg4;
@end

