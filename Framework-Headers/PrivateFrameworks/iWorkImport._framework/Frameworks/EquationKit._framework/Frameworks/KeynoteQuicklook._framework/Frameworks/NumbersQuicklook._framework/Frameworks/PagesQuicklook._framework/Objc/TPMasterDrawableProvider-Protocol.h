//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PagesQuicklook/NSObject-Protocol.h>

@class NSArray, NSSet, TSDDrawableInfo, TSKAddedToDocumentContext;

@protocol TPMasterDrawableProvider <NSObject>

@property (readonly, nonatomic) unsigned long long countOfMasterDrawables;
@property (readonly, nonatomic) NSArray *masterDrawables;

- (void)addMasterDrawable:(TSDDrawableInfo *)arg1 atIndex:(unsigned long long)arg2 insertContext:(TSKAddedToDocumentContext *)arg3 suppressDOLC:(BOOL)arg4;
- (void)addMasterDrawables:(NSArray *)arg1 atIndex:(unsigned long long)arg2 insertContext:(TSKAddedToDocumentContext *)arg3 suppressDOLC:(BOOL)arg4;
- (unsigned long long)indexOfMasterDrawable:(TSDDrawableInfo *)arg1;
- (NSArray *)masterDrawablesSortedByZOrder:(NSSet *)arg1;
- (void)removeMasterDrawable:(TSDDrawableInfo *)arg1 suppressDOLC:(BOOL)arg2;
@end

