//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/NSCopying-Protocol.h>

@class TSCHStyleSemanticTag;

__attribute__((visibility("hidden")))
@interface TSCHSemanticTagAndPropertyPair : NSObject <NSCopying>
{
    TSCHStyleSemanticTag *mSemanticTag;
    int mProperty;
}

+ (id)pairWithSemanticTag:(id)arg1 property:(int)arg2;
+ (id)semanticTagToSemanticUsagesMapForSemanticUsages:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (id)initWithSemanticTag:(id)arg1 property:(int)arg2;
- (BOOL)isEqual:(id)arg1;
- (int)property;
- (id)semanticTag;

@end

