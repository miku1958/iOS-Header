//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIImage;

@interface ACUIAppDescription : NSObject
{
    NSString *_name;
    NSString *_publisher;
    NSString *_bundleID;
    NSString *_persistentID;
    UIImage *_icon;
}

@property (copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property (strong, nonatomic) UIImage *icon; // @synthesize icon=_icon;
@property (copy, nonatomic) NSString *name; // @synthesize name=_name;
@property (copy, nonatomic) NSString *persistentID; // @synthesize persistentID=_persistentID;
@property (copy, nonatomic) NSString *publisher; // @synthesize publisher=_publisher;

- (void).cxx_destruct;

@end

