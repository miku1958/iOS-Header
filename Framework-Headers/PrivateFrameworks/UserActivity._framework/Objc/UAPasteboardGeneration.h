//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSSet;

@interface UAPasteboardGeneration : NSObject
{
    unsigned long long _generation;
    NSSet *_allTypes;
    NSArray *_items;
}

@property (copy, nonatomic) NSSet *allTypes; // @synthesize allTypes=_allTypes;
@property (readonly, nonatomic) unsigned long long generation; // @synthesize generation=_generation;
@property (copy, nonatomic) NSArray *items; // @synthesize items=_items;

- (void).cxx_destruct;
- (BOOL)addItem:(id)arg1;
- (BOOL)addType:(id)arg1 toItemAtIndex:(unsigned long long)arg2;
- (id)initWithGeneration:(unsigned long long)arg1;

@end

