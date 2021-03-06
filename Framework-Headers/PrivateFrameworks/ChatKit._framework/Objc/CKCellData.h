//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIImage;

@interface CKCellData : NSObject
{
    UIImage *_image;
    NSString *_title;
    NSString *_subtitle;
    NSString *_identifer;
}

@property (strong, nonatomic) NSString *identifer; // @synthesize identifer=_identifer;
@property (strong, nonatomic) UIImage *image; // @synthesize image=_image;
@property (strong, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property (strong, nonatomic) NSString *title; // @synthesize title=_title;

- (void).cxx_destruct;
- (id)initWithImage:(id)arg1 withTitle:(id)arg2;
- (id)initWithImage:(id)arg1 withTitle:(id)arg2 withSubtitle:(id)arg3;

@end

