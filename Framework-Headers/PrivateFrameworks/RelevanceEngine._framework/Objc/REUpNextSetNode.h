//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface REUpNextSetNode : NSObject
{
    id _item;
    REUpNextSetNode *_parent;
    NSMutableArray *_children;
    unsigned long long _rank;
}

@property (strong, nonatomic) NSMutableArray *children; // @synthesize children=_children;
@property (readonly, nonatomic) id item; // @synthesize item=_item;
@property (strong, nonatomic) REUpNextSetNode *parent; // @synthesize parent=_parent;
@property (nonatomic) unsigned long long rank; // @synthesize rank=_rank;

- (void).cxx_destruct;
- (id)initWithItem:(id)arg1;
- (void)join:(id)arg1;
- (void)remove;
- (id)rootNode;

@end

