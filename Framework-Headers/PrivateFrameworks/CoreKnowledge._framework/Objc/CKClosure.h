//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CKEntity, CKKnowledgeStore, MISSING_TYPE, NSString;

@interface CKClosure : NSObject
{
    MISSING_TYPE *store;
    MISSING_TYPE *entity;
}

@property (nonatomic, readonly) CKEntity *entity; // @synthesize entity;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) CKKnowledgeStore *store; // @synthesize store;

- (CDUnknownBlockType).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (void)execute;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end

