//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SiriVOX/NSCopying-Protocol.h>
#import <SiriVOX/NSSecureCoding-Protocol.h>

@class NSString;

@interface SVXDeviceSetupFlowDisplayKeyFrame : NSObject <NSCopying, NSSecureCoding>
{
    long long _keyFrameID;
    NSString *_text;
    double _offset;
    double _duration;
}

@property (readonly, nonatomic) double duration; // @synthesize duration=_duration;
@property (readonly, nonatomic) long long keyFrameID; // @synthesize keyFrameID=_keyFrameID;
@property (readonly, nonatomic) double offset; // @synthesize offset=_offset;
@property (readonly, copy, nonatomic) NSString *text; // @synthesize text=_text;

+ (id)newWithBuilder:(CDUnknownBlockType)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_descriptionWithIndent:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithKeyFrameID:(long long)arg1 text:(id)arg2 offset:(double)arg3 duration:(double)arg4;
- (BOOL)isEqual:(id)arg1;
- (id)mutatedCopyWithMutator:(CDUnknownBlockType)arg1;

@end

