//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface PKInkFunction : NSObject
{
    unsigned long long _inkProperty;
    unsigned long long _inkInput;
    unsigned long long _inputMask;
    unsigned long long _deviceMask;
    NSMutableArray *_inputPoints;
    NSMutableArray *_outputPoints;
    unsigned long long _functionType;
    NSMutableArray *_controlPoints;
}

@property (strong, nonatomic) NSMutableArray *controlPoints; // @synthesize controlPoints=_controlPoints;
@property (nonatomic) unsigned long long deviceMask; // @synthesize deviceMask=_deviceMask;
@property (nonatomic) unsigned long long functionType; // @synthesize functionType=_functionType;
@property (nonatomic) unsigned long long inkInput; // @synthesize inkInput=_inkInput;
@property (nonatomic) unsigned long long inkProperty; // @synthesize inkProperty=_inkProperty;
@property (nonatomic) unsigned long long inputMask; // @synthesize inputMask=_inputMask;
@property (strong, nonatomic) NSMutableArray *inputPoints; // @synthesize inputPoints=_inputPoints;
@property (strong, nonatomic) NSMutableArray *outputPoints; // @synthesize outputPoints=_outputPoints;

+ (id)inkFunctionForProperty:(unsigned long long)arg1 input:(unsigned long long)arg2 inputMask:(unsigned long long)arg3 deviceMask:(unsigned long long)arg4 inputPoints:(id)arg5 outputPoints:(id)arg6 functionType:(unsigned long long)arg7;
- (void).cxx_destruct;
- (id)description;
- (id)initWithProperty:(unsigned long long)arg1 input:(unsigned long long)arg2 inputMask:(unsigned long long)arg3 deviceMask:(unsigned long long)arg4 inputPoints:(id)arg5 outputPoints:(id)arg6 functionType:(unsigned long long)arg7;

@end

