//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIScreenBoundingPathUtilities.h>

@class _UIBoundingPathBitmap;

__attribute__((visibility("hidden")))
@interface _UIScreenBezierBoundingPathUtilities : _UIScreenBoundingPathUtilities
{
    long long _type;
    _UIBoundingPathBitmap *_bitmap;
}

+ (BOOL)isScreenSupported:(id)arg1;
- (void).cxx_destruct;
- (void)_loadBitmapForScreen:(id)arg1 type:(long long)arg2;
- (id)boundingPathForWindow:(id)arg1;
- (id)initWithScreen:(id)arg1;

@end

