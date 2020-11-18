//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CallKit/CXVoicemailAction.h>

@interface CXSetTrashedVoicemailAction : CXVoicemailAction
{
    BOOL _trashed;
}

@property (nonatomic, getter=isTrashed) BOOL trashed; // @synthesize trashed=_trashed;

+ (BOOL)supportsSecureCoding;
- (id)customDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithVoicemailUUID:(id)arg1 trashed:(BOOL)arg2;
- (void)updateSanitizedCopy:(id)arg1 withZone:(struct _NSZone *)arg2;

@end
