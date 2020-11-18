//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TextInput/TITypologyRecord.h>

@class TIKeyboardConfiguration, TIKeyboardInput, TIKeyboardOutput, TIKeyboardState;

@interface TITypologyRecordKeyboardInput : TITypologyRecord
{
    TIKeyboardInput *_input;
    TIKeyboardState *_keyboardState;
    TIKeyboardOutput *_output;
    TIKeyboardConfiguration *_keyboardConfig;
}

@property (strong, nonatomic) TIKeyboardInput *input; // @synthesize input=_input;
@property (strong, nonatomic) TIKeyboardConfiguration *keyboardConfig; // @synthesize keyboardConfig=_keyboardConfig;
@property (strong, nonatomic) TIKeyboardState *keyboardState; // @synthesize keyboardState=_keyboardState;
@property (strong, nonatomic) TIKeyboardOutput *output; // @synthesize output=_output;

- (void)applyToStatistic:(id)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)shortDescription;
- (id)textSummary;

@end
