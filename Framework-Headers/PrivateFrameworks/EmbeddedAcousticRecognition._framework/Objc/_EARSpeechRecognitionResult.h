//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <EmbeddedAcousticRecognition/NSCopying-Protocol.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface _EARSpeechRecognitionResult : NSObject <NSCopying>
{
    NSArray *_tokens;
}

@property (readonly, copy, nonatomic) NSArray *tokens; // @synthesize tokens=_tokens;

- (void).cxx_destruct;
- (id)_initWithTokens:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
