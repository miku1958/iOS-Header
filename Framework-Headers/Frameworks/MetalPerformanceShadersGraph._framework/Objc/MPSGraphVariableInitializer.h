//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface MPSGraphVariableInitializer : NSObject
{
    double _constant;
    double _minimum;
    double _maximum;
    NSString *_file;
    unsigned int _initializerType;
}

@property (readonly, nonatomic) unsigned int initializerType; // @synthesize initializerType=_initializerType;

+ (id)initializerWithConstant:(double)arg1;
+ (id)initializerWithFile:(id)arg1;
+ (id)initializerWithOnes;
+ (id)initializerWithRandomUniformWithMinimum:(double)arg1 maximum:(double)arg2;
+ (id)initializerWithZeros;
- (void).cxx_destruct;
- (id)init;
- (id)initializedDataWithNumberOfValues:(unsigned long long)arg1 dataType:(unsigned int)arg2;

@end
