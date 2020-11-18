//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <EmbeddedAcousticRecognition/NSCopying-Protocol.h>

@class NSArray;

@interface _EARSpeechRecognition : NSObject <NSCopying>
{
    NSArray *_tokenSausage;
    NSArray *_interpretationIndices;
}

@property (readonly, copy, nonatomic) NSArray *interpretationIndices; // @synthesize interpretationIndices=_interpretationIndices;
@property (readonly, copy, nonatomic) NSArray *tokenSausage; // @synthesize tokenSausage=_tokenSausage;

- (void).cxx_destruct;
- (id)_initWithNBestList:(const vector_2c247c42 *)arg1 useHatText:(BOOL)arg2;
- (id)_initWithTokenSausage:(id)arg1 interpretationIndices:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)nBest;
- (id)oneBest;

@end

