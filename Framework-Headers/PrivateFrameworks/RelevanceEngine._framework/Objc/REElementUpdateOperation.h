//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class REElement, RESectionPath;

@interface REElementUpdateOperation : NSObject
{
    REElement *_element;
    RESectionPath *_path;
    RESectionPath *_movedToPath;
    unsigned long long _type;
}

@property (readonly, nonatomic) REElement *element; // @synthesize element=_element;
@property (readonly, nonatomic) RESectionPath *movedToPath; // @synthesize movedToPath=_movedToPath;
@property (readonly, nonatomic) RESectionPath *path; // @synthesize path=_path;
@property (readonly, nonatomic) unsigned long long type; // @synthesize type=_type;

+ (id)insertElement:(id)arg1 atPath:(id)arg2;
+ (id)moveElement:(id)arg1 fromPath:(id)arg2 toPath:(id)arg3;
+ (id)refreshElement:(id)arg1 atPath:(id)arg2;
+ (id)reloadElement:(id)arg1 atPath:(id)arg2;
+ (id)removeElement:(id)arg1 atPath:(id)arg2;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (id)initWithElement:(id)arg1 path:(id)arg2 newPath:(id)arg3 updateType:(unsigned long long)arg4;
- (BOOL)isEqual:(id)arg1;

@end

