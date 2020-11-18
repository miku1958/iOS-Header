//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class TSUUUIDPath;

__attribute__((visibility("hidden")))
@interface TSWPObjectPlacement : NSObject
{
    int _index;
    TSUUUIDPath *_uuidPath;
    NSObject *_object;
}

@property (nonatomic) int index; // @synthesize index=_index;
@property (strong, nonatomic) NSObject *object; // @synthesize object=_object;
@property (strong, nonatomic) TSUUUIDPath *uuidPath; // @synthesize uuidPath=_uuidPath;

+ (id)objectPlacementWithObject:(id)arg1 uuidPath:(id)arg2 index:(int)arg3;
- (void).cxx_destruct;
- (id)initWithObject:(id)arg1 uuidPath:(id)arg2 index:(int)arg3;

@end

