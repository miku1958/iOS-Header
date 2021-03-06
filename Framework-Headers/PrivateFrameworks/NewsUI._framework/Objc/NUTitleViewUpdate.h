//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface NUTitleViewUpdate : NSObject
{
    BOOL _cancelPendingUpdates;
    BOOL _speakAccessibilityTitleWhenDisplayed;
    id _value;
    unsigned long long _valueType;
    unsigned long long _styleType;
    double _lingerTimeInterval;
    NSString *_accessibilityTitle;
    long long _textAlignment;
}

@property (copy, nonatomic) NSString *accessibilityTitle; // @synthesize accessibilityTitle=_accessibilityTitle;
@property (nonatomic, getter=shouldCancelPendingUpdates) BOOL cancelPendingUpdates; // @synthesize cancelPendingUpdates=_cancelPendingUpdates;
@property (nonatomic) double lingerTimeInterval; // @synthesize lingerTimeInterval=_lingerTimeInterval;
@property (nonatomic, getter=shouldSpeakAccessibilityTitleWhenDisplayed) BOOL speakAccessibilityTitleWhenDisplayed; // @synthesize speakAccessibilityTitleWhenDisplayed=_speakAccessibilityTitleWhenDisplayed;
@property (readonly, nonatomic) unsigned long long styleType; // @synthesize styleType=_styleType;
@property (nonatomic) long long textAlignment; // @synthesize textAlignment=_textAlignment;
@property (readonly, nonatomic) id value; // @synthesize value=_value;
@property (readonly, nonatomic) unsigned long long valueType; // @synthesize valueType=_valueType;

- (void).cxx_destruct;
- (id)init;
- (id)initWithAttributedText:(id)arg1 styleType:(unsigned long long)arg2;
- (id)initWithImage:(id)arg1;
- (id)initWithText:(id)arg1 styleType:(unsigned long long)arg2;
- (id)initWithText:(id)arg1 styleType:(unsigned long long)arg2 glyph:(id)arg3;
- (id)initWithValue:(id)arg1 valueType:(unsigned long long)arg2 styleType:(unsigned long long)arg3;
- (BOOL)isEqual:(id)arg1;

@end

