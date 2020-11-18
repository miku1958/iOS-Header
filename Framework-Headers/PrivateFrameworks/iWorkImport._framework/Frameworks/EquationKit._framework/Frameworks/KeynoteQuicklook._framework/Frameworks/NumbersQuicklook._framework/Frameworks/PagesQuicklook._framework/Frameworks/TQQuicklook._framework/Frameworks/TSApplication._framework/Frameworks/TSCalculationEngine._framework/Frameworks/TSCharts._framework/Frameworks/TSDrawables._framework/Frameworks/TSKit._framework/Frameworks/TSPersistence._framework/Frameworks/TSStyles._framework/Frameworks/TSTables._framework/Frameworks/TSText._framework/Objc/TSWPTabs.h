//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSText/NSCopying-Protocol.h>
#import <TSText/NSFastEnumeration-Protocol.h>
#import <TSText/TSDMixing-Protocol.h>
#import <TSText/TSSPropertyValueArchiving-Protocol.h>

@class NSMutableArray;

@interface TSWPTabs : NSObject <TSSPropertyValueArchiving, NSCopying, NSFastEnumeration, TSDMixing>
{
    NSMutableArray *_tabs;
}

+ (id)instanceWithArchive:(const struct Message *)arg1 unarchiver:(id)arg2;
+ (id)tabs;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)description;
- (unsigned long long)hash;
- (unsigned long long)indexForTabWithPosition:(double)arg1 alignment:(int)arg2 leader:(id)arg3;
- (id)init;
- (id)initWithArchive:(const struct TabsArchive *)arg1 unarchiver:(id)arg2;
- (id)initWithTabs:(id)arg1;
- (void)insertTab:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1 context:(id)arg2;
- (void)removeTabAtIndex:(unsigned long long)arg1;
- (void)saveToArchive:(struct TabsArchive *)arg1 archiver:(id)arg2;
- (void)setPosition:(double)arg1 forTab:(id)arg2;
- (id)tabAfterPosition:(double)arg1;
- (id)tabAtIndex:(unsigned long long)arg1;
- (id)tabAtPosition:(double)arg1;

@end
