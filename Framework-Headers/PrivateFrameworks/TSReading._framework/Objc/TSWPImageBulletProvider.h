//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;

@interface TSWPImageBulletProvider : NSObject
{
    NSMutableArray *_images;
    NSMutableArray *_filenames;
}

@property (readonly, nonatomic) NSArray *predefinedImages;

+ (id)sharedInstance;
- (id)dataForDefaultImageBulletWithContext:(id)arg1;
- (id)dataForImageBullet:(id)arg1 withContext:(id)arg2;
- (id)p_pathToPredefinedImages;
- (id)p_predefinedImageNames;

@end

