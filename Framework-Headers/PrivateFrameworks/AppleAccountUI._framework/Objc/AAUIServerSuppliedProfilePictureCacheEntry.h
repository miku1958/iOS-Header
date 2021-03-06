//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString, UIImage;

@interface AAUIServerSuppliedProfilePictureCacheEntry : NSObject
{
    NSDate *_expirationDate;
    BOOL _updating;
    UIImage *_picture;
    NSString *_serverCacheTag;
}

@property (readonly, nonatomic) BOOL expired;
@property (strong, nonatomic) UIImage *picture; // @synthesize picture=_picture;
@property (copy, nonatomic) NSString *serverCacheTag; // @synthesize serverCacheTag=_serverCacheTag;
@property (nonatomic) BOOL updating; // @synthesize updating=_updating;

- (void).cxx_destruct;
- (id)description;
- (void)expire;

@end

