//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSPArchiverBase.h>

__attribute__((visibility("hidden")))
@interface TSPAlternateArchiver : TSPArchiverBase
{
    RepeatedPtrField_5867f37b _fieldPathsToRemove;
    BOOL _isDiff;
    const struct FieldPath *_fieldPath;
    TSPArchiverBase *_parentArchiver;
}

@property (readonly, nonatomic) const struct FieldPath *fieldPath; // @synthesize fieldPath=_fieldPath;
@property (readonly, nonatomic) const RepeatedPtrField_5867f37b *fieldPathsToRemove;
@property (readonly, nonatomic) BOOL isDiff; // @synthesize isDiff=_isDiff;
@property (readonly, weak, nonatomic) TSPArchiverBase *parentArchiver; // @synthesize parentArchiver=_parentArchiver;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)alternateDiffForVersion:(unsigned long long)arg1;
- (id)alternateDiffForVersion:(unsigned long long)arg1 field:(int)arg2;
- (id)alternateDiffForVersion:(unsigned long long)arg1 fieldPath:(int *)arg2;
- (void)dealloc;
- (id)initWithObject:(id)arg1;
- (id)initWithObject:(id)arg1 version:(unsigned long long)arg2 isDiff:(BOOL)arg3 fieldPath:(const struct FieldPath *)arg4 parentArchiver:(id)arg5;
- (id)parentAlternateDiffForVersion:(unsigned long long)arg1 fieldPath:(int *)arg2;
- (void)removeField:(int)arg1;
- (void)removeFieldAtEndOfPath:(int *)arg1;

@end

