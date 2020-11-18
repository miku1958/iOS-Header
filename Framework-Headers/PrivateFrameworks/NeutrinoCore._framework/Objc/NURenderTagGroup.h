//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface NURenderTagGroup : NSObject
{
    NSMutableDictionary *_tags;
    NSMutableDictionary *_children;
    NURenderTagGroup *_parent;
}

@property (weak) NURenderTagGroup *parent; // @synthesize parent=_parent;

+ (BOOL)validatePath:(id)arg1 error:(out id *)arg2;
- (void).cxx_destruct;
- (void)_composePathComponents:(id)arg1;
- (id)_descriptionWithLevel:(long long)arg1;
- (id)_nodeWithPathComponents:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)_root;
- (void)addChild:(id)arg1 withName:(id)arg2;
- (id)addTag:(id)arg1 forNode:(id)arg2;
- (id)childWithName:(id)arg1;
- (id)children;
- (id)description;
- (id)finalizeMap:(id)arg1;
- (id)init;
- (id)leafName;
- (id)nodeWithPath:(id)arg1;
- (id)path;
- (void)removeChildWithName:(id)arg1;
- (void)visitEveryTagWithBlock:(CDUnknownBlockType)arg1;

@end
