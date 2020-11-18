//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TextInput/TITypologyRecord.h>

@class TIKeyboardConfiguration, TIKeyboardState;

@interface TITypologyRecordPhraseBoundaryAdjustment : TITypologyRecord
{
    BOOL _forwardAdjustment;
    int _granularity;
    TIKeyboardState *_keyboardState;
    TIKeyboardConfiguration *_keyboardConfig;
}

@property (nonatomic) BOOL forwardAdjustment; // @synthesize forwardAdjustment=_forwardAdjustment;
@property (nonatomic) int granularity; // @synthesize granularity=_granularity;
@property (strong, nonatomic) TIKeyboardConfiguration *keyboardConfig; // @synthesize keyboardConfig=_keyboardConfig;
@property (strong, nonatomic) TIKeyboardState *keyboardState; // @synthesize keyboardState=_keyboardState;

- (void)applyToStatistic:(id)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)shortDescription;

@end

