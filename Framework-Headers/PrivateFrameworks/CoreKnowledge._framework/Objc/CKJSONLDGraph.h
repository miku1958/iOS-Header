//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSArray;

@interface CKJSONLDGraph : NSObject
{
    MISSING_TYPE *_entities;
    MISSING_TYPE *queue;
}

@property (nonatomic, readonly) NSArray *entities;

- (void).cxx_destruct;
- (id)init;
- (id)initWithEntities:(id)arg1;
- (void)linkedDataWithCompletionHandler:(CDUnknownBlockType)arg1;

@end

