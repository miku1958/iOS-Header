//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface OKMediaCluster : NSObject
{
    NSString *_title;
    NSMutableArray *_items;
    BOOL _isUnknown;
}

@property (nonatomic) BOOL isUnknown; // @synthesize isUnknown=_isUnknown;
@property (readonly, strong, nonatomic) NSMutableArray *items; // @synthesize items=_items;
@property (copy, nonatomic) NSString *title; // @synthesize title=_title;

- (void)dealloc;
- (id)init;
- (id)uniqueURLs;

@end

