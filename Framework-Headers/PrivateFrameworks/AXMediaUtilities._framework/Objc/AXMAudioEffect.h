//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AXMAudioDataSource;

@interface AXMAudioEffect : NSObject
{
    AXMAudioDataSource *_inputSource;
}

@property (weak, nonatomic) AXMAudioDataSource *inputSource; // @synthesize inputSource=_inputSource;

- (void).cxx_destruct;
- (void)processSamples:(unsigned long long)arg1;

@end
