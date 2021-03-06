//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSDrawables/NSCopying-Protocol.h>
#import <TSDrawables/NSObject-Protocol.h>

@class NSSet;

@protocol TSDCanvasSelection <NSObject, NSCopying>

@property (readonly, nonatomic) unsigned long long infoCount;
@property (readonly, nonatomic) NSSet *infos;
@property (readonly, nonatomic) NSSet *infosWithNonInteractiveInfos;
@property (readonly, nonatomic) BOOL isEmpty;
@property (readonly, nonatomic) NSSet *nonInteractiveInfos;
@property (readonly, nonatomic) unsigned long long unlockedInfoCount;
@property (readonly, nonatomic) NSSet *unlockedInfos;

+ (id)emptySelection;
- (BOOL)containsKindOfClass:(Class)arg1;
- (BOOL)containsUnlockedKindOfClass:(Class)arg1;
- (NSSet *)infosOfClass:(Class)arg1;
@end

