//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreML/NSSecureCoding-Protocol.h>

@class NSArray, NSDictionary, NSMutableDictionary;

@interface MLParameterContainer : NSObject <NSSecureCoding>
{
    NSMutableDictionary *_currentParameterValues;
    NSArray *_parameterKeys;
    NSDictionary *_parameterDescriptions;
}

@property (strong, nonatomic) NSMutableDictionary *currentParameterValues; // @synthesize currentParameterValues=_currentParameterValues;
@property (strong, nonatomic) NSDictionary *parameterDescriptions; // @synthesize parameterDescriptions=_parameterDescriptions;
@property (strong, nonatomic) NSArray *parameterKeys; // @synthesize parameterKeys=_parameterKeys;

+ (id)parameterContainerFor:(id)arg1 descriptions:(id)arg2;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)setCurrentValue:(id)arg1 forKey:(id)arg2 error:(id *)arg3;
- (BOOL)validateParameterValue:(id)arg1 givenConstraint:(id)arg2;

@end
