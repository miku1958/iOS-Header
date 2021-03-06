//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CallKit/CXVoicemailAction.h>

@interface CXSetPlayedVoicemailAction : CXVoicemailAction
{
    BOOL _played;
}

@property (nonatomic, getter=isPlayed) BOOL played; // @synthesize played=_played;

+ (BOOL)supportsSecureCoding;
- (id)customDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithVoicemailUUID:(id)arg1 played:(BOOL)arg2;
- (void)updateSanitizedCopy:(id)arg1 withZone:(struct _NSZone *)arg2;

@end

