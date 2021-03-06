//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface CVNLPCaptionRuntimeReplacements : NSObject
{
    NSString *_replacementKey;
    NSString *_replacementValue;
    double _replacementProb;
    NSNumber *_genderOption;
}

@property (readonly, nonatomic) NSNumber *genderOption; // @synthesize genderOption=_genderOption;
@property (readonly, nonatomic) NSString *replacementKey; // @synthesize replacementKey=_replacementKey;
@property (readonly, nonatomic) double replacementProb; // @synthesize replacementProb=_replacementProb;
@property (readonly, nonatomic) NSString *replacementValue; // @synthesize replacementValue=_replacementValue;

- (void).cxx_destruct;
- (id)initWithKey:(id)arg1 value:(id)arg2 prob:(double)arg3 genderOption:(id)arg4;

@end

