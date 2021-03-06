//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Translation/NSSecureCoding-Protocol.h>

@class NSArray;

@interface _LTSpeechRecognitionSausage : NSObject <NSSecureCoding>
{
    NSArray *_bins;
}

@property (strong, nonatomic) NSArray *bins; // @synthesize bins=_bins;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithOspreySausage:(id)arg1 choices:(id)arg2 locale:(id)arg3;
- (id)initWithRecognition:(id)arg1 wordConfidenceThreshold:(long long)arg2;

@end

