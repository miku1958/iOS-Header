//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMapTable;

@interface PXLayoutPageMap : NSObject
{
    NSMapTable *_pageMap;
    NSArray *_sources;
    struct CGRect _contentRect;
}

- (void).cxx_destruct;
- (void)_mapSources:(id)arg1;
- (id)_screenPageForPoint:(struct CGPoint)arg1;
- (id)description;
- (id)initWithSources:(id)arg1 contentRect:(struct CGRect)arg2;
- (id)sourcesFromRect:(struct CGRect)arg1;

@end

