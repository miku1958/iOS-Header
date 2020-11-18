//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AMSDoubleLinkedListNode, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface AMSDoubleLinkedList : NSObject
{
    unsigned long long _count;
    AMSDoubleLinkedListNode *_head;
    AMSDoubleLinkedListNode *_tail;
    NSString *_listIdentifier;
}

@property (readonly, nonatomic) NSArray *allNodes;
@property (readonly, nonatomic) unsigned long long count; // @synthesize count=_count;
@property (strong, nonatomic) AMSDoubleLinkedListNode *head; // @synthesize head=_head;
@property (strong, nonatomic) NSString *listIdentifier; // @synthesize listIdentifier=_listIdentifier;
@property (strong, nonatomic) AMSDoubleLinkedListNode *tail; // @synthesize tail=_tail;

- (void).cxx_destruct;
- (void)appendNode:(id)arg1;
- (id)appendObject:(id)arg1;
- (id)description;
- (id)init;
- (void)insertNode:(id)arg1;
- (id)insertObject:(id)arg1;
- (void)removeAllNodes;
- (void)removeNode:(id)arg1;

@end

