//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SearchToSharePredictionsInternals/PMLPlistAndChunksSerializableProtocol-Protocol.h>

@class NSDictionary, NSString, PMLHashingVectorizer, SGQPMultiLabelModel;

@interface SGQPMLPredictor : NSObject <PMLPlistAndChunksSerializableProtocol>
{
    PMLHashingVectorizer *_vectorizer;
    SGQPMultiLabelModel *_multiLabelModel;
    NSDictionary *_categoryNameForLabel;
}

@property (readonly, nonatomic) NSDictionary *categoryNameForLabel; // @synthesize categoryNameForLabel=_categoryNameForLabel;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) SGQPMultiLabelModel *multiLabelModel; // @synthesize multiLabelModel=_multiLabelModel;
@property (readonly) Class superclass;
@property (readonly, nonatomic) PMLHashingVectorizer *vectorizer; // @synthesize vectorizer=_vectorizer;

+ (id)predictorFromAsset:(id)arg1;
+ (id)predictorFromChunkedFileAtPath:(id)arg1;
- (void).cxx_destruct;
- (id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3;
- (id)initWithVectorizer:(id)arg1 multiLabelModel:(id)arg2 labelMap:(id)arg3;
- (id)predictionsForMessages:(id)arg1;
- (void)serializeInChunkedFileFormatToFile:(id)arg1;
- (id)toPlistWithChunks:(id)arg1;

@end

