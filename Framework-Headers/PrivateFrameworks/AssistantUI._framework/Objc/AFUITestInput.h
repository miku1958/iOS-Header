//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SASRequestOptions;

@interface AFUITestInput : NSObject
{
    SASRequestOptions *_requestOptions;
}

@property (readonly, nonatomic) SASRequestOptions *requestOptions; // @synthesize requestOptions=_requestOptions;

+ (id)_baseRequestOptions;
- (void).cxx_destruct;
- (id)_initWithRequestOptions:(id)arg1;
- (id)initWithRecordedSpeechURL:(id)arg1;
- (id)initWithText:(id)arg1;

@end
