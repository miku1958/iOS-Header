//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class RPPictureInPictureWindow;

@interface RPPictureInPictureController : NSObject
{
    RPPictureInPictureWindow *_pictureInPictureWindow;
}

@property (strong, nonatomic) RPPictureInPictureWindow *pictureInPictureWindow; // @synthesize pictureInPictureWindow=_pictureInPictureWindow;

+ (id)sharedController;
- (void).cxx_destruct;
- (void)hidePictureInPictureWindow;
- (void)showPictureInPictureWindowWithContentView:(id)arg1;

@end
