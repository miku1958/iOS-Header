//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class _UIStatusBarDataEntry;

__attribute__((visibility("hidden")))
@interface _UIStatusBarDataAggregatorUpdate : NSObject
{
    BOOL _animated;
    _UIStatusBarDataEntry *_entry;
}

@property (nonatomic) BOOL animated; // @synthesize animated=_animated;
@property (strong, nonatomic) _UIStatusBarDataEntry *entry; // @synthesize entry=_entry;

+ (id)updateWithEntry:(id)arg1;
- (void).cxx_destruct;

@end

