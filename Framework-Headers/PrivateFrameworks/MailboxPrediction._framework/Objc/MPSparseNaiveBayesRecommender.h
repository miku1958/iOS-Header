//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MailboxPrediction/MPRecommending-Protocol.h>

@class NSMutableArray, NSMutableDictionary, NSString;
@protocol MPActionLogging;

@interface MPSparseNaiveBayesRecommender : NSObject <MPRecommending>
{
    BOOL _useSubject;
    BOOL _trained;
    NSMutableDictionary *_labelCounts;
    NSMutableArray *_senderMatrix;
    NSMutableArray *_recipientMatrix;
    NSMutableArray *_ccRecipientMatrix;
    NSMutableArray *_subjectMatrix;
    NSMutableArray *_labels;
    NSMutableArray *_senders;
    NSMutableArray *_recipients;
    NSMutableArray *_ccRecipients;
    NSMutableArray *_subjectWords;
    id<MPActionLogging> _actionLogger;
    NSString *_modelPath;
    NSMutableArray *_trainingSet;
}

@property (strong, nonatomic, getter=actionLogger) id<MPActionLogging> actionLogger; // @synthesize actionLogger=_actionLogger;
@property (strong) NSMutableArray *ccRecipientMatrix; // @synthesize ccRecipientMatrix=_ccRecipientMatrix;
@property (strong) NSMutableArray *ccRecipients; // @synthesize ccRecipients=_ccRecipients;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong) NSMutableDictionary *labelCounts; // @synthesize labelCounts=_labelCounts;
@property (strong) NSMutableArray *labels; // @synthesize labels=_labels;
@property (strong) NSString *modelPath; // @synthesize modelPath=_modelPath;
@property (strong) NSMutableArray *recipientMatrix; // @synthesize recipientMatrix=_recipientMatrix;
@property (strong) NSMutableArray *recipients; // @synthesize recipients=_recipients;
@property (strong) NSMutableArray *senderMatrix; // @synthesize senderMatrix=_senderMatrix;
@property (strong) NSMutableArray *senders; // @synthesize senders=_senders;
@property (strong) NSMutableArray *subjectMatrix; // @synthesize subjectMatrix=_subjectMatrix;
@property (strong) NSMutableArray *subjectWords; // @synthesize subjectWords=_subjectWords;
@property (readonly) Class superclass;
@property BOOL trained; // @synthesize trained=_trained;
@property (strong) NSMutableArray *trainingSet; // @synthesize trainingSet=_trainingSet;
@property BOOL useSubject; // @synthesize useSubject=_useSubject;

+ (id)recommenderFromModelPath:(id)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (BOOL)addMessages:(id)arg1;
- (BOOL)clear;
- (id)computeLikelihoods:(id)arg1;
- (id)computePriors;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithModelPath:(id)arg1 usingSubject:(BOOL)arg2;
- (id)initializeMatrix:(id)arg1 columns:(unsigned long long)arg2;
- (BOOL)isValidTrainingMessage:(id)arg1;
- (double)likelihoodForMatrix:(id)arg1 featureSet:(id)arg2 feature:(id)arg3 label:(id)arg4;
- (void)logUserAction:(unsigned long long)arg1 inContext:(unsigned long long)arg2 forMessage:(id)arg3 available:(id)arg4 displayed:(id)arg5 selected:(id)arg6;
- (id)recommendationsForMessage:(id)arg1 error:(id *)arg2;
- (BOOL)removeMessage:(id)arg1;
- (id)sortLabelsForScores:(id)arg1;
- (BOOL)synchronize;
- (BOOL)train;
- (void)updateCountsForMatrix:(id)arg1 label:(unsigned long long)arg2 feature:(unsigned long long)arg3;
- (void)updateFeatureSet:(id)arg1 feature:(id)arg2;
- (void)updateFeatureSet:(id)arg1 peopleArray:(id)arg2;
- (void)updateLabelCount:(id)arg1;
- (BOOL)verifyBoundsForMatrix:(id)arg1 row:(unsigned long long)arg2 column:(unsigned long long)arg3;

@end

