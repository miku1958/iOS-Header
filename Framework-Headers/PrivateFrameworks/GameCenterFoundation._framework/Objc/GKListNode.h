//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface GKListNode : NSObject
{
    id _value;
    GKListNode *_prevNode;
    GKListNode *_nextNode;
}

@property (nonatomic) GKListNode *nextNode; // @synthesize nextNode=_nextNode;
@property (nonatomic) GKListNode *prevNode; // @synthesize prevNode=_prevNode;
@property (strong, nonatomic) id value; // @synthesize value=_value;

- (void)dealloc;
- (id)description;
- (id)initWithValue:(id)arg1;

@end
