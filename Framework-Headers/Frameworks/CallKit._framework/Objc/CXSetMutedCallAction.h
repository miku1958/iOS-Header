//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CallKit/CXCallAction.h>

@interface CXSetMutedCallAction : CXCallAction
{
    BOOL _muted;
}

@property (nonatomic, getter=isMuted) BOOL muted; // @synthesize muted=_muted;

+ (BOOL)supportsSecureCoding;
- (id)customDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCallUUID:(id)arg1 muted:(BOOL)arg2;
- (id)initWithCoder:(id)arg1;
- (void)updateSanitizedCopy:(id)arg1 withZone:(struct _NSZone *)arg2;

@end

