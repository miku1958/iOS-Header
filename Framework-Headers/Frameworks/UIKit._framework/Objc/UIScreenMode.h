//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FBSDisplayMode;

@interface UIScreenMode : NSObject
{
    FBSDisplayMode *_mode;
    BOOL _mainScreen;
}

@property (getter=_isMainScreen, setter=_setMainScreen:) BOOL _mainScreen; // @synthesize _mainScreen;
@property (readonly, nonatomic) double pixelAspectRatio;
@property (readonly, nonatomic) struct CGSize size;

+ (id)_screenModeForDisplayMode:(id)arg1 mainScreen:(BOOL)arg2;
- (void).cxx_destruct;
- (id)_displayMode;
- (struct CGSize)_sizeWithLevel:(unsigned long long)arg1;
- (id)description;
- (id)initWithDisplayMode:(id)arg1 mainScreen:(BOOL)arg2;

@end

