//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface GEOMutableURLQueryItems : NSObject
{
    NSMutableArray *_items;
}

@property (readonly, nonatomic) NSMutableArray *items; // @synthesize items=_items;

- (void).cxx_destruct;
- (void)addItem:(id)arg1;
- (void)addItemWithName:(id)arg1 intValue:(int)arg2;
- (void)addItemWithName:(id)arg1 uint64Value:(unsigned long long)arg2;
- (void)addItemWithName:(id)arg1 uintValue:(unsigned int)arg2;
- (void)addItemWithName:(id)arg1 value:(id)arg2;
- (void)addItemsFromArray:(id)arg1;
- (id)init;
- (id)initWithItems:(id)arg1;

@end

