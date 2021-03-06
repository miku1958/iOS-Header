//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ChatKit/NSCopying-Protocol.h>

@class UIBlurEffect, UIColor, UIImage;

__attribute__((visibility("hidden")))
@interface CKConversationListAccessoryViewConfiguration : NSObject <NSCopying>
{
    UIImage *_image;
    UIColor *_backgroundColor;
    UIColor *_tintColor;
    UIBlurEffect *_blurEffect;
    long long _vibrancyStyle;
}

@property (strong, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property (strong, nonatomic) UIBlurEffect *blurEffect; // @synthesize blurEffect=_blurEffect;
@property (strong, nonatomic) UIImage *image; // @synthesize image=_image;
@property (strong, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
@property (nonatomic) long long vibrancyStyle; // @synthesize vibrancyStyle=_vibrancyStyle;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

