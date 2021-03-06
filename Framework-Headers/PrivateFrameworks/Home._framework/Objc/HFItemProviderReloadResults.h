//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Home/NSCopying-Protocol.h>

@class NSSet;

@interface HFItemProviderReloadResults : NSObject <NSCopying>
{
    NSSet *_addedItems;
    NSSet *_removedItems;
    NSSet *_existingItems;
}

@property (strong, nonatomic) NSSet *addedItems; // @synthesize addedItems=_addedItems;
@property (readonly, nonatomic) NSSet *allItems;
@property (strong, nonatomic) NSSet *existingItems; // @synthesize existingItems=_existingItems;
@property (strong, nonatomic) NSSet *removedItems; // @synthesize removedItems=_removedItems;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)init;
- (id)initWithAddedItems:(id)arg1 removedItems:(id)arg2 existingItems:(id)arg3;
- (id)resultsByMergingWithResults:(id)arg1;

@end

