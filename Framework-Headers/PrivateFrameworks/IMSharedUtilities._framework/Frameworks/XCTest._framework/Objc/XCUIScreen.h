//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <XCTest/XCUIScreenshotProviding-Protocol.h>

@class NSString;

@interface XCUIScreen : NSObject <XCUIScreenshotProviding>
{
    BOOL _isMainScreen;
    int _displayID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) int displayID; // @synthesize displayID=_displayID;
@property (readonly) unsigned long long hash;
@property (readonly) BOOL isMainScreen; // @synthesize isMainScreen=_isMainScreen;
@property (readonly) Class superclass;

+ (id)mainScreen;
+ (id)screens;
- (id)_clippedScreenshotData:(id)arg1 quality:(long long)arg2 rect:(struct CGRect)arg3 scale:(double)arg4;
- (id)_imageFromData:(id)arg1;
- (id)_modernScreenshotDataForQuality:(long long)arg1 rect:(struct CGRect)arg2 error:(id *)arg3;
- (id)_screenshotDataForQuality:(long long)arg1 rect:(struct CGRect)arg2 error:(id *)arg3;
- (id)initWithDisplayID:(int)arg1 isMainScreen:(BOOL)arg2;
- (double)scale;
- (id)screenshot;
- (id)screenshotDataForQuality:(long long)arg1 rect:(struct CGRect)arg2;
- (id)screenshotDataForQuality:(long long)arg1 rect:(struct CGRect)arg2 error:(id *)arg3;

@end

