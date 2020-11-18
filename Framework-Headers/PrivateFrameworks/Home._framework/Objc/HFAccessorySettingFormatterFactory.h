//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface HFAccessorySettingFormatterFactory : NSObject
{
    NSMutableDictionary *_formattersForKey;
}

@property (strong, nonatomic) NSMutableDictionary *formattersForKey; // @synthesize formattersForKey=_formattersForKey;

+ (id)_siriOutputVoiceFormatter;
+ (id)_siriRecognitionLanguageFormatter;
+ (id)defaultFactory;
- (void).cxx_destruct;
- (id)_buildFormatterForKey:(id)arg1;
- (id)formatterForKey:(id)arg1;
- (id)formatterForKey:(id)arg1 copy:(BOOL)arg2;
- (id)init;

@end
