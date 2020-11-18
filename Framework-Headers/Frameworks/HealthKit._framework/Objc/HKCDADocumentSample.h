//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthKit/HKDocumentSample.h>

@class HKCDADocument;

@interface HKCDADocumentSample : HKDocumentSample
{
    long long _omittedContentFlags;
    HKCDADocument *_document;
}

@property (readonly) HKCDADocument *document; // @synthesize document=_document;

+ (id)CDADocumentSampleWithData:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 metadata:(id)arg4 validationError:(id *)arg5;
+ (id)_comparisonExpressionForValue:(id)arg1 operatorType:(unsigned long long)arg2;
+ (id)_globStringToRegexString:(id)arg1;
+ (BOOL)_isValidCDAKeyPath:(id)arg1;
+ (BOOL)_isValidOperatorType:(unsigned long long)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)_applyPropertiesWithOmittedFlags:(long long)arg1 compressedDocumentData:(id)arg2 title:(id)arg3 patientName:(id)arg4 authorName:(id)arg5 custodianName:(id)arg6;
- (id)_fieldValueForKeyPath:(id)arg1;
- (long long)_omittedContentFlags;
- (BOOL)_predicateMatchForKeyPath:(id)arg1 operatorType:(unsigned long long)arg2 pattern:(id)arg3;
- (void)_processDocumentData:(id)arg1 extractedFields:(id)arg2;
- (id)_validateConfiguration;
- (BOOL)_validateDocumentContentWithError:(id *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)prepareForDelivery:(id *)arg1;
- (BOOL)prepareForSaving:(id *)arg1;

@end

