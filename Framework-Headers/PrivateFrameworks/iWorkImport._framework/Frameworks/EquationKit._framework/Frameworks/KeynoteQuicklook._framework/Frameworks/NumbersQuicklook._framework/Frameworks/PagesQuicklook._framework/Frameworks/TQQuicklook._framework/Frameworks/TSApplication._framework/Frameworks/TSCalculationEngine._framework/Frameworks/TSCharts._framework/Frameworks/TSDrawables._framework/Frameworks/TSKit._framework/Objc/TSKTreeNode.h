//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSPersistence/TSPObject.h>

@class NSMutableArray, NSString;

@interface TSKTreeNode : TSPObject
{
    NSString *mDisplayName;
    id mObject;
    NSMutableArray *mChildren;
}

@property (strong, nonatomic) NSMutableArray *children;
@property (strong, nonatomic) id dataObject;
@property (strong, nonatomic) NSString *name;

- (void).cxx_destruct;
- (void)addChildWithName:(id)arg1 object:(id)arg2;
- (void)addNode:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)addObject:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)childEnumerator;
- (id)description;
- (void)enumerateAllChildrenWithBlock:(CDUnknownBlockType)arg1;
- (BOOL)hasChildWithName:(id)arg1;
- (long long)indexOfNodeWithObject:(id)arg1;
- (id)initWithContext:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (id)nodeAtIndex:(unsigned long long)arg1;
- (id)nodeWithObject:(id)arg1;
- (id)objectAtIndex:(unsigned long long)arg1;
- (void)removeAllChildren;
- (void)removeChildAtIndex:(unsigned long long)arg1;
- (void)removeChildWithDataObject:(id)arg1;
- (void)removeChildWithName:(id)arg1;
- (void)saveToArchiver:(id)arg1;
- (id)shallowCopy;

@end
