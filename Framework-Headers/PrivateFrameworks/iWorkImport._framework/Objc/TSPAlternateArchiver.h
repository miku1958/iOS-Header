//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSPArchiverBase.h>

#import <iWorkImport/TSPKnownFieldRuleProvider-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface TSPAlternateArchiver : TSPArchiverBase <TSPKnownFieldRuleProvider>
{
    RepeatedPtrField_02f83fb8 _fieldPathsToRemove;
    struct {
        unsigned int hasPreserveNewerValueRule:1;
        unsigned int hasPreserveNewerValueUntilModifiedRule:1;
    } _flags;
    BOOL _isDiff;
    const struct FieldPath *_fieldPath;
    unsigned long long _diffReadVersion;
    TSPArchiverBase *_parentArchiver;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) unsigned long long diffReadVersion; // @synthesize diffReadVersion=_diffReadVersion;
@property (readonly, nonatomic) const struct FieldPath *fieldPath; // @synthesize fieldPath=_fieldPath;
@property (readonly, nonatomic) const RepeatedPtrField_02f83fb8 *fieldPathsToRemove;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL isContentUnknown;
@property (readonly, nonatomic) BOOL isDiff; // @synthesize isDiff=_isDiff;
@property (readonly, weak, nonatomic) TSPArchiverBase *parentArchiver; // @synthesize parentArchiver=_parentArchiver;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)alternateDiffToMergeBeforeVersion:(unsigned long long)arg1 fileFormatVersion:(unsigned long long)arg2;
- (id)alternateDiffToMergeBeforeVersion:(unsigned long long)arg1 fileFormatVersion:(unsigned long long)arg2 field:(int)arg3;
- (id)alternateDiffToMergeBeforeVersion:(unsigned long long)arg1 fileFormatVersion:(unsigned long long)arg2 fieldPath:(int *)arg3;
- (const struct FieldPath *)baseFieldPathAndReturnShouldDeleteReturnedValue:(BOOL *)arg1;
- (void)dealloc;
- (void)enumerateKnownFieldRulesUsingBlock:(CDUnknownBlockType)arg1;
- (id)initWithObject:(id)arg1;
- (id)initWithObject:(id)arg1 version:(unsigned long long)arg2 fieldPath:(const struct FieldPath *)arg3 isDiff:(BOOL)arg4 diffReadVersion:(unsigned long long)arg5 parentArchiver:(id)arg6;
- (BOOL)isSavingCollaborativeDocument;
- (BOOL)isSavingDocumentAs;
- (void)p_setPreserveNewerValueRuleForFieldPath:(int *)arg1 fileFormatVersion:(unsigned long long)arg2 featureIdentifier:(id)arg3;
- (void)p_setPreserveNewerValueUntilModifiedRuleForFieldPath:(int *)arg1 fileFormatVersion:(unsigned long long)arg2 featureIdentifier:(id)arg3;
- (id)parentAlternateDiffToMergeBeforeVersion:(unsigned long long)arg1 fileFormatVersion:(unsigned long long)arg2 fieldPath:(int *)arg3;
- (void)removeField:(int)arg1;
- (void)removeFieldAtEndOfPath:(int *)arg1;
- (void)setPreserveNewerValueRuleForField:(int)arg1 fileFormatVersion:(unsigned long long)arg2;
- (void)setPreserveNewerValueRuleForField:(int)arg1 fileFormatVersion:(unsigned long long)arg2 featureIdentifier:(id)arg3;
- (void)setPreserveNewerValueRuleForFieldPath:(int *)arg1 fileFormatVersion:(unsigned long long)arg2;
- (void)setPreserveNewerValueRuleForFieldPath:(int *)arg1 fileFormatVersion:(unsigned long long)arg2 featureIdentifier:(id)arg3;
- (void)setPreserveNewerValueUntilModifiedRuleForField:(int)arg1 fileFormatVersion:(unsigned long long)arg2;
- (void)setPreserveNewerValueUntilModifiedRuleForField:(int)arg1 fileFormatVersion:(unsigned long long)arg2 featureIdentifier:(id)arg3;
- (void)setPreserveNewerValueUntilModifiedRuleForFieldPath:(int *)arg1 fileFormatVersion:(unsigned long long)arg2;
- (void)setPreserveNewerValueUntilModifiedRuleForFieldPath:(int *)arg1 fileFormatVersion:(unsigned long long)arg2 featureIdentifier:(id)arg3;

@end

