//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError;

__attribute__((visibility("hidden")))
@interface NSObservedValue : NSObject
{
    id _contents;
    id _lastOriginator;
    int _tag;
}

@property (strong) NSError *error;
@property BOOL finished;
@property (strong) id value;

- (BOOL)_isToManyChangeInformation;
- (id)copyToHeap;
- (void)dealloc;
- (id)debugDescription;
- (id)description;

@end
