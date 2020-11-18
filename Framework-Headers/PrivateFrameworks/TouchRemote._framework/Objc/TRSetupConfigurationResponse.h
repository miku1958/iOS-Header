//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TouchRemote/TRResponseMessage.h>

@class NSSet;

@interface TRSetupConfigurationResponse : TRResponseMessage
{
    BOOL _needsNetwork;
    NSSet *_unauthenticatedAccountServices;
}

@property (nonatomic) BOOL needsNetwork; // @synthesize needsNetwork=_needsNetwork;
@property (copy, nonatomic) NSSet *unauthenticatedAccountServices; // @synthesize unauthenticatedAccountServices=_unauthenticatedAccountServices;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_stringFromAccountServices:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

