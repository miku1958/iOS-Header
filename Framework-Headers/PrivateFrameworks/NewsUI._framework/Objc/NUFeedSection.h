//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface NUFeedSection : NSObject
{
    NSMutableArray *_items;
}

@property (readonly, nonatomic) NSMutableArray *items; // @synthesize items=_items;
@property (readonly, nonatomic) unsigned long long numberOfItems;

- (void).cxx_destruct;
- (id)init;
- (id)itemAtIndex:(unsigned long long)arg1;

@end
