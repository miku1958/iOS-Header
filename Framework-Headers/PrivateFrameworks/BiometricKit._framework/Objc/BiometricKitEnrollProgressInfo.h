//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, UIImage;

@interface BiometricKitEnrollProgressInfo : NSObject
{
    int _message;
    long long _progress;
    long long _currentPrimaryComponentID;
    UIImage *_captureImage;
    UIImage *_renderedImage;
    NSDictionary *_messageDetails;
}

@property (strong, nonatomic) UIImage *captureImage; // @synthesize captureImage=_captureImage;
@property (nonatomic) long long currentPrimaryComponentID; // @synthesize currentPrimaryComponentID=_currentPrimaryComponentID;
@property (nonatomic) int message; // @synthesize message=_message;
@property (strong, nonatomic) NSDictionary *messageDetails; // @synthesize messageDetails=_messageDetails;
@property (nonatomic) long long progress; // @synthesize progress=_progress;
@property (strong, nonatomic) UIImage *renderedImage; // @synthesize renderedImage=_renderedImage;

- (void)dealloc;
- (id)init;

@end

