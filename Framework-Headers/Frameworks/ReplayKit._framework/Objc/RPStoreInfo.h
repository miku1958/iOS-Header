//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface RPStoreInfo : NSObject
{
    NSString *_bundleID;
    NSString *_appName;
    NSString *_author;
    NSURL *_itemURL;
    NSURL *_appArtworkURL;
}

@property (strong, nonatomic) NSURL *appArtworkURL; // @synthesize appArtworkURL=_appArtworkURL;
@property (strong, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property (strong, nonatomic) NSString *author; // @synthesize author=_author;
@property (strong, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property (strong, nonatomic) NSURL *itemURL; // @synthesize itemURL=_itemURL;

- (void).cxx_destruct;
- (id)dictionary;

@end
