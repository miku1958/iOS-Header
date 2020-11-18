//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString;

@interface AVCCaptionsResult : NSObject
{
    BOOL _utteranceComplete;
    NSMutableArray *_tokens;
    unsigned int _utteranceNumber;
    unsigned int _updateNumber;
}

@property (readonly, nonatomic) NSString *text;
@property (readonly, nonatomic) NSArray *tokens; // @synthesize tokens=_tokens;
@property (readonly, nonatomic) unsigned int updateNumber; // @synthesize updateNumber=_updateNumber;
@property (readonly, nonatomic) BOOL utteranceComplete; // @synthesize utteranceComplete=_utteranceComplete;
@property (readonly, nonatomic) unsigned int utteranceNumber; // @synthesize utteranceNumber=_utteranceNumber;

- (BOOL)addTokenWithString:(id)arg1 confidence:(double)arg2 spaceAfter:(BOOL)arg3;
- (void)dealloc;
- (id)description;
- (id)initWithCapacity:(long long)arg1 utteranceComplete:(BOOL)arg2 utteranceNumber:(unsigned int)arg3 updateNumber:(unsigned int)arg4;

@end

