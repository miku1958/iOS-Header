//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosGraph/PGCurationTrait.h>

@class NSArray;

@interface PGCurationArrayTrait : PGCurationTrait
{
    NSArray *_items;
    NSArray *_negativeItems;
}

@property (readonly, nonatomic) NSArray *items; // @synthesize items=_items;
@property (readonly, nonatomic) NSArray *negativeItems; // @synthesize negativeItems=_negativeItems;

- (void).cxx_destruct;
- (id)debugDescription;
- (id)initWithItems:(id)arg1;
- (id)initWithItems:(id)arg1 negativeItems:(id)arg2;
- (BOOL)isActive;

@end

