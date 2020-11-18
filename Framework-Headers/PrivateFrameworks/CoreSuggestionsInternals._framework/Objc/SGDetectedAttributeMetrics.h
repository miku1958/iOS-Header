//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SGMContactDetailExtraction, SGMContactDetailSent;

@interface SGDetectedAttributeMetrics : NSObject
{
    SGMContactDetailExtraction *_contactDetailExtraction;
    SGMContactDetailSent *_contactDetailSent;
}

@property (strong, nonatomic) SGMContactDetailExtraction *contactDetailExtraction; // @synthesize contactDetailExtraction=_contactDetailExtraction;
@property (strong, nonatomic) SGMContactDetailSent *contactDetailSent; // @synthesize contactDetailSent=_contactDetailSent;

+ (void)_recordExtractionEventFromSource:(struct SGMDocumentType_)arg1 foundInSignature:(BOOL)arg2 detailType:(struct SGMContactDetailType_)arg3 outcome:(struct SGMContactDetailExtractionOutcome_)arg4 foundInCNContact:(struct SGMContactDetailOwner_)arg5;
+ (void)_recordExtractionOutcome:(struct SGMContactDetailExtractionOutcome_)arg1 detailType:(struct SGMContactDetailType_)arg2 fromEntity:(id)arg3 foundInSignature:(BOOL)arg4 detailType:(unsigned long long)arg5 detailValue:(id)arg6;
+ (id)instance;
+ (id)nameForDataDetectorMatch:(id)arg1 withValue:(id)arg2;
+ (void)recordExtractionOutcome:(struct SGMContactDetailExtractionOutcome_)arg1 fromEntity:(id)arg2;
+ (void)recordExtractionOutcome:(struct SGMContactDetailExtractionOutcome_)arg1 fromEntity:(id)arg2 foundInSignature:(BOOL)arg3 detection:(id)arg4;
+ (void)recordExtractionOutcome:(struct SGMContactDetailExtractionOutcome_)arg1 fromEntity:(id)arg2 foundInSignature:(BOOL)arg3 match:(id)arg4;
+ (void)recordExtractionOutcome:(struct SGMContactDetailExtractionOutcome_)arg1 fromEntity:(id)arg2 foundInSignature:(BOOL)arg3 match:(id)arg4 foundInCNContact:(struct SGMContactDetailOwner_)arg5;
+ (void)recordSentContactDetailWithEntity:(id)arg1 match:(id)arg2 found:(struct SGMContactDetailFoundIn_)arg3;
+ (id)tokenizeMessageContent:(id)arg1;
- (void).cxx_destruct;
- (id)init;

@end
