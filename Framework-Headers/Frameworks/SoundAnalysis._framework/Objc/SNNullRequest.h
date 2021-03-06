//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SoundAnalysis/NSCopying-Protocol.h>
#import <SoundAnalysis/NSSecureCoding-Protocol.h>
#import <SoundAnalysis/SNAnalyzerCreating-Protocol.h>
#import <SoundAnalysis/SNRequest-Protocol.h>

@class NSString, SNNullDetector;

@interface SNNullRequest : NSObject <SNAnalyzerCreating, NSCopying, NSSecureCoding, SNRequest>
{
    SNNullDetector *_detector;
    BOOL _graphIsDeadEnded;
    BOOL _shouldThrowException;
    unsigned int _blockSize;
    double _sampleRate;
    double _computationalDutyCycle;
}

@property (nonatomic) unsigned int blockSize; // @synthesize blockSize=_blockSize;
@property (nonatomic) double computationalDutyCycle; // @synthesize computationalDutyCycle=_computationalDutyCycle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL graphIsDeadEnded; // @synthesize graphIsDeadEnded=_graphIsDeadEnded;
@property (readonly) unsigned long long hash;
@property (nonatomic) double sampleRate; // @synthesize sampleRate=_sampleRate;
@property (nonatomic) BOOL shouldThrowException; // @synthesize shouldThrowException=_shouldThrowException;
@property (readonly) Class superclass;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)createAnalyzerWithError:(id *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToNullRequest:(id)arg1;

@end

