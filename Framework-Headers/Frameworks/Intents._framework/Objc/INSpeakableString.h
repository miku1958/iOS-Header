//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Intents/INSpeakable-Protocol.h>
#import <Intents/INSpeakableStringExport-Protocol.h>

@class NSString;

@interface INSpeakableString : NSObject <INSpeakableStringExport, INSpeakable>
{
    NSString *_spokenPhrase;
    NSString *_pronunciationHint;
    NSString *_identifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (strong, nonatomic) NSString *pronunciationHint; // @synthesize pronunciationHint=_pronunciationHint;
@property (strong, nonatomic) NSString *spokenPhrase; // @synthesize spokenPhrase=_spokenPhrase;
@property (readonly) Class superclass;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_effectiveNSStringValue;
- (unsigned short)characterAtIndex:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 spokenPhrase:(id)arg2 pronunciationHint:(id)arg3;
- (id)initWithSpokenPhrase:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)length;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;

@end

