//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class UIKBCacheToken;

__attribute__((visibility("hidden")))
@interface UIKeyboardTransitionSlice : NSObject
{
    struct CGRect _startRect;
    struct CGRect _endRect;
    UIKBCacheToken *_startToken;
    UIKBCacheToken *_endToken;
    BOOL _shiftContents;
    BOOL _delayCrossfade;
    int _normalization;
}

@property BOOL delayCrossfade; // @synthesize delayCrossfade=_delayCrossfade;
@property struct CGRect endRect; // @synthesize endRect=_endRect;
@property (strong) UIKBCacheToken *endToken; // @synthesize endToken=_endToken;
@property (readonly) BOOL hasGeometry;
@property int normalization; // @synthesize normalization=_normalization;
@property struct CGRect startRect; // @synthesize startRect=_startRect;
@property (strong) UIKBCacheToken *startToken; // @synthesize startToken=_startToken;

+ (id)sliceWithStart:(struct CGRect)arg1 end:(struct CGRect)arg2;
- (void)addStartRect:(struct CGRect)arg1 end:(struct CGRect)arg2;
- (void)dealloc;
- (id)description;
- (id)init;

@end

