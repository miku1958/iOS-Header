//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <TextInput/NSSecureCoding-Protocol.h>

@class NSString, TIKeyboardInputManagerState, TIKeyboardIntermediateText;

@interface TIKeyboardConfiguration : NSObject <NSSecureCoding>
{
    BOOL _assertDefaultKeyPlane;
    TIKeyboardInputManagerState *_inputManagerState;
    TIKeyboardIntermediateText *_intermediateText;
    NSString *_layoutTag;
    NSString *_accentKeyString;
}

@property (copy, nonatomic) NSString *accentKeyString; // @synthesize accentKeyString=_accentKeyString;
@property (nonatomic) BOOL assertDefaultKeyPlane; // @synthesize assertDefaultKeyPlane=_assertDefaultKeyPlane;
@property (copy, nonatomic) TIKeyboardInputManagerState *inputManagerState; // @synthesize inputManagerState=_inputManagerState;
@property (strong, nonatomic) TIKeyboardIntermediateText *intermediateText; // @synthesize intermediateText=_intermediateText;
@property (copy, nonatomic) NSString *layoutTag; // @synthesize layoutTag=_layoutTag;

+ (BOOL)supportsSecureCoding;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

