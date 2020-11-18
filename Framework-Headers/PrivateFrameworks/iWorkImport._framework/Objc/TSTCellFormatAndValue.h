//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/NSCopying-Protocol.h>
#import <iWorkImport/TSSPropertyCommandSerializing-Protocol.h>
#import <iWorkImport/TSTCellDiffing-Protocol.h>

@class NSDate, NSString, TSUFormatObject, TSWPStorage;

__attribute__((visibility("hidden")))
@interface TSTCellFormatAndValue : NSObject <NSCopying, TSTCellDiffing, TSSPropertyCommandSerializing>
{
    unsigned int mValueType:8;
    BOOL mUseAllSpareFormats;
    BOOL mSuppressApplyValue;
    BOOL mApplySpareFormatOnly;
    int mSpareFormatType;
    union {
        double mDouble;
        BOOL mBool;
        NSDate *mDate;
        NSString *mString;
        TSWPStorage *mStorage;
    } mValue;
    NSString *mFormattedValue;
    TSWPStorage *mFormattedRichTextStorage;
    unsigned short mExplicitFlags;
    int mCurrentFormatType;
    TSUFormatObject *mNumberFormat;
    TSUFormatObject *mCurrencyFormat;
    TSUFormatObject *mDateFormat;
    TSUFormatObject *mDurationFormat;
    TSUFormatObject *mStepperSliderFormat;
    TSUFormatObject *mBaseFormat;
    TSUFormatObject *mMultipleChoiceFormat;
    TSUFormatObject *mCustomFormat;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)cellDiffProperties;
+ (id)formatAndValueForCoercingControlCellToNonControlType:(id)arg1;
+ (id)formatAndValueFromCell:(id)arg1 applySpareFormatOnly:(int)arg2;
+ (id)formatAndValueFromCell:(id)arg1 useAllSpareFormats:(BOOL)arg2;
+ (id)formatAndValueFromCell:(id)arg1 useAllSpareFormats:(BOOL)arg2 forceNoContent:(BOOL)arg3;
+ (id)formatAndValueFromRichTextCell:(id)arg1 updatingStorageWithBlock:(CDUnknownBlockType)arg2;
- (void)applyToCell:(id)arg1;
- (id)copyForApplyingNoContent;
- (id)copyForApplyingNoContentWithSuppressApplyValue:(BOOL)arg1;
- (id)copyForNotApplyingValue;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)getCurrentFormat;
- (BOOL)hasStringContentMatchingCell:(id)arg1;
- (id)initFromCell:(id)arg1 useAllSpareFormats:(BOOL)arg2;
- (id)initFromCell:(id)arg1 useAllSpareFormats:(BOOL)arg2 forceNoContent:(BOOL)arg3 applySpareFormatOnly:(int)arg4;
- (id)initFromPropertyCommandMessage:(const struct Message *)arg1 unarchiver:(id)arg2;
- (BOOL)isControl;
- (BOOL)isFormulaSyntaxError;
- (id)objectByRemovingPropertiesInMap:(id)arg1 addingPropertiesInMap:(id)arg2 updateInverseResetPropertyMap:(id)arg3 updateInverseSetPropertyMap:(id)arg4;
- (id *)p_formatObjectForFormatType:(int)arg1;
- (id)p_sikritCopyStorage:(id)arg1;
- (void)saveToPropertyCommandMessage:(struct Message *)arg1 archiver:(id)arg2;
- (int)valueType;

@end

