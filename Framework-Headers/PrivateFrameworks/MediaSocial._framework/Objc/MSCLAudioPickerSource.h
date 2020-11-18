//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaSocial/NSCopying-Protocol.h>

@class NSString, UIImage, UIViewController;
@protocol MSCLAudioPickerSourceViewController;

@interface MSCLAudioPickerSource : NSObject <NSCopying>
{
    UIImage *_icon;
    NSString *_title;
    UIViewController<MSCLAudioPickerSourceViewController> *_viewController;
}

@property (copy, nonatomic) UIImage *icon; // @synthesize icon=_icon;
@property (copy, nonatomic) NSString *title; // @synthesize title=_title;
@property (strong, nonatomic) UIViewController<MSCLAudioPickerSourceViewController> *viewController; // @synthesize viewController=_viewController;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

