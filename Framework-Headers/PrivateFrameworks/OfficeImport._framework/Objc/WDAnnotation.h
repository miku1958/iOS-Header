//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/WDRun.h>

@class WDAnnotationData, WDCharacterRun;

__attribute__((visibility("hidden")))
@interface WDAnnotation : WDRun
{
    int mType;
    WDCharacterRun *mReference;
    BOOL mReferencePopertiesFixed;
    WDAnnotationData *mData;
    WDAnnotation *mOtherEndOfRangedAnnotation;
    BOOL isResolved;
    WDAnnotation *parent;
}

@property BOOL isResolved; // @synthesize isResolved;
@property WDAnnotation *parent; // @synthesize parent;

- (void).cxx_destruct;
- (int)annotationType;
- (id)data;
- (id)date;
- (id)description;
- (id)initWithParagraph:(id)arg1 type:(int)arg2;
- (unsigned long long)lastParagraphId;
- (id)otherEndOfRangedAnnotation;
- (id)owner;
- (id)paragraphIds;
- (id)reference;
- (BOOL)referencePropertiesFixed;
- (int)runType;
- (void)setDate:(id)arg1;
- (void)setOtherEndOfRangedAnnotation:(id)arg1;
- (void)setOwner:(id)arg1;
- (void)setReferencePropertiesFixed;
- (id)text;
- (void)useDataFromOtherEnd;

@end

