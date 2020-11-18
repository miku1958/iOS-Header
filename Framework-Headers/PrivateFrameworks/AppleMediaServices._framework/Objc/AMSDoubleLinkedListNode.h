//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface AMSDoubleLinkedListNode : NSObject
{
    AMSDoubleLinkedListNode *_previous;
    id _object;
    AMSDoubleLinkedListNode *_next;
    NSString *_listIdentifier;
}

@property (strong, nonatomic) NSString *listIdentifier; // @synthesize listIdentifier=_listIdentifier;
@property (strong, nonatomic) AMSDoubleLinkedListNode *next; // @synthesize next=_next;
@property (strong, nonatomic) id object; // @synthesize object=_object;
@property (strong, nonatomic) AMSDoubleLinkedListNode *previous; // @synthesize previous=_previous;

- (void).cxx_destruct;
- (id)init;
- (id)initWithObject:(id)arg1;

@end

