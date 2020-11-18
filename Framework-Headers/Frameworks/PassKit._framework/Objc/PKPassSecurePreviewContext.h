//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface PKPassSecurePreviewContext : NSObject
{
    struct CGImage *_image;
    NSString *_backgroundColor;
    NSString *_footerColor;
    NSString *_primaryText;
    NSString *_primaryColor;
    NSString *_secondaryText;
    NSString *_secondaryColor;
    NSString *_tertiaryText;
    NSString *_tertiaryColor;
}

@property (readonly, nonatomic) NSString *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property (readonly, nonatomic) NSString *footerColor; // @synthesize footerColor=_footerColor;
@property (readonly, nonatomic) struct CGImage *image; // @synthesize image=_image;
@property (readonly, nonatomic) NSString *primaryColor; // @synthesize primaryColor=_primaryColor;
@property (readonly, nonatomic) NSString *primaryText; // @synthesize primaryText=_primaryText;
@property (readonly, nonatomic) NSString *secondaryColor; // @synthesize secondaryColor=_secondaryColor;
@property (readonly, nonatomic) NSString *secondaryText; // @synthesize secondaryText=_secondaryText;
@property (readonly, nonatomic) NSString *tertiaryColor; // @synthesize tertiaryColor=_tertiaryColor;
@property (readonly, nonatomic) NSString *tertiaryText; // @synthesize tertiaryText=_tertiaryText;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

@end
