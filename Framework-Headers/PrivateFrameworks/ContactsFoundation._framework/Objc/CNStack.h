//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface CNStack : NSObject
{
    NSMutableArray *_objects;
}

@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) id peek;

- (void).cxx_destruct;
- (id)init;
- (id)pop;
- (id)popAll;
- (void)popAllWithHandler:(CDUnknownBlockType)arg1;
- (void)popWithHandler:(CDUnknownBlockType)arg1;
- (void)push:(id)arg1;
- (void)removeObject:(id)arg1;

@end
