//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIImage;

@interface _SSScreenCaptureResults : NSObject
{
    UIImage *_image;
    NSString *_failureReasonIfImageIsNil;
}

@property (copy, nonatomic) NSString *failureReasonIfImageIsNil; // @synthesize failureReasonIfImageIsNil=_failureReasonIfImageIsNil;
@property (strong, nonatomic) UIImage *image; // @synthesize image=_image;

- (void).cxx_destruct;

@end
