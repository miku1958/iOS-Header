//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class IMDoubleLinkedList, NSMutableDictionary;

@interface IMOrderedMutableDictionary : NSObject
{
    NSMutableDictionary *_dictionary;
    IMDoubleLinkedList *_linkedList;
}

- (BOOL)containsKey:(id)arg1;
- (BOOL)containsOrderedObject:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)orderedObjectForKey:(id)arg1;
- (id)orderedObjects;
- (void)removeOrderedObjectForKey:(id)arg1;
- (void)setOrderedObject:(id)arg1 forKey:(id)arg2;

@end
