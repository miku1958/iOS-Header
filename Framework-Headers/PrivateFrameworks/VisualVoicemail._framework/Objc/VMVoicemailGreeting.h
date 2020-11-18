//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <VisualVoicemail/NSSecureCoding-Protocol.h>

@class NSURL;

@interface VMVoicemailGreeting : NSObject <NSSecureCoding>
{
    double _duration;
    NSURL *_url;
    unsigned long long _type;
}

@property (nonatomic) double duration; // @synthesize duration=_duration;
@property (nonatomic) unsigned long long type; // @synthesize type=_type;
@property (strong, nonatomic) NSURL *url; // @synthesize url=_url;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
