//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <VoiceServices/NSSecureCoding-Protocol.h>

@interface VSSpeechWordTimingInfo : NSObject <NSSecureCoding>
{
    double _startTime;
    struct _NSRange _textRange;
}

@property (nonatomic) double startTime; // @synthesize startTime=_startTime;
@property (nonatomic) struct _NSRange textRange; // @synthesize textRange=_textRange;

+ (BOOL)supportsSecureCoding;
+ (id)wordTimingInfoFrom:(id)arg1 timestamps:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

