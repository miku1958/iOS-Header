//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface AXCharacterSoundMap : NSObject
{
    NSMutableDictionary *_phDictionaries;
}

@property (strong, nonatomic) NSMutableDictionary *phDictionaries; // @synthesize phDictionaries=_phDictionaries;

- (void).cxx_destruct;
- (id)_linguisticStringForCharacter:(id)arg1 language:(id)arg2 linguisticType:(long long)arg3 andVoiceIdentifier:(id)arg4;
- (id)init;
- (id)phonemeStringForCharacter:(id)arg1 forLanguage:(id)arg2 andVoiceIdentifier:(id)arg3;
- (id)phoneticStringForCharacter:(id)arg1 forLanguage:(id)arg2 andVoiceIdentifier:(id)arg3;

@end

