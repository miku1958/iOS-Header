//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface TSKCOAddress : NSObject
{
    NSArray *_allPathElements;
    TSKCOAddress *_parent;
}

@property (readonly, nonatomic) NSArray *allPathElements;
@property (readonly, nonatomic) TSKCOAddress *parent; // @synthesize parent=_parent;
@property (readonly, nonatomic) NSString *path;
@property (readonly, nonatomic) NSString *pathElement;

+ (id)newObjectForUnarchiver:(id)arg1 message:(const struct Message *)arg2;
+ (void)registerClass:(Class)arg1 forExtensionNumber:(unsigned int)arg2;
+ (id)typeRegistry;
- (void).cxx_destruct;
- (BOOL)contains:(id)arg1;
- (id)description;
- (BOOL)equals:(id)arg1;
- (BOOL)hasSamePrefix:(id)arg1;
- (unsigned long long)hash;
- (id)initWithParent:(id)arg1;
- (id)initWithUnarchiver:(id)arg1 message:(const struct Address *)arg2;
- (BOOL)isEqual:(id)arg1;
- (void)saveToArchiver:(id)arg1 message:(struct Address *)arg2;

@end
