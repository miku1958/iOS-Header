//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ITMLKit/NSCopying-Protocol.h>

@class NSArray, NSDictionary;

__attribute__((visibility("hidden")))
@interface IKAppDataSet : NSObject <NSCopying>
{
    NSArray *_itemIDs;
    NSArray *_items;
    NSDictionary *_usedPrototypesByIdentifier;
    NSDictionary *_indexTitles;
}

@property (readonly, copy, nonatomic) NSDictionary *indexTitles; // @synthesize indexTitles=_indexTitles;
@property (readonly, copy, nonatomic) NSArray *itemIDs; // @synthesize itemIDs=_itemIDs;
@property (readonly, copy, nonatomic) NSArray *items; // @synthesize items=_items;
@property (readonly, copy, nonatomic) NSDictionary *usedPrototypesByIdentifier; // @synthesize usedPrototypesByIdentifier=_usedPrototypesByIdentifier;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithItems:(id)arg1 usedPrototypesByIdentifier:(id)arg2 indexTitles:(id)arg3;

@end

