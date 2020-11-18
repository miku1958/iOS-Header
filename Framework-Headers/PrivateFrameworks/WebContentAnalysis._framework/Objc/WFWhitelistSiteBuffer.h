//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface WFWhitelistSiteBuffer : NSObject
{
    NSMutableDictionary *_siteTree;
    unsigned long long _maxSize;
}

@property unsigned long long maxSize; // @synthesize maxSize=_maxSize;
@property (strong) NSMutableDictionary *siteTree; // @synthesize siteTree=_siteTree;

- (void)addURLString:(id)arg1;
- (BOOL)containsURLString:(id)arg1;
- (void)dealloc;
- (id)init;
- (BOOL)treeContainsURLString:(id)arg1;

@end

