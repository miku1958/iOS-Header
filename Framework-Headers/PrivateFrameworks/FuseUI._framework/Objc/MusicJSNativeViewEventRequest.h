//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface MusicJSNativeViewEventRequest : NSObject
{
    NSDictionary *_extraInfo;
    long long _nativeViewEventType;
    CDUnknownBlockType _completion;
}

@property (copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property (copy, nonatomic) NSDictionary *extraInfo; // @synthesize extraInfo=_extraInfo;
@property (nonatomic) long long nativeViewEventType; // @synthesize nativeViewEventType=_nativeViewEventType;

- (void).cxx_destruct;

@end
