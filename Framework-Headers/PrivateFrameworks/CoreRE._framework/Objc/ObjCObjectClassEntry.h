//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSSet, NSString;

__attribute__((visibility("hidden")))
@interface ObjCObjectClassEntry : NSObject
{
    NSString *_clsName;
    NSMutableSet *_objects;
}

@property (readonly) NSString *clsName;
@property (readonly) NSSet *objects;

- (void).cxx_destruct;
- (void)addObject:(id)arg1;
- (id)initWithClass:(Class)arg1;

@end
