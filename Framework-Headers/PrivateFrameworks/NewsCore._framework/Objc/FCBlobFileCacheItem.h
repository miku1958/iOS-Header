//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSURL;

@interface FCBlobFileCacheItem : NSObject
{
    NSURL *_url;
    NSDate *_lastModified;
}

@property (copy, nonatomic) NSDate *lastModified; // @synthesize lastModified=_lastModified;
@property (copy, nonatomic) NSURL *url; // @synthesize url=_url;

- (void).cxx_destruct;

@end

