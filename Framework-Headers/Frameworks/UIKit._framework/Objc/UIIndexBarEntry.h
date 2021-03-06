//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSIndexPath, NSString, UIImage;

@interface UIIndexBarEntry : NSObject
{
    NSString *_title;
    NSString *_shortTitle;
    long long _type;
    UIImage *_image;
    NSIndexPath *_indexPath;
}

@property (readonly, nonatomic) NSString *effectiveShortTitle;
@property (strong, nonatomic) UIImage *image; // @synthesize image=_image;
@property (copy, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property (copy, nonatomic) NSString *shortTitle; // @synthesize shortTitle=_shortTitle;
@property (copy, nonatomic) NSString *title; // @synthesize title=_title;
@property (nonatomic) long long type; // @synthesize type=_type;

+ (id)_dotImageInView:(id)arg1;
+ (id)_externalDotImageInView:(id)arg1;
+ (id)entryForDotInView:(id)arg1;
+ (id)entryForNumbers;
+ (id)entryForSearch;
+ (id)entryWithTitle:(id)arg1;
+ (id)entryWithType:(long long)arg1;
- (void).cxx_destruct;
- (id)description;

@end

